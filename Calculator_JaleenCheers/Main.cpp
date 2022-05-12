#include "Main.h"
wxBEGIN_EVENT_TABLE(Main, wxFrame)
//EVT_BUTTON(10000, Main::OnButtonClicked)
//EVT_BUTTON(10001, Main::OnButtonClicked)
//EVT_BUTTON(10002, Main::OnButtonClicked)
//EVT_BUTTON(10003, Main::OnButtonClicked)
EVT_BUTTON(10004, Main::OnButtonClicked)
//EVT_BUTTON(10005, Main::OnButtonClicked)
EVT_BUTTON(10006, Main::OnButtonClicked)
EVT_BUTTON(10007, Main::OnButtonClicked)
EVT_BUTTON(10008, Main::OnButtonClicked)
//EVT_BUTTON(10009, Main::OnButtonClicked)
//EVT_BUTTON(10010, Main::OnButtonClicked)
EVT_BUTTON(10011, Main::OnButtonClicked)
EVT_BUTTON(10012, Main::OnButtonClicked)
EVT_BUTTON(10013, Main::OnButtonClicked)
//EVT_BUTTON(10014, Main::OnButtonClicked)
//EVT_BUTTON(10015, Main::OnButtonClicked)
EVT_BUTTON(10016, Main::OnButtonClicked)
EVT_BUTTON(10017, Main::OnButtonClicked)
EVT_BUTTON(10018, Main::OnButtonClicked)
//EVT_BUTTON(10019, Main::OnButtonClicked)
EVT_BUTTON(10020, Main::OnButtonClicked)
EVT_BUTTON(10021, Main::OnButtonClicked)
EVT_BUTTON(10022, Main::OnButtonClicked)
EVT_BUTTON(10023, Main::OnButtonClicked)
//EVT_BUTTON(10024, Main::OnButtonClicked)
wxEND_EVENT_TABLE()

// wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(475, 500), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX)) {

	btn = new wxButton * [mFieldHeight * mFieldWidth];
	wxGridSizer* grid = new wxGridSizer(mFieldWidth, mFieldHeight, -100, 25);
	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(475, 100), wxCB_READONLY);

	// Set Font and Background Color
	SetBackgroundColour("#577590");
	wxFont font(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_SLANT, wxFONTWEIGHT_BOLD, false);
	SetFont(font);

	int num = 9;
	int counter = 0;

	for (int x = 0; x < mFieldWidth; ++x) {
		for (int y = 0; y < mFieldHeight; ++y) {


			// Fill window with button using a grid and add color
			btn[y * mFieldWidth + x] = new wxButton(this, 10000 + (y * mFieldWidth + x), "", wxDefaultPosition, wxSize(75, 60));
			grid->Add(btn[y * mFieldWidth + x], 1, wxALIGN_BOTTOM);
			btn[y * mFieldWidth + x]->SetBackgroundColour(wxColor("#adb5bd"));

			// Set button labels 
			switch (counter)
			{
			case 0:
				btn[y * mFieldWidth + x]->SetLabel("C");
				break;
			case 1:
				btn[y * mFieldWidth + x]->SetLabel("Sqrt");
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
				btn[y * mFieldWidth + x]->SetLabel('x');
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

void Main::OnButtonClicked(wxCommandEvent& evt)
{
	//dynamic_cast<wxButton*>(evt.GetEventObject())->GetLabel();
	text->AppendText(dynamic_cast<wxButton*>(evt.GetEventObject())->GetLabel());

	evt.Skip();
}
