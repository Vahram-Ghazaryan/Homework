#include <iostream>
int main() {
	int num = 0;
		std::cout << " Inpute number	";
		std::cin >> num;
	int num1 = 0;
	int num2 = num;
	while ( num > 0) {
		num1 = num1*10 + num % 10;
		num /= 10;
	}
	if ( num2 == num1 ) {
		std::cout << " Inputed number is palindrome " << std::endl;
	} else {
		std::cout << " Inputed number is not palindrome " << std::endl;
	}
	return 0;
} 
