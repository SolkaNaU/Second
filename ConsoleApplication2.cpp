// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>

// Функция, возвращающая вектор делителей переданного ей числа
std::vector<unsigned> dividers(unsigned n)
{
	if (n == 0)
		return std::vector<unsigned>();
	// Вектор делителей 
	std::vector<unsigned> divs(1, n);

	if (n == 1)
		return divs;
	for (unsigned d = n / 2; d > 1; --d)
		// Проверка на делимость нацело
		if (n % d == 0)
			divs.push_back(d);
	divs.push_back(1);
	// Возвращаем найденные делители
	return divs;
}

int main()
{
	unsigned n;
	std::cout << "Enter number: ";
	std::cin >> n;
	// Находим все делители числа
	std::vector<unsigned> divs = dividers(n);
	if (divs.empty())
	{
		std::cout << "You enter 0" << std::endl;
	}
	else if (divs.size() == 2)
	{
		std::cout << "Number is prime" << std::endl;
	}
	// Если делителей один или больше двух - выводим делители
	else
	{
		std::cout << "Dividers: ";
		for (size_t i = 0; i < divs.size(); ++i)
			std::cout << divs[i] << "; ";

		std::cout << std::endl;
	}

	return 0;
}

