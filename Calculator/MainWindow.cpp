#include "MainWindow.h"

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
EVT_BUTTON(1, MainWindow::OnButtonClick)
EVT_BUTTON(2, MainWindow::OnButtonClick)
EVT_BUTTON(3, MainWindow::OnButtonClick)
EVT_BUTTON(4, MainWindow::OnButtonClick)
EVT_BUTTON(5, MainWindow::OnButtonClick)
EVT_BUTTON(6, MainWindow::OnButtonClick)
EVT_BUTTON(7, MainWindow::OnButtonClick)
EVT_BUTTON(8, MainWindow::OnButtonClick)
EVT_BUTTON(9, MainWindow::OnButtonClick)
EVT_BUTTON(10, MainWindow::OnButtonClick)
EVT_BUTTON(11, MainWindow::OnButtonClick)
EVT_BUTTON(12, MainWindow::OnButtonClick)
EVT_BUTTON(13, MainWindow::OnButtonClick)
EVT_BUTTON(14, MainWindow::OnButtonClick)
EVT_BUTTON(15, MainWindow::OnButtonClick)
EVT_BUTTON(16, MainWindow::OnButtonClick)
EVT_BUTTON(17, MainWindow::OnButtonClick)
EVT_BUTTON(18, MainWindow::OnButtonClick)
EVT_BUTTON(19, MainWindow::OnButtonClick)
EVT_BUTTON(20, MainWindow::OnButtonClick)
EVT_BUTTON(21, MainWindow::OnButtonClick)
wxEND_EVENT_TABLE()

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

void MainWindow::OnButtonClick(wxCommandEvent& evt)
{

	int id = evt.GetId();
	switch (id) {
		case 1: {
			textBox->Clear();
			break;
		}
		case 2: {
			textBox->AppendText("1");
			break;
		}
		case 3: {
			textBox->AppendText("2");
			break;
		}
		case 4: {
			textBox->AppendText("3");
			break;
		}
		case 5: {
			textBox->AppendText("+");
			break;
		}
		case 6: {
			textBox->GetLabel(); //***********************to binary
			break;
		}
		case 7: {
			textBox->AppendText("4");
			break;
		}
		case 8: {
			textBox->AppendText("5");
			break;
		}
		case 9: {
			textBox->AppendText("6");
			break;
		}
		case 10: {
			textBox->AppendText("-");
			break;
		}
		case 11: {
			textBox->GetLabel(); //***********************to Hex
			break;
		}
		case 12: {
			textBox->AppendText("7");
			break;
		}
		case 13: {
			textBox->AppendText("8");
			break;
		}
		case 14: {
			textBox->AppendText("9");
			break;
		}
		case 15: {
			textBox->AppendText("*");
			break;
		}
		case 16: {
			textBox->GetLabel(); //**************************to decimal
			break;
		}
		case 17: {
			textBox->AppendText("%"); //********************MOD
			break;
		}
		case 18: {
			textBox->AppendText("0");
			break;
		}
		case 19: {
			textBox->AppendText("-"); //*******************negative
			break;
		}
		case 20: {
			textBox->AppendText("/");
			break;
		}
		case 21: {
			textBox->AppendText("=");  //*****************equals
			break;
		}
	}
}