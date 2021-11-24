#include <iostream>
/**
* \brief Главная функция. Точка входа в программу.
* \return Возвращает 0 в случае успеха.
* \double .. Обьявляем переменные.
*/
int main()
{
	std::cout << "Введите расстояние растяжения пружины ";
	double x = 0;
	std::cin >> x;

	std::cout << "Введите коэффициент жёсткости пружины ";
	double k = 0;
	std::cin >> k;

	double a = x / 1000;
	double p_energy = (k * (a * a)) / 2;
	std::cout << "Потенциальная энергия пружины равна " << p_energy;

	return 0;
}