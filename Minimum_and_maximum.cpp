#include <iostream>
#define MIN( a, b ) a < b ? a: b
#define MAX( a, b ) a > b ? a: b
int main () {
	int size = 0;
		std::cout << " Input size of array      ";
		std::cin >> size;
		std::cout << std::endl;
	float arr[size] = {0};
		std::cout << " Input array elements " << std::endl << std::endl;
		for ( int i = 0; i < size; ++i ) {
			std::cout << " Input arr[" << i << "] = ";
			std::cin >> arr[i];
			
		}
		std::cout << std::endl;
		float min = arr[0];
		float max = arr[0];
		for ( int i = 0; i < size; ++i ) {
			min = MIN ( arr[i], min );
			max = MAX ( arr[i], max );
		}
		if ( min != max ) {
			std::cout << " The maximum element of array is " << max << std::endl;
			std::cout << " The minimum element of array is " << min << std::endl;
		} else {
			std::cout << " The array has no maximum and minimum value, all elements of the array are equal      " << max << std::endl;
		}
	return 0;
}
