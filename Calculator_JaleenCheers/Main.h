#pragma once
#include "wx/wx.h"
class Main : public wxFrame
{
public:
	Main();
	~Main();
	int mFieldWidth = 5;
	int mFieldHeight = 5;
	int* mField = nullptr;
	wxTextCtrl* text;
	wxButton** btn;
	
	

	wxDECLARE_EVENT_TABLE();

};

