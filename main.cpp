#include <iostream>
#include "mfunc.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	int z;
	std::cout << "Введите первое число: ";
	std::cin >> x;
	std::cout << "Введите второе число: ";
	std::cin >> y;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> z;
	switch(z)
	{
		case 1: std::cout << add(x, y);
			break;
		case 2: std::cout << sub(x, y);
			break;
		case 3: std::cout << multi(x, y);
			break;
		case 4: std::cout << div1(x, y);
			break;
		case 5: std::cout << pow(x, y);
			break;
	}
}
