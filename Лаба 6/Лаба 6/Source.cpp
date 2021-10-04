#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>

int main()
{
	using namespace std;

	int n = 0, m = 0, max = 0, min = 128, jmin = 0, imax = 0;
	bool isSaddlepoint = false;

	cout << "Vvedite kol-vo strok" << endl;
	cin >> n;

	cout << "Vvedite kol-vo stolbtsov" << endl;
	cin >> m;

	cout << "Matrix:" << endl;

	int** matrix = new int* [n];

	srand(time(0));


	for (int i = 0; i < n; ++i)
	{
		matrix[i] = new int[m];
		for (int j = 0; j < m; ++j)
		{
			matrix[i][j] = rand() % 10;
			cout << matrix[i][j] << setw(3);
		}
		cout << "\n";
	}

	cout << "Est' li sedlotochka?" << endl << endl;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
				jmin = j;
			}
			if (j == m - 1)
			{
				for (int k = 0; k < m; ++k)
					if (matrix[k][jmin] > max)
					{
						max = matrix[k][jmin];
						imax = k;
					}
				if (max == min)
				{
					cout << matrix[imax][jmin] << endl;
					isSaddlepoint = true;
				}
			}
		}
	}

	cout << (isSaddlepoint ? " " : "No") << endl;

	for (int i = 0; i < n; ++i)
	{
		delete[] matrix[i];
	}

	delete[] matrix;

	return 0;
}
