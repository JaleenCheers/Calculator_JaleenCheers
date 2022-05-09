#pragma once
#include "wx/wx.h"
class Main : public wxFrame
{
public:
	Main();
	~Main();
	int mFieldWidth = 4;
	int mFieldHeight = 5;
	int* mField = nullptr;
	wxButton** btn;
	
	

	wxDECLARE_EVENT_TABLE();

};

