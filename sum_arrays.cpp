#include <iostream>
int input_size_of_arrays(); 
float input_array_elements();
int main() {
    int size_lines = 0;
    std::cout << "Inpute size of arrays lines (normal number)    "; 
    size_lines = input_size_of_arrays();
    int size_pillars = 0;
    std::cout << "Inpute size of arrays pillars    ";
    size_pillars = input_size_of_arrays();
    float array_1[size_lines][size_pillars] = {0};
    std::cout << std::endl << "Inpute elements of first array " << size_lines << "x" << size_pillars << std::endl;
    for (int i = 0; i < size_lines; ++i) {
        for (int j = 0; j < size_pillars; ++j) {
            std::cout << "array_1[" << i << "][" << j << "] = ";
            array_1[i][j] = input_array_elements();
        }
    }
    std::cout << std::endl;
    std::cout << "Inpute elements of second array " << size_lines << "x" << size_pillars << std::endl;
    float array_2[size_lines][size_pillars] ={0};
    for (int i = 0; i < size_lines; ++i) {
        for (int j = 0; j < size_pillars; ++j) {
            std::cout << "array_2[" << i << "][" << j << "] = ";
            array_2[i][j] = input_array_elements();
        }
    }
    std::cout << std::endl << "First array" << std::endl;
    for (int i = 0; i < size_lines; ++i) {
        for (int j = 0; j < size_pillars; ++j) {
            std::cout << array_1[i][j] << "    ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << "Second array" << std::endl;
    for (int i = 0; i < size_lines; ++i) {
        for (int j = 0; j < size_pillars; ++j) {
            std::cout << array_2[i][j] << "    ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << "The sum of arrays" << std::endl;
    for (int i = 0; i < size_lines; ++i) {
        for (int j = 0; j < size_pillars; ++j) {
            array_1[i][j] += array_2[i][j];
            std::cout << array_1[i][j] << "    ";
        }
        std::cout << std::endl;
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

