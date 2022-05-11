#pragma once
#include "wx/wx.h"
class Main : public wxFrame
{
public:
	Main();
	~Main();
	int mFieldWidth = 5;
	int mFieldHeight = 5;
	wxTextCtrl* text;
	wxButton** btn;
	
	void OnButtonClicked(wxCommandEvent& evt);

private:
	

	wxDECLARE_EVENT_TABLE();


};

