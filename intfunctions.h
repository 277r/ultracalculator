#pragma once

long long int t; // integer used as counter, and other
long long int a; // input a
long long int b; // input b
long long int x; // most of the time used to store input b when b is changed in calculation
long long int y; // most of the time used to store input a when a is changed in calculation
long long int z; // used for complex calculations
long long int sub; // subcalculation. integer that is used to store calculations not fully complete
long long int sum; // output of the calculation
bool e; // ends a loop if it changes

void multiply() {
	std::cout << "enter the numbers to multiply" << std::endl;
	std::cin >> a;
	std::cin >> b;
	sum = a * b;
	std::cout << sum << std::endl;
}
void add() {
	std::cout << "enter the numbers to add" << std::endl;
	std::cin >> a;
	std::cin >> b;
	sum = a + b;
	std::cout << sum << std::endl;
}
void subtract() {
	std::cout << "enter the numbers to subtract" << std::endl;
	std::cin >> a;
	std::cin >> b;
	sum = a - b;
	std::cout << sum << std::endl;
}
void divide() {
	std::cout << "enter the numbers to divide" << std::endl;
	std::cin >> a;
	std::cin >> b;
	sum = a / b;
	std::cout << sum << std::endl;
}
void power() {
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
void factor() {
	t = 0;
	e = 0;
		std::cout << "enter the last number, press enter, enter the second number" << std::endl;
	std::cin >> a;
	std::cin >> b;
	if (a > 0 && 0 > b) {
		t = 1;
	}
	y = b;
	while (e != 1) {

		if (b != 0) {
			z = a / b;
			x = b;
		}
		if (z + x == y && z * x == a) {
			std::cout << "(x+" << z << ")(x+" << x << ")" << std::endl;
			e = 1;

		}
		if (t == 0) {
			b--;
		}
		else {
			b++;
		}
	}
}
void prime() {
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