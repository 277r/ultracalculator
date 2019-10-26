#include <iostream>
#include <string>
#include "functions.h"


char which;

int main() {
	std::cout << "https://github.com/rickdegraaf1/ultracalculator/releases" << std::endl;
	while (true) {
		std::cout << "do you want to exit, multiply, add, subtract, divide, calculate the power, factorize formulas or calculate prime numbers?" << std::endl << "possible options : e m a s d  p f r" << std::endl;
		std::cin >> which;

		if (which == 'm') {
			multiply();
		}
		else if (which == 'a') {
			add();
		}
		else if (which == 's') {
			subtract();
		}
		else if (which == 'd') {
			divide();
		}
		else if (which == 'p') {
			power();
		}
		else if (which == 'f') {
			factor();
		}
		else if (which == 'r') {
			prime();
		}
		else if (which == 'e') {
			return 0;
		}

	}

}
