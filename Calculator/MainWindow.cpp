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
	

	ButtonFactory buttonFactory;

	textBox = buttonFactory.CreateTextBox(this);

	buttonC = buttonFactory.CreateButtonClear(this);
	button1 = buttonFactory.CreateButton1(this);
	button2 = buttonFactory.CreateButton2(this);
	button3 = buttonFactory.CreateButton3(this);
	buttonPlus = buttonFactory.CreateButtonPlus(this);
	buttonBin = buttonFactory.CreateButtonBinary(this);
	button4 = buttonFactory.CreateButton4(this);
	button5 = buttonFactory.CreateButton5(this);
	button6 = buttonFactory.CreateButton6(this);
	buttonMinus = buttonFactory.CreateButtonMinus(this);
	buttonHex = buttonFactory.CreateButtonHexadecimal(this);
	button7 = buttonFactory.CreateButton7(this);
	button8 = buttonFactory.CreateButton8(this);
	button9 = buttonFactory.CreateButton9(this);
	buttonMultiply = buttonFactory.CreateButtonMultiply(this);
	buttonDec = buttonFactory.CreateButtonDecimal(this);
	buttonMod = buttonFactory.CreateButtonMod(this);
	button0 = buttonFactory.CreateButton0(this);
	buttonNeg = buttonFactory.CreateButtonNegative(this);
	buttonDivide = buttonFactory.CreateButtonDivide(this);
	buttonEquals = buttonFactory.CreateButtonEquals(this);

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
			textBox->Clear();
			textBox->AppendText(processor->GetBinary()); //***********************to binary
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