#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include "IBaseCommand.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "Mod.h"
#include <vector>

class MainWindow : public wxFrame
{
private:
	wxButton* buttonC;
	wxButton* button1;
	wxButton* button2;
	wxButton* button3;
	wxButton* buttonPlus;
	wxButton* buttonBin;
	wxButton* button4;
	wxButton* button5;
	wxButton* button6;
	wxButton* buttonMinus;
	wxButton* buttonHex;
	wxButton* button7;
	wxButton* button8;
	wxButton* button9;
	wxButton* buttonMultiply;
	wxButton* buttonDec;
	wxButton* buttonMod;
	wxButton* button0;
	wxButton* buttonNeg;
	wxButton* buttonDivide;
	wxButton* buttonEquals;

	wxTextCtrl* textBox;

	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

	std::vector<IBaseCommand*> commands;
public:
	MainWindow();
	DECLARE_EVENT_TABLE()
	void OnButtonClick(wxCommandEvent& evt);
};

