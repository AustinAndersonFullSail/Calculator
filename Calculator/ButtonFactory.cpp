#include "ButtonFactory.h"

wxTextCtrl* ButtonFactory::CreateTextBox(wxWindow* parent)
{
	wxTextCtrl* textBox = new wxTextCtrl(parent, 0, "", wxPoint(0, 0), wxSize(500, 100));
	return textBox;
}

wxButton* ButtonFactory::CreateButtonClear(wxWindow* parent)
{
	wxButton* buttonC = new wxButton(parent, 1, "C", wxPoint(0, 100), wxSize(100, 100));
	return buttonC;
}
wxButton* ButtonFactory::CreateButton1(wxWindow* parent)
{
	wxButton* button1 = new wxButton(parent, 2, "1", wxPoint(100, 100), wxSize(100, 100));
	return button1;
}
wxButton* ButtonFactory::CreateButton2(wxWindow* parent)
{
	wxButton* button2 = new wxButton(parent, 3, "2", wxPoint(200, 100), wxSize(100, 100));
	return button2;
}
wxButton* ButtonFactory::CreateButton3(wxWindow* parent)
{
	wxButton* button3 = new wxButton(parent, 4, "3", wxPoint(300, 100), wxSize(100, 100));
	return button3;
}
wxButton* ButtonFactory::CreateButtonPlus(wxWindow* parent)
{
	wxButton* buttonPlus = new wxButton(parent, 5, "+", wxPoint(400, 100), wxSize(100, 100));
	return buttonPlus;
}
wxButton* ButtonFactory::CreateButtonBinary(wxWindow* parent)
{
	wxButton* buttonBin = new wxButton(parent, 6, "Binary", wxPoint(0, 200), wxSize(100, 100));
	return buttonBin;
}
wxButton* ButtonFactory::CreateButton4(wxWindow* parent)
{
	wxButton* button4 = new wxButton(parent, 7, "4", wxPoint(100, 200), wxSize(100, 100));
	return button4;
}
wxButton* ButtonFactory::CreateButton5(wxWindow* parent)
{
	wxButton* button5 = new wxButton(parent, 8, "5", wxPoint(200, 200), wxSize(100, 100));
	return button5;
}
wxButton* ButtonFactory::CreateButton6(wxWindow* parent)
{
	wxButton* button6 = new wxButton(parent, 9, "6", wxPoint(300, 200), wxSize(100, 100));
	return button6;
}
wxButton* ButtonFactory::CreateButtonMinus(wxWindow* parent)
{
	wxButton* buttonMinus = new wxButton(parent, 10, "-", wxPoint(400, 200), wxSize(100, 100));
	return buttonMinus;
}
wxButton* ButtonFactory::CreateButtonHexadecimal(wxWindow* parent)
{
	wxButton* buttonHex = new wxButton(parent, 11, "Hexadecimal", wxPoint(0, 300), wxSize(100, 100));
	return buttonHex;
}
wxButton* ButtonFactory::CreateButton7(wxWindow* parent)
{
	wxButton* button7 = new wxButton(parent, 12, "7", wxPoint(100, 300), wxSize(100, 100));
	return button7;
}
wxButton* ButtonFactory::CreateButton8(wxWindow* parent)
{
	wxButton* button8 = new wxButton(parent, 13, "8", wxPoint(200, 300), wxSize(100, 100));
	return button8;
}
wxButton* ButtonFactory::CreateButton9(wxWindow* parent)
{
	wxButton* button9 = new wxButton(parent, 14, "9", wxPoint(300, 300), wxSize(100, 100));
	return button9;
}
wxButton* ButtonFactory::CreateButtonMultiply(wxWindow* parent)
{
	wxButton* buttonMultiply = new wxButton(parent, 15, "*", wxPoint(400, 300), wxSize(100, 100));
	return buttonMultiply;
}
wxButton* ButtonFactory::CreateButtonDecimal(wxWindow* parent)
{
	wxButton* buttonDec = new wxButton(parent, 16, "Decimal", wxPoint(0, 400), wxSize(100, 100));
	return buttonDec;
}
wxButton* ButtonFactory::CreateButtonMod(wxWindow* parent)
{
	wxButton* buttonMod = new wxButton(parent, 17, "Mod", wxPoint(100, 400), wxSize(100, 100));
	return buttonMod;
}
wxButton* ButtonFactory::CreateButton0(wxWindow* parent)
{
	wxButton* button0 = new wxButton(parent, 18, "0", wxPoint(200, 400), wxSize(100, 100));
	return button0;
}
wxButton* ButtonFactory::CreateButtonNegative(wxWindow* parent)
{
	wxButton* buttonNeg = new wxButton(parent, 19, "Negative", wxPoint(300, 400), wxSize(100, 100));
	return buttonNeg;
}
wxButton* ButtonFactory::CreateButtonDivide(wxWindow* parent)
{
	wxButton* buttonDivide = new wxButton(parent, 20, "/", wxPoint(400, 400), wxSize(100, 100));
	return buttonDivide;
}
wxButton* ButtonFactory::CreateButtonEquals(wxWindow* parent)
{
	wxButton* buttonEquals = new wxButton(parent, 21, "=", wxPoint(0, 500), wxSize(500, 100));
	return buttonEquals;
}
