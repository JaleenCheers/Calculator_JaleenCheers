#include "Main.h"
wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

// wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(400, 500), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX)) {
	btn = new wxButton* [mFieldHeight * mFieldWidth];
	mField = new int[mFieldWidth * mFieldHeight];
	wxGridSizer* grid = new wxGridSizer(mFieldWidth, mFieldHeight, -100, 25);
	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(400, 100));


	int num = 9;
	int counter = 0;

	for (int x = 0; x < mFieldWidth; ++x) {
		for (int y = 0; y < mFieldHeight; ++y) {


			// Fill window with button using a grid and add color
			btn[y * mFieldWidth + x] = new wxButton(this, 10000 + (y * mFieldWidth + x), "", wxDefaultPosition, wxSize(60, 60));
			grid->Add(btn[y * mFieldWidth + x], 1, wxALIGN_BOTTOM);
		//	btn[y * mFieldWidth + x]->SetBackgroundColour(wxColor("#577590"));

			// Set button labels
			switch (counter)
			{
			case 0:
				btn[y * mFieldWidth + x]->SetLabel("C");
				break;
			case 1:
				btn[y * mFieldWidth + x]->SetLabel("sqrt");
				break;
			case 2:
				btn[y * mFieldWidth + x]->SetLabel("+/-");
				break;
			case 3:
				btn[y * mFieldWidth + x]->SetLabel("Mod");
				break;
			case 4:
				btn[y * mFieldWidth + x]->SetLabel('/');
				break;
			case 5:
				btn[y * mFieldWidth + x]->SetLabel("Dec.");
				break;
			case 9:
				btn[y * mFieldWidth + x]->SetLabel('X');
				break;
			case 10:
				btn[y * mFieldWidth + x]->SetLabel("Bin.");
				break;
			case 14:
				btn[y * mFieldWidth + x]->SetLabel('-');
				break;
			case 15:
				btn[y * mFieldWidth + x]->SetLabel("Hex.");
				break;
			case 19:
				btn[y * mFieldWidth + x]->SetLabel('+');
				break;
			case 21:
				btn[y * mFieldWidth + x]->SetLabel("Made");
				break;
			case 22:
				btn[y * mFieldWidth + x]->SetLabel("By");
				break;
			case 23:
				btn[y * mFieldWidth + x]->SetLabel("JTC");
				break;
			case 24:
				btn[y * mFieldWidth + x]->SetLabel('=');
				break;
			default:
				btn[y * mFieldWidth + x]->SetLabel(std::to_string(num--));
				break;
			}

		//	mField[y * mFieldWidth + x] = 0;???

			//Increment counter for switch case
			++counter;






		}
	}

	this->SetSizer(grid);
	grid->Layout();
}
Main::~Main() {
	delete[] btn;
	delete[] text;
}
