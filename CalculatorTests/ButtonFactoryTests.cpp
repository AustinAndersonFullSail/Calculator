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

		TEST_METHOD(CheckClearButtonID) {
			wxButton* clear = buttonFactory.CreateButtonClear(parent);
			wxWindowID one = 1;
			Assert::AreEqual(clear->GetId(), one);
		}

		

		
	};
}