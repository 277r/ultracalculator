#include <iostream>
#include <string>


char which;
long long int t;
long long int sum;
long long int a;
long long int b;
long long int x;
long long int y;
long long int z;
long long int sub;
int m2;
bool e;
int main() {
	e = 0;
	std::cout << "https://github.com/rickdegraaf1/ultracalculator/releases" << std::endl;
	std::cout << "do you want to multiply, add, subtract, divide, calculate the power, factorize formulas or calculate prime numbers?" << std::endl <<"you can also type t to see if your device is compatible. possible options : m a s d t p f r" << std::endl;
	std::cin >> which;
	if (which == 'm') {
		std::cout << "enter the numbers to multiply" << std::endl;
		std::cin >> a;
		std::cin >> b;
		sum = a * b;
		std::cout << sum << std::endl;

	}
	else if (which == 'a') {
		std::cout << "enter the numbers to add" << std::endl;
		std::cin >> a;
		std::cin >> b;
		sum = a + b;
		std::cout << sum << std::endl;
	}
	else if (which == 's') {
		std::cout << "enter the numbers to subtract" << std::endl;
		std::cin >> a;
		std::cin >> b;
		sum = a - b;
		std::cout << sum << std::endl;
	}
	else if (which == 'd') {
		std::cout << "enter the numbers to divide" << std::endl;
		std::cin >> a;
		std::cin >> b;
		sum = a / b;
		std::cout << sum << std::endl;
	}
	else if (which == 't') {
		t = 2;
		std::cout << "activated test mode" << std::endl;
		std::cout << "this mode shows if your device is compatible with a 64 bit calculator. if the last number not equal to zero is -9223372036854775808 then your device is compatible" << std::endl;
		std::cout << "press any key to continue" << std::endl;
		std::cin >> e;
		while (t != 0) {
			t = t + t;
			std::cout << t << std::endl;

		}

	}
	else if (which == 'p') {
		std::cout << "enter the numbers to calculate the power" << std::endl;
		std::cin >> a;
		std::cin >> b;
		sub = 1;
		while (b > 0) {
			b--;
			sub = sub * a;
		}
		std::cout << sub << std::endl;
	}
	else if (which == 'f') {
		std::cout << "enter the last number, press enter, enter the second number" << std::endl;
		std::cin >> z;
		std::cin >> x;
		if (z > 0 && 0 > x) {
			m2 = 1;
		}
		y = x;
		while (true) {

			if (x != 0) {
				a = z / x;
				b = x;
			}
			if (a + b == y && a * b == z) {
				std::cout << "(x+" << a << ")(x+" << b << ")" << std::endl;
				std::cin >> x;
				return 0;
			}
			if (m2 == 0) {
				x--;
			}
			else {
				x++;
			}
		}
	}
	else if (which == 'r') { 
		std::cout << "enter the number to start at, then enter the number to stop at" << std::endl;
		std::cin >> a;
		std::cin >> b;
		while (b > a) {
			t = 0;
			y = a;
			while (y > 1) {
				y--;
				sum = a % y;
				if (sum == 0) {
					t++;
				}
			}
			if (t == 1) {
				std::cout << a << std::endl;
			}

			a++;
		}
	}
	std::cin >> e;
	return 0;
	
}
