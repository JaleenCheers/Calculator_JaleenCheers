#include "Main.h"
wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(10000, Main::OnButtonClicked)   // C
//EVT_BUTTON(10001, Main::OnButtonClicked) // Dec
//EVT_BUTTON(10002, Main::OnButtonClicked) // Bin
//EVT_BUTTON(10003, Main::OnButtonClicked) // Hex
EVT_BUTTON(10004, Main::OnButtonClicked)   // 0
EVT_BUTTON(10005, Main::OnButtonClicked) // Sqrt
EVT_BUTTON(10006, Main::OnButtonClicked)   // 9
EVT_BUTTON(10007, Main::OnButtonClicked)   // 6
EVT_BUTTON(10008, Main::OnButtonClicked)   // 3
//EVT_BUTTON(10009, Main::OnButtonClicked) // Made 
EVT_BUTTON(10010, Main::OnButtonClicked)   // +/-
EVT_BUTTON(10011, Main::OnButtonClicked)   // 8
EVT_BUTTON(10012, Main::OnButtonClicked)   // 5
EVT_BUTTON(10013, Main::OnButtonClicked)   // 2
//EVT_BUTTON(10014, Main::OnButtonClicked) // By
EVT_BUTTON(10015, Main::OnButtonClicked) // %
EVT_BUTTON(10016, Main::OnButtonClicked)   // 7
EVT_BUTTON(10017, Main::OnButtonClicked)   // 4
EVT_BUTTON(10018, Main::OnButtonClicked)   // 1
//EVT_BUTTON(10019, Main::OnButtonClicked) // JTC
EVT_BUTTON(10020, Main::OnButtonClicked)   // /
EVT_BUTTON(10021, Main::OnButtonClicked)   // x
EVT_BUTTON(10022, Main::OnButtonClicked)   // -
EVT_BUTTON(10023, Main::OnButtonClicked)   // +
EVT_BUTTON(10024, Main::OnButtonClicked)   // =
wxEND_EVENT_TABLE()


Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(475, 500), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX)) {
	// Calculator Processor
	CalculatorProcessor* c = CalculatorProcessor::GetInstance();
	// Variables
	ButtonFactory fact;
	wxGridSizer* grid = new wxGridSizer(mFieldWidth, mFieldHeight, -100, 25);
	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(475, 100), wxCB_READONLY);

	// Set Font and Background Color
	SetBackgroundColour("#577590");
	wxFont font(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_SLANT, wxFONTWEIGHT_BOLD, false);
	SetFont(font);


	// Make All the buttons
	btnClear = fact.CreateButton(this, 10000, "C", wxDefaultPosition, wxSize(75, 60));
	btnDec = fact.CreateButton(this, 10001, "Dec.", wxDefaultPosition, wxSize(75, 60));
	btnBin = fact.CreateButton(this, 10002, "Bin.", wxDefaultPosition, wxSize(75, 60));
	btnHex = fact.CreateButton(this, 10003, "Hex", wxDefaultPosition, wxSize(75, 60));
	btn0 = fact.CreateButton(this, 10004, "0", wxDefaultPosition, wxSize(75, 60));
	btnSqrt = fact.CreateButton(this, 10005, "Sqrt", wxDefaultPosition, wxSize(75, 60));
	btn9 = fact.CreateButton(this, 10006, "9", wxDefaultPosition, wxSize(75, 60));
	btn6 = fact.CreateButton(this, 10007, "6", wxDefaultPosition, wxSize(75, 60));
	btn3 = fact.CreateButton(this, 10008, "3", wxDefaultPosition, wxSize(75, 60));
	btnMade = fact.CreateButton(this, 10009, "Made", wxDefaultPosition, wxSize(75, 60));
	btnNegative = fact.CreateButton(this, 10010, "+/-", wxDefaultPosition, wxSize(75, 60));
	btn8 = fact.CreateButton(this, 10011, "8", wxDefaultPosition, wxSize(75, 60));
	btn5 = fact.CreateButton(this, 10012, "5", wxDefaultPosition, wxSize(75, 60));
	btn2 = fact.CreateButton(this, 10013, "2", wxDefaultPosition, wxSize(75, 60));
	btnBy = fact.CreateButton(this, 10014, "By", wxDefaultPosition, wxSize(75, 60));
	btnMod = fact.CreateButton(this, 10015, "%", wxDefaultPosition, wxSize(75, 60));
	btn7 = fact.CreateButton(this, 10016, "7", wxDefaultPosition, wxSize(75, 60));
	btn4 = fact.CreateButton(this, 10017, "4", wxDefaultPosition, wxSize(75, 60));
	btn1 = fact.CreateButton(this, 10018, "1", wxDefaultPosition, wxSize(75, 60));
	btnJTC = fact.CreateButton(this, 10019, "JTC", wxDefaultPosition, wxSize(75, 60));
	btnDivide = fact.CreateButton(this, 10020, "/", wxDefaultPosition, wxSize(75, 60));
	btnMultiply = fact.CreateButton(this, 10021, "x", wxDefaultPosition, wxSize(75, 60));
	btnMinus = fact.CreateButton(this, 10022, "-", wxDefaultPosition, wxSize(75, 60));
	btnPlus = fact.CreateButton(this, 10023, "+", wxDefaultPosition, wxSize(75, 60));
	btnEquals = fact.CreateButton(this, 10024, "=", wxDefaultPosition, wxSize(75, 60));


	// Add all buttons to the grid
	grid->Add(btnClear, 1, wxALIGN_BOTTOM);
	grid->Add(btnSqrt, 1, wxALIGN_BOTTOM);
	grid->Add(btnMod, 1, wxALIGN_BOTTOM);
	grid->Add(btnNegative, 1, wxALIGN_BOTTOM);
	grid->Add(btnDivide, 1, wxALIGN_BOTTOM);
	grid->Add(btnDec, 1, wxALIGN_BOTTOM);
	grid->Add(btn7, 1, wxALIGN_BOTTOM);
	grid->Add(btn8, 1, wxALIGN_BOTTOM);
	grid->Add(btn9, 1, wxALIGN_BOTTOM);
	grid->Add(btnMultiply, 1, wxALIGN_BOTTOM);
	grid->Add(btnBin, 1, wxALIGN_BOTTOM);
	grid->Add(btn4, 1, wxALIGN_BOTTOM);
	grid->Add(btn5, 1, wxALIGN_BOTTOM);
	grid->Add(btn6, 1, wxALIGN_BOTTOM);
	grid->Add(btnMinus, 1, wxALIGN_BOTTOM);
	grid->Add(btnHex, 1, wxALIGN_BOTTOM);
	grid->Add(btn1, 1, wxALIGN_BOTTOM);
	grid->Add(btn2, 1, wxALIGN_BOTTOM);
	grid->Add(btn3, 1, wxALIGN_BOTTOM);
	grid->Add(btnPlus, 1, wxALIGN_BOTTOM);
	grid->Add(btn0, 1, wxALIGN_BOTTOM);
	grid->Add(btnMade, 1, wxALIGN_BOTTOM);
	grid->Add(btnBy, 1, wxALIGN_BOTTOM);
	grid->Add(btnJTC, 1, wxALIGN_BOTTOM);
	grid->Add(btnEquals, 1, wxALIGN_BOTTOM);



	this->SetSizer(grid);
	grid->Layout();
}
Main::~Main() {

	delete[] text;

}

