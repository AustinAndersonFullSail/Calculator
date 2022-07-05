#include "MainWindow.h"

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(100, 100), wxSize(517, 640)) 
{
	textBox = new wxTextCtrl(this, 0, "", wxPoint(0, 0), wxSize(500, 100));

	buttonC = new wxButton(this, 1, "C", wxPoint(0,100), wxSize(100,100));
	button1 = new wxButton(this, 2, "1", wxPoint(100, 100), wxSize(100, 100));
	button2 = new wxButton(this, 3, "2", wxPoint(200, 100), wxSize(100, 100));
	button3 = new wxButton(this, 4, "3", wxPoint(300, 100), wxSize(100, 100));
	buttonPlus = new wxButton(this, 5, "+", wxPoint(400, 100), wxSize(100, 100));
	buttonBin = new wxButton(this, 6, "Binary", wxPoint(0, 200), wxSize(100, 100));
	button4 = new wxButton(this, 7, "4", wxPoint(100, 200), wxSize(100, 100));
	button5 = new wxButton(this, 8, "5", wxPoint(200, 200), wxSize(100, 100));
	button6 = new wxButton(this, 9, "6", wxPoint(300, 200), wxSize(100, 100));
	buttonMinus = new wxButton(this, 10, "-", wxPoint(400, 200), wxSize(100, 100));
	buttonHex = new wxButton(this, 11, "Hexadecimal", wxPoint(0, 300), wxSize(100, 100));
	button7 = new wxButton(this, 12, "7", wxPoint(100, 300), wxSize(100, 100));
	button8 = new wxButton(this, 13, "8", wxPoint(200, 300), wxSize(100, 100));
	button9 = new wxButton(this, 14, "9", wxPoint(300, 300), wxSize(100, 100));
	buttonMultiply = new wxButton(this, 15, "*", wxPoint(400, 300), wxSize(100, 100));
	buttonDec = new wxButton(this, 16, "Decimal", wxPoint(0, 400), wxSize(100, 100));
	buttonMod = new wxButton(this, 17, "Mod", wxPoint(100, 400), wxSize(100, 100));
	button0 = new wxButton(this, 18, "0", wxPoint(200, 400), wxSize(100, 100));
	buttonNeg = new wxButton(this, 19, "Negative", wxPoint(300, 400), wxSize(100, 100));
	buttonDivide = new wxButton(this, 20, "/", wxPoint(400, 400), wxSize(100, 100));
	buttonEquals = new wxButton(this, 21, "=", wxPoint(0, 500), wxSize(500, 100));
}