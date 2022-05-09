#include "Main.h"
wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(350, 475)) {
	btn = new wxButton* [mFieldWidth * mFieldHeight];
	mField = new int[mFieldWidth * mFieldHeight];
	wxGridSizer* grid = new wxGridSizer(mFieldWidth, mFieldHeight, 0, 0);

	for (int x = 0; x < mFieldWidth; ++x) {
		for (int y = 0; y < mFieldHeight; ++y) {
			btn[y * mFieldWidth + x] = new wxButton(this, 10000 + (y * mFieldWidth + x));
			grid->Add(btn[y * mFieldWidth + x]);
			mField[y * mFieldWidth + x] = 0;
		}
	}
	this->SetSizer(grid);
	grid->Layout();
}
Main::~Main(){
}
