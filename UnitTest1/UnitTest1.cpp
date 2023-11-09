#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab №7.2 it/Lab №7.2 it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1  
{
	TEST_CLASS(UnitTest1)  
	{
	public:

		TEST_METHOD(FindMaxMainDiagonal)
		{
			const int n = 5;
			int matrix[n][n] = {
				{96, 96, 80, 57, 68},
				{69, 78, 9, 20, 25},
				{40, 60, 55, 49, 23},
				{8, 58, 50, 56, 39},
				{39, 20, 43, 39, 34}
			};

			int result = findMaxInMainDiagonal(matrix, n);

			Assert::AreEqual(96, result);  
		}
	};
}
