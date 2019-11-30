#include <iostream>
#include "intfunctions.h" // file for all functions working with integers
#include "floatfunctions.h" // file for all (possible) functions working with floats

char which; // asks for function type
char mode;

int main() {
	system("color 0a");
	std::cout << "https://github.com/rickdegraaf1/ultracalculator/releases" << std::endl;
	while (true) {
		std::cout << "do you want to run in float or int mode? some functions are not available for float" << std::endl << "possible options: f, i" << std::endl;
		std::cin >> mode;
		which = '0';
		if (mode == 'f') {
			std::cout << "do you want to exit, multiply, add, subtract, divide or calculate the power" << std::endl << "possible options : e m a s d p" << std::endl;
		}
		else if (mode == 'i') {
			std::cout << "do you want to exit, multiply, add, subtract, divide, calculate the power, factorize formulas or calculate prime numbers?" << std::endl << "possible options : e m a s d  p f r" << std::endl;
		}
		std::cin >> which;

		if (which == 'm') { 
			if (mode == 'f') {
				fmultiply();
			}
			else {
				multiply();
			}
		}
		else if (which == 'a') {
			if (mode == 'f') {
				fadd();
			}
			else {
				add();
			}
		}
		else if (which == 's') {
			if (mode == 'f') {
				fsubtract();
			}
			else {
				subtract();
			}
		}
		else if (which == 'd') {
			if (mode == 'f') {
				fdivide();
			}
			else {
				divide();
			}
		}
		else if (which == 'p') {
			if (mode == 'f') {
				fpower();
			}
			else {
				power();
			}
		}
		else if (which == 'f') {
			if (mode == 'f') {
				ffactor();
			}
			else {
				factor();
			}
		}
		else if (which == 'r') {
			if (mode == 'f') {
				fprime();
			}
			else {
				prime();
			}
		}
		else if (which == 'e') {
			return 0;
		}

	}

}
