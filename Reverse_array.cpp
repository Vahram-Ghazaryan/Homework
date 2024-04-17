#include <iostream>
int main() {
    int size = 0;
    std::cout << "Inpute string size (normal number)  ";
    int  only = 0;
        while (true)  {
	    std::cin >> size;
	        if (!std::cin.fail()) {   
	             break;	
           	}
        	std::cin.clear();
             std::cin.ignore();
           if (only = 0) { 
           ++only;
           continue;    
      }  else { 
             std::cout << "Error!!! Inpute again    ";
      }
}
    char array[size] = {'0'};
    std::cout << "Every letter on a line" << std::endl;
    for (int i = 0; i < size; ++i) {
	std::cin >> array[i];
    }
    for (int i = 0, j = size - 1; i < j; ++i, --j) {
	array[i] += array[j];
        array[j] = array[i] - array[j];
	array[i] = array[i] - array[j]; 
    }    
    for (int i = 0; i < size; ++i) {
	std::cout << array[i];    
    }
   std::cout << std::endl;
     return 0;
}
