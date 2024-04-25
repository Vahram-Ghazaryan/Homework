#include <iostream>
int inpute_size_of_array();
float inpute_array_elements();
int main() {
    int size_line = 0;
    int size_pillar = 0;
    std::cout << "Input size of array line (normal number)   ";
    size_line = inpute_size_of_array();
    std::cout << std::endl << "Input size of array pillar (normal number)    ";
    size_pillar = inpute_size_of_array();
    float array[size_line][size_pillar] = {0};
    std::cout << std::endl << "Input array elements    " << std::endl;
    for (int i = 0; i < size_line; ++i) {
        for (int j = 0; j < size_pillar; ++j) {
            std::cout << "array[" << i << "][" << j << "] = ";
            array[i][j] = inpute_array_elements();
        }
    }
    std::cout << std::endl << "Original array" << std::endl;
    for (int i = 0; i < size_line; ++i) {
        for (int j = 0; j < size_pillar; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    int temp = 0;
    int down = size_line - 1;
    int left = 0;
    int right = size_pillar - 1;
    int up = 0;
    std::cout << std::endl << "Array elements in a spiral order     ";
    while ((up <= down) && (left <= right)) {
        switch (temp) {
            case 0:
                for (int i = left; i <= right; ++i) {
                    std::cout << array[up][i] << " ";
                }
                ++up;
                break;        
            case 1:  
                for (int i = up; i <= down; ++i) {
                    std::cout << array[i][right] << " ";
                }
                --right;
                break;            
            case 2:  
                for (int i = right; i >= left; --i) {
                    std::cout << array[down][i] << " ";
                }
                --down;
                break;            
            case 3:
                for (int i = down; i >= up; --i) {
                    std::cout << array[i][left] << " ";
                }
                ++left;
                break;            
        }
        temp = (temp + 1) % 4;
    }
    std::cout << std::endl;
    return 0;
}
int inpute_size_of_array() {
                    ++up;
    int size = 0;
    std::cin >> size;
    while (std::cin.fail() || size < 0) {
        std::cout << "Erroe!!! Inpute again    ";
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        std::cin >> size;
    }
    return size;
}
float inpute_array_elements() {
    float element = 0;
    std::cin >> element;
    while (std::cin.fail()) {
        std::cout << "Erroe!!! Inpute again    ";
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        std::cin >> element;
    }
    return element;
}
