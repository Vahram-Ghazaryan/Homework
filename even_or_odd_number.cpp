#include <iostream>
int main() {
	int number = 0;
		std::cout << " Input number    ";
	        std::cin >> number;
	if ( number == 0 ) {
		std::cout << " Zero is neither odd nor even " << std::endl;
	} else {
		if ( number % 2 == 0 ) {
		std::cout << " The number you entered is even " << std::endl;
		} else {
	       		std::cout << " The number you entered is odd " << std::endl;
		}
	}
	return 0;
}
