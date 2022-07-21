#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/Addition.h"
#include "../Calculator/Subtraction.h"
#include "../Calculator/Multiplication.h"
#include "../Calculator/Division.h"
#include "../Calculator/Mod.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
	TEST_CLASS(CalculatorTests)
	{
	public:
		
		TEST_METHOD(AddTwoPlusTwoEqualsFour)
		{
			int answer = Addition::Add(2, 2);
			Assert::AreEqual(answer, 4);
		}
		TEST_METHOD(AddTwoPlusTwoNotEqualFive)
		{
			int answer = Addition::Add(2, 2);
			Assert::AreNotEqual(answer, 5);
		}
	};
}
