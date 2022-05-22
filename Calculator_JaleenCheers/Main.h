#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
class Main : public wxFrame
{
public:
	Main();
	~Main();
	int mFieldWidth = 5;
	int mFieldHeight = 5;
	wxTextCtrl* text = nullptr;
	
	// buttons
	wxButton* btn0 = nullptr;
	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr; 
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;
	wxButton* btnPlus = nullptr;
	wxButton* btnMinus = nullptr;
	wxButton* btnDivide = nullptr; 
	wxButton* btnMultiply = nullptr;
	wxButton* btnSqrt = nullptr;
	wxButton* btnEquals = nullptr;
	wxButton* btnMod = nullptr;
	wxButton* btnHex = nullptr;
	wxButton* btnDec = nullptr;
	wxButton* btnBin = nullptr;
	wxButton* btnMade = nullptr;
	wxButton* btnBy = nullptr;
	wxButton* btnJTC = nullptr;
	wxButton* btnClear = nullptr;
	wxButton* btnNegative = nullptr;
	
	void OnButtonClicked(wxCommandEvent& evt);

private:
	

	wxDECLARE_EVENT_TABLE();


};

