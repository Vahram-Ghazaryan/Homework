#include <iostream>
int main(){
	double num1, num2;
	char x;
	std::cout << "input number 1";
	std::cin >> num1;
	std::cout << "input action sign: +,-,/,*";
	std::cin >> x;
	std::cout << "input number 2";
	std::cin >> num2;
	if (x == '+'){
		double sum = num1+num2;
			std::cout << "the sum of the entered numbers" << sum << std::endl;
	}
	if(x == '-'){
		double differense = num1-num2;
			std::cout << "the differense between the entered numbers" << differense << std::endl;
	}
	if(x == '*'){
	double product = num1*num2;
			std::cout << "the product of the entered numbers" << product << std::endl;
	}	
	if(x == '/'){
		double quotient = num1/num2;
			std::cout << "quotient of entered numbers" << quotient << std::endl;
	}else{
		std::cout << "error" << std::endl;
	}	
					
			return 0;
}	

