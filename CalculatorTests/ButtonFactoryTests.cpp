#include "pch.h"
#include "CppUnitTest.h"
#include "wx/wx.h"
#include "../Calculator/ButtonFactory.h"
#include "../Calculator/ButtonFactory.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
	TEST_CLASS(ButtonFactoryTests)
	{
	public:
		ButtonFactory buttonFactory;
		wxFrame* parent = new wxFrame(nullptr, wxID_ANY, "TempFrame", wxPoint(100, 100), wxSize(517, 640));

		TEST_METHOD(CheckClearID) {
			wxButton* clear = buttonFactory.CreateButtonClear(parent);
			wxWindowID one = 1;
			Assert::AreEqual(clear->GetId(), one);
		}

		TEST_METHOD(CheckClearLabel) {
			wxButton* clear = buttonFactory.CreateButtonClear(parent);
			wxString c = "C";
			Assert::AreEqual(clear->GetLabel(), c);
		}

		TEST_METHOD(CheckClearNotID) {
			wxButton* clear = buttonFactory.CreateButtonClear(parent);
			wxWindowID two = 2;
			Assert::AreNotEqual(clear->GetId(), two);
		}

		TEST_METHOD(CheckClearNotLabel) {
			wxButton* clear = buttonFactory.CreateButtonClear(parent);
			wxString one = "1";
			Assert::AreNotEqual(clear->GetLabel(), one);
		}

		TEST_METHOD(CheckOneID) {
			wxButton* one = buttonFactory.CreateButton1(parent);
			wxWindowID two = 2;
			Assert::AreEqual(one->GetId(), two);
		}

		TEST_METHOD(CheckOneNotID) {
			wxButton* one = buttonFactory.CreateButton1(parent);
			wxWindowID three = 3;
			Assert::AreNotEqual(one->GetId(), three);
		}

		TEST_METHOD(CheckOneLabel) {
			wxButton* one = buttonFactory.CreateButton1(parent);
			wxString oneLabel = "1";
			Assert::AreEqual(one->GetLabel(), oneLabel);
		}

		TEST_METHOD(CheckOneNotLabel) {
			wxButton* one = buttonFactory.CreateButton1(parent);
			wxString two = "2";
			Assert::AreNotEqual(one->GetLabel(), two);
		}

		TEST_METHOD(CheckTextBoxID) {
			wxTextCtrl* textBox = buttonFactory.CreateTextBox(parent);
			wxWindowID zero = 0;
			Assert::AreEqual(textBox->GetId(), zero);
		}

		TEST_METHOD(CheckTextBoxNotID) {
			wxTextCtrl* textBox = buttonFactory.CreateTextBox(parent);
			wxWindowID one = 1;
			Assert::AreNotEqual(textBox->GetId(), one);
		}
	};
}