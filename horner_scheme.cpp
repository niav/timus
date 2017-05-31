#include <iostream>

double horner_scheme(int n, double x);

int main() {

	int n;
	double x;

	std::cin >> n >> x;
	
	std::cout << horner_scheme(n, x);

	return 0;
}

double horner_scheme(int n, double x)
{
	double p_x{ 0 };
	double a_n;

	if (n == 0) {
		std::cin >> a_n;
		p_x += a_n;

		return p_x;
	}

	std::cin >> a_n;
	--n;

	if (n == 0) {
		p_x += a_n*x;

		std::cin >> a_n;
		p_x += a_n;

		return p_x;
	}

	p_x += a_n*x;

	while (n > 0) {
		std::cin >> a_n;
		p_x += a_n;
		p_x *= x;
		--n;
	}


	std::cin >> a_n;
	p_x += a_n;

	return p_x;
}