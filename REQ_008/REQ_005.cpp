#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);

extern "C" int getArea(int* length, int* width);

extern "C" void setLength(int input, int* length);

extern "C" void setWidth(int input, int* width);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ008
{
	TEST_CLASS(REQ008)
	{
	public:
		
		TEST_METHOD(getperimeterfunctionality)
		{
			int perimeter = 0;
			int length = 10;
			int width = 10;
			perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(40, perimeter);
		}
		TEST_METHOD(getareafunctionality) {
			int area = 0;
			int length = 10;
			int width = 10;
			area = getArea(&length, &width);
			Assert::AreEqual(100, area);
		}
		TEST_METHOD(setlength1) {
			int length1 = 10;
			setLength(10, &length1);
			Assert::AreEqual(10, length1);

		}
		TEST_METHOD(setlength2) {
			int length2 = 20;
			setLength(20, &length2);
			Assert::AreEqual(20, length2);
		}
		TEST_METHOD(setlength3) {
			int length3 = 30;
			setLength(30, &length3);
			Assert::AreEqual(30, length3);
		}
		TEST_METHOD(setwidth1) {
			int width1 = 5;
			setWidth(5, &width1);
			Assert::AreEqual(5, width1);
		}
		TEST_METHOD(setwidth2) {
			int width2 = 15;
			setWidth(15, &width2);
			Assert::AreEqual(15, width2);
		}
		TEST_METHOD(setwidth3) {
			int width3 = 25;
			setWidth(25, &width3);
			Assert::AreEqual(25, width3);
		}
	};
}
