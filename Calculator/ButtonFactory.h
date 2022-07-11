#pragma once
#include "wx/wx.h"
#include "MainWindow.h"

class ButtonFactory
{
public:
	wxButton* CreateButtonClear();
	wxButton* CreateButton1();
	wxButton* CreateButton2();
	wxButton* CreateButton3();
	wxButton* CreateButtonPlus();
	wxButton* CreateButtonBinary();
	wxButton* CreateButton4();
	wxButton* CreateButton5();
	wxButton* CreateButton6();
	wxButton* CreateButtonMinus();
	wxButton* CreateButtonHexadecimal();
	wxButton* CreateButton7();
	wxButton* CreateButton8();
	wxButton* CreateButton9();
	wxButton* CreateButtonMultiply();
	wxButton* CreateButtonDecimal();
	wxButton* CreateButtonMod();
	wxButton* CreateButton0();
	wxButton* CreateButtonNegative();
	wxButton* CreateButtonDivide();
	wxButton* CreateButtonEquals();
};

