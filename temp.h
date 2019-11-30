void func1() {
	t = 0;
	e = 0
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