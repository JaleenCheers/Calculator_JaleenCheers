#pragma once
#include "wx/wx.h"
class Main : public wxFrame
{
public:
	Main();
	~Main();
	int mFieldWidth = 3;
	int mFieldHeight = 3;
	int* mField = nullptr;
	wxTextCtrl* text;
	wxButton** btn;
	
	

	wxDECLARE_EVENT_TABLE();

};

