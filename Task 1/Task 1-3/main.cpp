#include <iostream>

void func(){
	double a = x / 1000;
	double p_energy = (k * (a * a)) / 2;
	std::cout << "Потенциальная энергия пружины равна " << p_energy;
}

int main()
{
	std::cout << "Введите расстояние растяжения пружины ";
	double x = 0;
	std::cin >> x;

	std::cout << "Введите коэффициент жёсткости пружины ";
	double k = 0;
	std::cin >> k;

	func();

	return 0;
}
