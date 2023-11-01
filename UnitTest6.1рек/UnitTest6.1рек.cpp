#include "pch.h"
#include "CppUnitTest.h"
#include "../пр6.1рек/пр6.1рек.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61рек
{
	TEST_CLASS(UnitTest61рек)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int m = 8;
			int n[m] = { -18,-8,-3,1,8,14,18,19 };
			int epxS = 0;
			int k = 0;
			for (int i = 0; i < m; i++) {
				if ((n[i] < 0) && (!(n[i] % 3 == 0))) {
					epxS += n[i];
					k++;
				}
			}
			int s = Sum(n, m, k);
			Assert::AreEqual(s, epxS);
		}
	};
}
