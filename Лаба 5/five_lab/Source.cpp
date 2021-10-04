#include <iostream>
#include <iomanip>
#include <string>


int main()
{

	using namespace std;

	int bufferSize = 128;
	cout << "Napishite slovo" << endl;

	char * arr = new char [bufferSize];
	cin.getline(arr, bufferSize, '\n');

	bool isPalindrome = true;
	int length = strlen(arr);

	for (int i = 0; i < length / 2; ++i)
	{
		if (arr[i] != arr[length - 1 - i])
		{
			isPalindrome = false;
			break;
		}
	}

	cout << (isPalindrome ? "Palindrom." : "Ne palindrom.") << endl;	
	delete[] arr;
	return 0;
}