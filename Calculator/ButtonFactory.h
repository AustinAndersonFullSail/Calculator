#pragma once
#include "wx/wx.h"
#include "MainWindow.h"

class ButtonFactory
{
public:
	wxButton* CreateButtonClear(wxWindow* parent);
	wxButton* CreateButton1(wxWindow* parent);
	wxButton* CreateButton2(wxWindow* parent);
	wxButton* CreateButton3(wxWindow* parent);
	wxButton* CreateButtonPlus(wxWindow* parent);
	wxButton* CreateButtonBinary(wxWindow* parent);
	wxButton* CreateButton4(wxWindow* parent);
	wxButton* CreateButton5(wxWindow* parent);
	wxButton* CreateButton6(wxWindow* parent);
	wxButton* CreateButtonMinus(wxWindow* parent);
	wxButton* CreateButtonHexadecimal(wxWindow* parent);
	wxButton* CreateButton7(wxWindow* parent);
	wxButton* CreateButton8(wxWindow* parent);
	wxButton* CreateButton9(wxWindow* parent);
	wxButton* CreateButtonMultiply(wxWindow* parent);
	wxButton* CreateButtonDecimal(wxWindow* parent);
	wxButton* CreateButtonMod(wxWindow* parent);
	wxButton* CreateButton0(wxWindow* parent);
	wxButton* CreateButtonNegative(wxWindow* parent);
	wxButton* CreateButtonDivide(wxWindow* parent);
	wxButton* CreateButtonEquals(wxWindow* parent);
};

