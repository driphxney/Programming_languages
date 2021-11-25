#include <iostream>

void face_area(){
	double first = 0;
	first = a * a;
	std::cout << "Площадь грани куба = "  << first;
}

void total_surface_area(){
	double second = 0;
	second = first * 6;
	std::cout << "Площадь полной поверхности куба = " << second;
}

void volume(){
	double third = 0;
	third = a * a * a;
	std::cout << "Обьем куба = " << third;
}

int main()
{
	std::cout << "Введите значение длины ребра куба: ";
	
	double a = 0;
	std::cin >> a;
	
	face_area();
	total_surface_area();
	volume();
		
	return 0;
}
