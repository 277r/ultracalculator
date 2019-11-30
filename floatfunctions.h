#pragma once


int ft; // integer used as counter, and other
float fa; // input a
float fb; // input b
float fx; // most of the time used to store input b when b is changed in calculation
float fy; // most of the time used to store input a when a is changed in calculation
float fz; // used for complex calculations
float fsub; // subcalculation. integer that is used to store calculations not fully complete
float fsum; // output of the calculation
bool fe; // ends a loop if it changes

void fmultiply() {
	std::cout << "enter the numbers to multiply" << std::endl;
	std::cin >> fa;
	std::cin >> fb;
	fsum = fa * fb;
	std::cout << fsum << std::endl;
}
void fadd() {
	std::cout << "enter the numbers to add" << std::endl;
	std::cin >> fa;
	std::cin >> fb;
	fsum = fa + fb;
	std::cout << fsum << std::endl;
}
void fsubtract() {
	std::cout << "enter the numbers to subtract" << std::endl;
	std::cin >> fa;
	std::cin >> fb;
	fsum = fa - fb;
	std::cout << fsum << std::endl;
}
void fdivide() {
	std::cout << "enter the numbers to divide" << std::endl;
	std::cin >> fa;
	std::cin >> fb;
	fsum = fa / fb;
	std::cout << fsum << std::endl;
}
void fpower() {
	std::cout << "enter the numbers to calculate the power" << std::endl;
	std::cin >> fa;
	std::cin >> fb;
	fsub = 1;
	while (fb > 0) {
		fb--;
		fsub = fsub * fa;
	}
	std::cout << fsub << std::endl;
}
void ffactor() {
	std::cout << "this function can't be used in float mode" << std::endl;
}
void fprime() {
	std::cout << "this function can't be used in float mode" << std::endl;
}