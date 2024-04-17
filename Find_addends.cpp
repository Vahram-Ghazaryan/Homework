#include <iostream>
int main() {
    int size1 = 0;
	std::cout << "Inpute size of array (normal number)    ";
    while (true)  {
	std::cin >> size1;
	if (!std::cin.fail()) {   
	    break;	
	}
        std::cout << "Error!!! Inpute again    ";
	std::cin.clear();
        std::cin.ignore(); 
    }
    const int size = size1;
    float array[size] = {0};		
    for (int i = 0; i < size; ++i) {
	std::cout << "array[" << i << "] = ";
	std::cin >> array[i];
    }
    float number = 0;
    std::cout << "Inpute the number    ";
    std::cin >> number;
    bool at_least_one = false;
    for (int i = 0; i < size; ++i) {
	for (int j = i; j <= size ; ++j) {
	    if (array[i] + array[j + 1] == number) {
		at_least_one = true;
		std::cout << "The addends are    " << array[i] << " and " << array[j + 1] << std::endl;
	    }
	}
    }
    if (at_least_one == false) {
	std::cout << "That number don't have addends in that array" << std::endl;
    }
    return 0;
}
