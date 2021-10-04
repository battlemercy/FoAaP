#include <iostream>
#include <cmath>
int main() 
{
	using namespace std;
	setlocale (LC_ALL, "Russian");

	float z = 0;
	cout << "������� �������� z: ";
	cin >> z;

	const float EPS = 0.00001f;

	if (fabs(z) < EPS)
	{
		cout << "������." << endl;
	}
	else
	{
		float x = cos(sin(1 / z));
		float result = x * x;
		cout << "�����: " << result << endl;
	}
	
	return 0;
}