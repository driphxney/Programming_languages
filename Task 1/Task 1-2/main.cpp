#include <iostream>
#include <cmath>
/**
* \brief ������� �������. ����� ����� � ���������.
* \return ���������� 0 � ������ ������.
* \double .. ��������� ����������.
*/
int main()
{
	std::cout << "������� �������� ���������� ";

	double a = 0;
	double b = 0;
	std::cin >> a;
	std::cin >> b;

	double sr_arif = 0;
	double sr_geomtr = 0;
	double sr_arif = (a + b) / 2;
	double d = abs(a) * abs(b);
	double sr_geomtr = sqrt(d);
	std::cout << "������� �������������� = " << sr_arif;
	std::cout << "������� �������������� = " << sr_geomtr;

	return 0;
}