#include <iostream>
#include <iomanip>
#include <cmath>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	float a = 0, b = 0, h = 0;
	int n = 0;

	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите n: ";
	cin >> n;

	cout << setw(15) << "x" << setw(15) << "y" << setw(15) << "S" << endl;
	h = (b - a) / 10;

	float x = a, p = 0, s = 0;
	do
	{
		// Вычисление с через разложение в ряд.
		p = x;
		s = p;
		for (int i = 1; i <= n; ++i)
		{
			p *= ((-1) * (float)pow(x,2) * ((2 * i) - 1)) / ((2 * i) + 1);
			s += p;
		}
		// Вычисление через формулу.
		float y = (float)atan(x);
		cout << setw(15) << x << setw(15) << y << setw(15) << s << endl;
		// Переход к следующему x.
		x += h;
	} while (x < b + h / 2);

	cout << endl;
	return 0;
}