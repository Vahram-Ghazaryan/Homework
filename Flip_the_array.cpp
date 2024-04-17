#include <iostream>
int input_size_of_array(); 
float input_array_elements();
int main() {
    int array_size = 0;
    std::cout << "Inpute the square array size   (normal number)   ";
    array_size = input_size_of_array();
    float array[array_size][array_size] = {0};
    for (int i = 0; i < array_size; ++i) {
        for (int j = 0; j < array_size; ++j) {
            std::cout << "array["<< i << "][" << j << "] = ";
            array[i][j] = input_array_elements();
        }
    }
    std::cout << std::endl << "Normal array " <<  std::endl;
    for (int i = 0; i < array_size; ++i) {
        for (int j = 0; j < array_size; ++j) {
            std::cout << array[i][j] << "    ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << "Fliped array " << std::endl;  
    for (int i = 0; i < array_size; ++i) {
        for (int j = i + 1; j < array_size; ++j) {
            array[i][j] += array[j][i];
            array[j][i] = array[i][j] - array[j][i];
            array[i][j] = array[i][j] - array[j][i];
        }
    }
    for (int i = 0; i < array_size; ++i) {
        for (int j = 0; j < array_size; ++j) {
            std::cout << array[i][j] << "    ";
        }
        std::cout << std::endl;
    }
    return 0;
}
int input_size_of_array() {
    int size = 0;
    while (true) {
        std::cin >> size;
        if (!std::cin.fail()&& size > 0 ) {
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

