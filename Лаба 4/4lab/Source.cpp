#include <iostream>
#include <iomanip>
#include <cmath>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	float a = 0, b = 0, h = 0;
	int n = 0;

	cout << "������� a: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	cout << "������� n: ";
	cin >> n;

	cout << setw(15) << "x" << setw(15) << "y" << setw(15) << "S" << endl;
	h = (b - a) / 10;

	float x = a, p = 0, s = 0;
	do
	{
		// ���������� � ����� ���������� � ���.
		p = x;
		s = p;
		for (int i = 1; i <= n; ++i)
		{
			p *= ((-1) * (float)pow(x,2) * ((2 * i) - 1)) / ((2 * i) + 1);
			s += p;
		}
		// ���������� ����� �������.
		float y = (float)atan(x);
		cout << setw(15) << x << setw(15) << y << setw(15) << s << endl;
		// ������� � ���������� x.
		x += h;
	} while (x < b + h / 2);

	cout << endl;
	return 0;
}