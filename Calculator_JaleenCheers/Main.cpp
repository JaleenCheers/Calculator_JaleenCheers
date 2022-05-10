#include "Main.h"
wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(300, 500)) {
	btn = new wxButton* [mFieldHeight * mFieldWidth];
	mField = new int[mFieldWidth * mFieldHeight];
	wxGridSizer* grid = new wxGridSizer(mFieldWidth, mFieldHeight, -375, -50);
	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(350, 50));
	int num = 9;
	
	
	for (int x = 0; x < mFieldWidth; ++x) {
		for (int y = 0; y < mFieldHeight; ++y) {
			
			btn[y * mFieldWidth + x] = new wxButton(this, 10000 + (y * mFieldWidth + x));
			grid->Add(btn[y * mFieldWidth + x], 1 , wxALIGN_CENTER );
			btn[y * mFieldWidth + x]->SetLabel(std::to_string(num--));
			mField[y * mFieldWidth + x] = 0;
			
		}
	}
	this->SetSizer(grid);
	grid->Layout();
}
Main::~Main(){
	delete[] btn;
	delete[] text;
}
