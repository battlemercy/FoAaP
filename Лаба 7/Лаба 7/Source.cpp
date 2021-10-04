#include <iostream>
#include <iomanip>
#include <string.h>
#include <random>
#include <ctime>
#include "splitter.h"


int main()
{
	using namespace std;
	setlocale(0, "rus");
	srand(static_cast<unsigned int>(time(0)));


	size_t size{ 0 };
	cout << "Введите количество символов: ";
	cin >> size;

	string str;
	str.resize(size + 1);
	str[size] = '\0';
	for (size_t i{ 0 }; i < size; ++i)
	{
		str[i] = (rand() % 3 == 0 ? ' ' : (rand() % 10 + '0'));
	}

	auto numbers{ split(str) };
	cout << "Исходная строка: ";
	for (const auto& number : numbers)
	{
		cout << number << ' ';
	}
	cout << endl;

	auto evenNumbers{ removeOdds(numbers) };
	size_t evenNumbersSize = evenNumbers.size();
	if (evenNumbersSize > 0)
	{
		cout << (evenNumbersSize == 1 ? "Чётное число: " : "Чётные числа: ");
		for (const auto& number : evenNumbers)
		{
			cout << number << ' ';
		}
	}
	else
	{
		cout << "Чётных чисел нет.";
	}

	return 0;
}