#include <iostream>
int main() {
	int num = 0;
		std::cout << " Inpute number	";
		std::cin >> num;
	int factorial = 1;
	for ( int i = 2; i <= num; ++i ) {
		factorial *= i;
	}
	std::cout << " The factorial of the number inputed is	" << factorial << std::endl;
	return 0;
}
