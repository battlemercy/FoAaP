#include "pch.h"
#include "CppUnitTest.h"
#include "../Лаба 7/splitter.cpp"
#include <algorithm>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestSplit)
		{
			std::string str{"25 0 18 128 269"};
			auto result{split(str)};

			std::vector<unsigned int> numbers{25, 0, 18, 128, 269};

			auto mismatch{ std::mismatch(result.cbegin(), result.cend(), numbers.cbegin()) };
			if (mismatch.first == result.cend() && mismatch.second == numbers.cend())
			{
				EXIT_SUCCESS;
			}
			else
			{
				EXIT_FAILURE;
			}
		}


		TEST_METHOD(TestRemoveOdds)
		{
			std::vector<unsigned int> numbers{ 25, 0, 18, 128, 269 };
			auto odds{removeOdds(numbers)};

			std::vector<unsigned int> result{ 25, 269 };

			auto mismatch{ std::mismatch(result.cbegin(), result.cend(), numbers.cbegin()) };
			if (mismatch.first == result.cend() && mismatch.second == numbers.cend())
			{
				EXIT_SUCCESS;
			}
			else
			{
				EXIT_FAILURE;
			}
		}
	};
}
