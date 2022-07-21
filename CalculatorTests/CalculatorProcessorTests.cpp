#include "pch.h"
#include "CppUnitTest.h"
#include "wx/wx.h"
#include "../Calculator/CalculatorProcessor.h"
#include "../Calculator/CalculatorProcessor.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
	TEST_CLASS(ButtonFactoryTests)
	{
	public:
		CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

		TEST_METHOD(CheckDecimalEleven) {
			processor->SetBaseNumber(11);
			std::string answer = processor->GetDecimal();
			std::string eleven = "11";
			Assert::AreEqual(answer, eleven);
		}

		TEST_METHOD(CheckDecimalNot10) {
			processor->SetBaseNumber(11);
			std::string answer = processor->GetDecimal();
			std::string ten = "10";
			Assert::AreNotEqual(answer, ten);
		}

		TEST_METHOD(CheckHexadecimalFifteen) {
			processor->SetBaseNumber(15);
			std::string answer = processor->GetHexadecimal();
			std::string fifteen = "0xF";
			Assert::AreEqual(answer, fifteen);
		}

		TEST_METHOD(CheckHexadecimalNotSixteen) {
			processor->SetBaseNumber(15);
			std::string answer = processor->GetHexadecimal();
			std::string sixteen = "0x10";
			Assert::AreNotEqual(answer, sixteen);
		}

		TEST_METHOD(CheckBinaryTen) {
			processor->SetBaseNumber(10);
			std::string answer = processor->GetBinary();
			std::string ten = "1010";
			Assert::AreEqual(answer, ten);
		}

		TEST_METHOD(CheckBinaryNotEleven) {
			processor->SetBaseNumber(10);
			std::string answer = processor->GetBinary();
			std::string eleven = "1011";
			Assert::AreNotEqual(answer, eleven);
		}

		TEST_METHOD(CheckIfInstanceIsSame) {
			CalculatorProcessor* processor2 = CalculatorProcessor::GetInstance();
			Assert::AreSame(processor, processor2);
		}

		TEST_METHOD(CheckHexadecimalTwenty) {
			processor->SetBaseNumber(20);
			std::string answer = processor->GetHexadecimal();
			std::string twenty = "0x14";
			Assert::AreEqual(answer, twenty);
		}

		TEST_METHOD(CheckHexadecimalNotNineteen) {
			processor->SetBaseNumber(20);
			std::string answer = processor->GetHexadecimal();
			std::string nineteen = "0x13";
			Assert::AreNotEqual(answer, nineteen);
		}

		TEST_METHOD(CheckBinaryTwenty) {
			processor->SetBaseNumber(20);
			std::string answer = processor->GetBinary();
			std::string twenty = "10100";
			Assert::AreEqual(answer, twenty);
		}

		TEST_METHOD(CheckBinaryNotNineteen) {
			processor->SetBaseNumber(20);
			std::string answer = processor->GetBinary();
			std::string nineteen = "10011";
			Assert::AreNotEqual(answer, nineteen);
		}
	};
}