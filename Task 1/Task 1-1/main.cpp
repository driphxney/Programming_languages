#include <iostream>
#include <cmath>
/**
* \brief ������� �������. ����� ����� � ���������.
* \return ���������� 0 � ������ ������.
* \double .. ��������� ����������.
* \cin >> .. ��� ������������ ����������� ������ �������� ����������.
*/
int main()
{
	std::cout << "������� �������� ���������� x, y, z ";
	
	double x = 0;
	double y = 0;
	double z = 0;
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;
	
	double a = 0;
	double b = 0;
	double module = abs(x - y);
	a = log(z + x * x) + sin(x / y) * sin(x / y);
	std::cout << "a = " << a;
	b = exp(-z) * (x + sqrt(x + z)) / (x - sqrt(module);
	std::cout << "b = " << b;
	
	return 0;
}