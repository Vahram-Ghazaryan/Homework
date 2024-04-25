#include <iostream>
int main() {
        int num = 0;
        	std::cout << " Input number	";
		std::cin >> num;
	int num1 = 0;
	while ( num > 0) {
		num1 = num1*10 + num % 10;
        	num /= 10;
	}
        std::cout << " The inverted number is	" << num1 << std::endl;
	return 0;
}



