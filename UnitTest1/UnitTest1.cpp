#include "pch.h"
#include "CppUnitTest.h"
#include "../LR11.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* filename = "text.txt";
			int k = FindW(filename, 'm');
			int expected = 1;
			Assert::AreEqual(expected, k);
		}
	};
}
