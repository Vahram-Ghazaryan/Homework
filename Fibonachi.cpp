#include <iostream>
int main() {
	int size = 0;
		std::cout << " Input the size of array ( natural number )     ";
		std:: cin >> size;
		std::cout << std::endl;
	if ( size > 0 ) {
		int arr[size] = {0};
			arr[0] = 1;
			arr[1] = 1;
		for ( int i = 2; i < size; ++i ) {
			arr[i] = arr[i-1] + arr[i-2];
		}
		for ( int i = 0; i < size; ++i ) {
			for ( int j = 0; j <= i; ++j ) {
				std::cout << arr[j] << " ";
			}
			std::cout << std::endl;
		}
	} else {
		std::cout << " ERROR!!! The size of a triangle cannot be negative or 0. " << std::endl;
	}
	return 0;

}
