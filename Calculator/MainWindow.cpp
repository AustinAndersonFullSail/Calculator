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
		processor->SetBaseNumber(0);
		processor->SetSecondNumber(0);
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
		processor->SetBaseNumber(wxAtoi(textBox->GetValue().ToStdString()));  //********************ADD
		textBox->AppendText("+");
		textBox->Clear();
		Addition* add = new Addition();
		commands.push_back(add);
		//processor->SetOperator('+');
		break;
	}
	case 6: {
		processor->SetBaseNumber(wxAtoi(textBox->GetValue().ToStdString()));
		textBox->Clear();
		textBox->AppendText(processor->GetBinary());
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
		processor->SetBaseNumber(wxAtoi(textBox->GetValue().ToStdString()));  //*********************Subtract
		textBox->AppendText("-");
		textBox->Clear();
		Subtraction* subtract = new Subtraction();
		commands.push_back(subtract);
		//processor->SetOperator('-');
		break;
	}
	case 11: {
		processor->SetBaseNumber(wxAtoi(textBox->GetValue().ToStdString()));
		textBox->Clear();
		textBox->AppendText(processor->GetHexadecimal());
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
		processor->SetBaseNumber(wxAtoi(textBox->GetValue().ToStdString()));  //*****************Multiply
		textBox->AppendText("*");
		textBox->Clear();
		Multiplication* multiply = new Multiplication();
		commands.push_back(multiply);
		//processor->SetOperator('*');
		break;
	}
	case 16: {
		textBox->Clear();
		textBox->AppendText(std::to_string(processor->GetBaseNumber()));
		break;
	}
	case 17: {
		processor->SetBaseNumber(wxAtoi(textBox->GetValue().ToStdString()));   //************************MOD
		textBox->AppendText("%");
		textBox->Clear();
		Mod* mod = new Mod();
		commands.push_back(mod);
		//processor->SetOperator('%');
		break;
	}
	case 18: {
		textBox->AppendText("0");
		break;
	}
	case 19: {
		int number = wxAtoi(textBox->GetValue().ToStdString());
		wxString output;
		textBox->Clear();
		if (number > 0)
			textBox->AppendText(output << (number - (number * 2)));
		else
			textBox->AppendText(output << (number + (number * 2)));
		processor->SetBaseNumber(wxAtoi(textBox->GetValue().ToStdString()));
		break;
	}
	case 20: {
		processor->SetBaseNumber(wxAtoi(textBox->GetValue().ToStdString()));   //***********************Divide
		textBox->AppendText("/");
		textBox->Clear();
		Division* divide = new Division();
		commands.push_back(divide);
		//processor->SetOperator('/');
		break;
	}
	case 21: {
		processor->SetSecondNumber(wxAtoi(textBox->GetValue().ToStdString()));
		textBox->AppendText("=");
		textBox->Clear();
		for (int i = 0; i < commands.size();)
		{
			textBox->Clear();
			processor->SetBaseNumber(commands[i]->Execute(processor->GetBaseNumber(), processor->GetSecondNumber()));
			textBox->AppendText(std::to_string(processor->GetBaseNumber()));
			commands.erase(commands.begin());
		}
		//textBox->AppendText(std::to_string(processor->Equals()));
		break;
	}
	}
}