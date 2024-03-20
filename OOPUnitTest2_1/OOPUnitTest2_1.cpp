#include "pch.h"
#include "CppUnitTest.h"
#include "../OOPLab2_1/Fraction.h"
#include "../OOPLab2_1/Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Fraction calc;
			calc.setSecond(10);
			Assert::AreEqual(10, calc.getSecond());
		}
	};
}
