#include <iostream>
#include <cmath>

int main()
{
	std::cout << "Введите значение для двух переменных a и b: ";

	double a = 0;
	double b = 0;
	std::cin >> a;
	std::cin >> b;

	double sr_arif = 0;
	double sr_geomtr = 0;
	double sr_arif = (a + b) / 2;
	double d = abs(a) * abs(b);
	double sr_geomtr = sqrt(d);
	std::cout << "Среднее арифмитическое = " << sr_arif;
	std::cout << "Среднее геометрическое = " << sr_geomtr;

	return 0;
}
