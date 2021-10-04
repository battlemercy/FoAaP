#include "splitter.h"

std::vector<unsigned int> split(const std::string& str)
{
	char* szStr{ const_cast<char*>(str.c_str()) };
	const char* delim{ " " };
	char* next_token;

	std::vector<unsigned int> result;

	char* token{ strtok_s(szStr, delim, &next_token) };
	while (token)
	{
		result.push_back(atoi(token));
		token = strtok_s(NULL, delim, &next_token);
	}

	return result;
}



std::vector<unsigned int> removeOdds(const std::vector<unsigned int>& numbers)
{
	std::vector<unsigned int> result;
	for (auto number : numbers)
	{
		if (number % 2 == 0)
		{
			result.push_back(number);
		}
	}
	return result;
}
