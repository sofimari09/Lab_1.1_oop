#include "pch.h"
#include "CppUnitTest.h"
#include "../Number.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double first = 2.03;
			double second = 36.24;
			bool t = Init(double x, double y);
			Assert::AreEqual(t, true);
		}
	};
}
