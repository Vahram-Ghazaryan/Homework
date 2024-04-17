#include <iostream> 
int input_size_of_arrays();
float input_array_elements(); 
int main() {
    int size_line = 0;
    int size_pillar = 0;
    std::cout << "Input size of array line (normal number)   ";
    size_line = input_size_of_arrays();
    std::cout << std::endl << "Input size of array pillar (normal number)    ";
    size_pillar = input_size_of_arrays();
    float array[size_line][size_pillar] = {0};
    std::cout << std::endl << "Input array elements    " << std::endl;
    for (int i = 0; i < size_line; ++i) {
        for (int j = 0; j < size_pillar; ++j) {
            std::cout << "array[" << i << "][" << j << "] = ";
            array[i][j] = input_array_elements();
        }
    } 
    bool availability = false;
    int temp = 0;  
    std::cout << std::endl;
    for (int i = 0; i < size_line; ++i) {
        for (int j = 0; j < size_pillar; ++j) {
            for (int k = 0; k < size_line; ++k) {
                for (int p = 0; p < size_pillar; ++p) {   
                    if (array[k][p] == array[i][j] ) {
                        ++temp;  
                    }
                }
            }
            if (temp == 1) {
                availability = true;
                std::cout << array[i][j] << " ";
            }
            temp = 0;
        }
    }                                
    if (availability == true) {
        std::cout <<  " are(is) not  repeated." << std::endl;
    } else {
        std::cout << "All elements in this array are repeated." << std::endl;
    } 
    return 0;
}
int input_size_of_arrays() {
    int size = 0;
    while (true) {
        std::cin >> size;
        if (!std::cin.fail() && size > 0 ) {
            break;
        }
        std::cout << "Error!!! Inpute again   ";
        std::cin.clear();
        std::cin.ignore(1000,'\n');
    }
    return size;
}
float input_array_elements() {
    float element = 0;
    while (true) {
        std::cin >> element;
        if (!std::cin.fail()) {
            break;
        }
        std::cout << "Error!!! Inpute again   ";
        std::cin.clear();
        std::cin.ignore(1000,'\n');
    }
    return element;
}

