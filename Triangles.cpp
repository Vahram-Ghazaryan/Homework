#include <iostream>
int main() {
	int size = 0;
	char symbol = '0';
		std::cout << "Input the size of the triangle ( natural number )      ";
		std::cin >> size;
		std::cout << " Write the symbol with which the triangle should be represented      ";
		std::cin >> symbol;
	if ( size > 0 ) {
		std::cout << std::endl << " Tringle of the first type " << std::endl << std::endl;
		for ( int i = 0; i < size; ++i ) {
			for ( int j = 0; j <= i; ++j ) {
				std::cout << "   " << symbol;
			}
			std::cout << std::endl;
		}
		std::cout << std::endl << " Tringlie of the second type " << std::endl << std::endl;
		for ( int i = 0; i < size; ++i ) {
			for ( int j = size - 1; j > i; --j ) {
				std::cout << "   ";
			}
			for ( int k = 0; k <=i; ++k ) {
				std::cout << "  " << symbol;
			}
			std::cout << std::endl;
		}
		std::cout << std::endl << " Tringlie of the third type " << std::endl << std::endl;
		for ( int i = 0; i < size; ++i ) {
			for ( int j = size - 1; j > i; --j ) {
				std::cout << "   ";
			}
			for ( int k = 1; k <= i * 2 + 1; ++k ) {
				if ( k % 2 == 1 ) {
					std::cout << "  " << symbol;
				} else {
					std::cout << "   ";
				}
			}
			for ( int j = size - 1; j > i; --j ) {
				std::cout << "   ";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	} else {
		std::cout << " ERROR!!!" << std::endl << " Triangle size cannot be negative or 0. " << std::endl;
	}
	return 0;
}
