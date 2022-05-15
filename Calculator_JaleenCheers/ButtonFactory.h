#pragma once
#include "wx/wx.h"
#include "Main.h"
class ButtonFactory
{
public:
	// Constructor and Destructor
	ButtonFactory();
	~ButtonFactory();

	// data members
	wxButton* btn;


	// Create button method
	wxButton* CreateButton(wxWindow* _window, unsigned int _id, const char*, wxPoint _point, wxSize _size);


};										