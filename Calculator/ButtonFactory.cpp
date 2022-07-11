#include "ButtonFactory.h"

wxButton* ButtonFactory::CreateButtonClear()
{
	wxButton* buttonC = new wxButton(nullptr, 1, "C", wxPoint(0, 100), wxSize(100, 100));
	//textBox->Clear();
	return buttonC;
}
wxButton* ButtonFactory::CreateButton1()
{
	wxButton* button1 = new wxButton(nullptr, 2, "1", wxPoint(100, 100), wxSize(100, 100));
	return button1;
}
wxButton* ButtonFactory::CreateButton2()
{
	wxButton* button2 = new wxButton(nullptr, 3, "2", wxPoint(200, 100), wxSize(100, 100));
	return button2;
}
wxButton* ButtonFactory::CreateButton3()
{
	wxButton* button3 = new wxButton(nullptr, 4, "3", wxPoint(300, 100), wxSize(100, 100));
	return button3;
}
wxButton* ButtonFactory::CreateButtonPlus()
{
	wxButton* buttonPlus = new wxButton(nullptr, 5, "+", wxPoint(400, 100), wxSize(100, 100));
	return buttonPlus;
}
wxButton* ButtonFactory::CreateButtonBinary()
{
	wxButton* buttonBin = new wxButton(nullptr, 6, "Binary", wxPoint(0, 200), wxSize(100, 100));
	return buttonBin;
}
wxButton* ButtonFactory::CreateButton4()
{
	wxButton* button4 = new wxButton(nullptr, 7, "4", wxPoint(100, 200), wxSize(100, 100));
	return button4;
}
wxButton* ButtonFactory::CreateButton5()
{
	wxButton* button5 = new wxButton(nullptr, 8, "5", wxPoint(200, 200), wxSize(100, 100));
	return button5;
}
wxButton* ButtonFactory::CreateButton6()
{
	wxButton* button6 = new wxButton(nullptr, 9, "6", wxPoint(300, 200), wxSize(100, 100));
	return button6;
}
wxButton* ButtonFactory::CreateButtonMinus()
{
	wxButton* buttonMinus = new wxButton(nullptr, 10, "-", wxPoint(400, 200), wxSize(100, 100));
	return buttonMinus;
}
wxButton* ButtonFactory::CreateButtonHexadecimal()
{
	wxButton* buttonHex = new wxButton(nullptr, 11, "Hexadecimal", wxPoint(0, 300), wxSize(100, 100));
	return buttonHex;
}
wxButton* ButtonFactory::CreateButton7()
{
	wxButton* button7 = new wxButton(nullptr, 12, "7", wxPoint(100, 300), wxSize(100, 100));
	return button7;
}
wxButton* ButtonFactory::CreateButton8()
{
	wxButton* button8 = new wxButton(nullptr, 13, "8", wxPoint(200, 300), wxSize(100, 100));
	return button8;
}
wxButton* ButtonFactory::CreateButton9()
{
	wxButton* button9 = new wxButton(nullptr, 14, "9", wxPoint(300, 300), wxSize(100, 100));
	return button9;
}
wxButton* ButtonFactory::CreateButtonMultiply()
{
	wxButton* buttonMultiply = new wxButton(nullptr, 15, "*", wxPoint(400, 300), wxSize(100, 100));
	return buttonMultiply;
}
wxButton* ButtonFactory::CreateButtonDecimal()
{
	wxButton* buttonDec = new wxButton(nullptr, 16, "Decimal", wxPoint(0, 400), wxSize(100, 100));
	return buttonDec;
}
wxButton* ButtonFactory::CreateButtonMod()
{
	wxButton* buttonMod = new wxButton(nullptr, 17, "Mod", wxPoint(100, 400), wxSize(100, 100));
	return buttonMod;
}
wxButton* ButtonFactory::CreateButton0()
{
	wxButton* button0 = new wxButton(nullptr, 18, "0", wxPoint(200, 400), wxSize(100, 100));
	return button0;
}
wxButton* ButtonFactory::CreateButtonNegative()
{
	wxButton* buttonNeg = new wxButton(nullptr, 19, "Negative", wxPoint(300, 400), wxSize(100, 100));
	return buttonNeg;
}
wxButton* ButtonFactory::CreateButtonDivide()
{
	wxButton* buttonDivide = new wxButton(nullptr, 20, "/", wxPoint(400, 400), wxSize(100, 100));
	return buttonDivide;
}
wxButton* ButtonFactory::CreateButtonEquals()
{
	wxButton* buttonEquals = new wxButton(nullptr, 21, "=", wxPoint(0, 500), wxSize(500, 100));
	return buttonEquals;
}