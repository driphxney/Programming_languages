#include <iostream>
/**
* \brief ������� �������. ����� ����� � ���������.
* \return ���������� 0 � ������ ������.
* \double .. ��������� ����������.
*/
int main()
{
	std::cout << "������� ���������� ���������� ������� ";
	double x = 0;
	std::cin >> x;

	std::cout << "������� ����������� �������� ������� ";
	double k = 0;
	std::cin >> k;

	double a = x / 1000;
	double p_energy = (k * (a * a)) / 2;
	std::cout << "������������� ������� ������� ����� " << p_energy;

	return 0;
}