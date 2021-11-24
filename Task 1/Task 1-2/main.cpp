#include <iostream>
#include <cmath>
/**
* \brief Главная функция. Точка входа в программу.
* \return Возвращает 0 в случае успеха.
* \double .. Обьявляем переменные.
*/
int main()
{
	std::cout << "Введите значения переменных ";

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