void Main::OnButtonClicked(wxCommandEvent& evt)
{
	// Same instance of Calculator Processor
	CalculatorProcessor* c = CalculatorProcessor::GetInstance();

	// wxString for calc output
	wxString ans;

	// Id of button clicked
	int id = evt.GetId();

	if (c->GetOperatorClicked()) {

		if (id == 10015 || id == 10020 || id == 10021 || id == 10022 || id == 10023)
			text->SetLabel(text->GetLabel().erase(text->GetLabel().size() - 1, text->GetLabel().size()));

		else if (id == 10010) {
			if (!c->GetToggleNegative())
				text->SetLabel("-" + text->GetLabel());
			else
				text->SetLabel(text->GetLabel().erase(0, 1));

			c->SetToggleNegative(!c->GetToggleNegative());
		}
		else if( id != 10005) {
			text->SetLabel(text->GetLabel().erase(0, text->GetLabel().size()));
			c->SetOperatorClicked(false);
			c->SetToggleNegative(false);
		}

	}

	switch (id)
	{
	case 10000:    // C
		c->SetOperatorClicked(false);
		c->SetNum1(0.0);
		c->SetNum2(0.0);
		text->SetLabel(text->GetLabel().erase(0, text->GetLabel().size()));
		break;
	case 10005:    // Sqrt
		if (c->GetOperatorClicked())
			text->SetLabel(text->GetLabel().erase(text->GetLabel().size() - 1, text->GetLabel().size()));
		ans << c->SquareRoot(wxAtof(text->GetLabel()));
		text->SetLabel(ans);
		break;
	case 10010:     // +/-
		if (c->GetOperatorClicked()) {
			break;
		}
		if (!c->GetToggleNegative())
			text->SetLabel("-" + text->GetLabel());
		else
			text->SetLabel(text->GetLabel().erase(0, 1));

		c->SetToggleNegative(!c->GetToggleNegative());
		break;
	case 10015:      // %
		c->SetOp('%');
		c->SetNum1(wxAtof(text->GetLabel()));
		text->SetLabel(text->GetLabel() + dynamic_cast<wxButton*>(evt.GetEventObject())->GetLabel());
		c->SetOperatorClicked(true);
		break;
	case 10020:      // /
		c->SetOp('/');
		c->SetNum1(wxAtof(text->GetLabel()));
		text->SetLabel(text->GetLabel() + dynamic_cast<wxButton*>(evt.GetEventObject())->GetLabel());
		c->SetOperatorClicked(true);
		break;
	case 10021:		 // x
		c->SetOp('x');
		c->SetNum1(wxAtof(text->GetLabel()));
		text->SetLabel(text->GetLabel() + dynamic_cast<wxButton*>(evt.GetEventObject())->GetLabel());
		c->SetOperatorClicked(true);
		break;
	case 10022:		 // -
		c->SetOp('-');
		c->SetNum1(wxAtof(text->GetLabel()));
		text->SetLabel(text->GetLabel() + dynamic_cast<wxButton*>(evt.GetEventObject())->GetLabel());
		c->SetOperatorClicked(true);
		break;
	case 10023:		 // +
		c->SetOp('+');
		c->SetNum1(wxAtof(text->GetLabel()));
		text->SetLabel(text->GetLabel() + dynamic_cast<wxButton*>(evt.GetEventObject())->GetLabel());
		c->SetOperatorClicked(true);
		break;
	case 10024:		 // =
		c->SetNum2(wxAtof(text->GetLabel()));
		text->SetLabel(text->GetLabel().erase(0, text->GetLabel().size()));


		if (c->GetOp() == '+')
			ans << c->Addition();
		else if (c->GetOp() == '-')
			ans << c->Subtraction();
		else if (c->GetOp() == 'x')
			ans << c->Multiplication();
		else if (c->GetOp() == '/')
			ans << c->Division();
		else if (c->GetOp() == '%')
			ans << c->Modulo();
		else 
			ans << c->GetNum2();
		


		text->SetLabel(ans);
		c->SetOp(' ');
		c->SetOperatorClicked(false);
		break;

	default:
		text->SetLabel(text->GetLabel() + dynamic_cast<wxButton*>(evt.GetEventObject())->GetLabel());
		break;
	}


	evt.Skip();
}
