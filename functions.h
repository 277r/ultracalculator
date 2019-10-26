#pragma once

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
void test() {
	t = 2;
	std::cout << "activated test mode" << std::endl;
	std::cout << "this mode shows if your device is compatible with a 64 bit calculator. if the last number not equal to zero is -9223372036854775808 then your device is compatible" << std::endl;
	std::cout << "type anything to continue" << std::endl;
	std::cin >> e;
	while (t != 0) {
		t = t + t;
		std::cout << t << std::endl;

	}
	std::cin >> e;
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
	m2 = 0;
	e = 0;
	std::cout << "enter the last number, press enter, enter the second number" << std::endl;
	std::cin >> z;
	std::cin >> x;
	if (z > 0 && 0 > x) {
		m2 = 1;
	}
	y = x;
	while (e != 1) {

		if (x != 0) {
			a = z / x;
			b = x;
		}
		if (a + b == y && a * b == z) {
			std::cout << "(x+" << a << ")(x+" << b << ")" << std::endl;
			e = 1;

		}
		if (m2 == 0) {
			x--;
		}
		else {
			x++;
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