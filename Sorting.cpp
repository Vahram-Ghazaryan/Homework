#include <iostream>
void sorting( int size) {
        float array[size] = {0};
                std::cout << "Input array elements" << std::endl;
                std::cout << " array[" << 0 << "] = ";
                std::cin >> array[0];
        float min = array[0];
        float max = array[0];
        int minimumIndex = 0;
        for ( int i = 1; i < size; ++i) {
                std::cout << " array[" << i << "] = ";
                std::cin >> array[i];
                if ( array[i] > max ) {
                        max = array[i];
                }
        }
	std::cout << " This is the sorted array     ";
        for ( int i = 0; i < size; ++i ) {
                for ( int j = 0; j < size; ++j ) {
                        if ( array[j] < min ) {
                                min = array[j];
                                minimumIndex = j;
                        }

                }
                std::cout << min << " ";
                array[ minimumIndex ] = max;
                min = max;
        }
	std::cout << std::endl;
} 
int main() {
        int arraySize = 0;
                std::cout << " Input array size (natural number)     ";
                std::cin >> arraySize;
        sorting( arraySize );
        return 0;
}      
