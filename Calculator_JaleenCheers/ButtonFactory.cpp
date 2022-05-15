#include "ButtonFactory.h"




ButtonFactory::ButtonFactory()
{
	window = new wxWindow();

}

ButtonFactory::~ButtonFactory()
{
}

wxButton* ButtonFactory::CreateCButton()
{
	btn = new wxButton(window, 10000, "C", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateNegativeButton()
{
	btn = new wxButton(window, 10010, "+/-", wxDefaultPosition, wxSize(75, 60));
	return  btn;
}

wxButton* ButtonFactory::CreateDecButton()
{
	btn = new wxButton(window, 10001, "Dec.", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateBinButton()
{
	btn = new wxButton(window, 10002, "Bin.", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateHexButton()
{
	btn = new wxButton(window, 10003, "Hex.", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateMadeButton()
{
	btn = new wxButton(window, 10009, "Made", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateByButton()
{
	btn = new wxButton(window, 10014, "By", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateJTCButton()
{
	btn = new wxButton(window, 10019, "JTC", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateSqrtButton()
{
	btn = new wxButton(window, 10005, "Sqrt", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateModButton()
{
	btn = new wxButton(window, 10015, "MOD", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateDivideButton()
{
	btn = new wxButton(window, 10020, "/", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateMultiplyButton()
{
	btn = new wxButton(window, 10021, "x", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateMinusButton()
{
	btn = new wxButton(window, 10022, "-", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreatePlusButton()
{
	btn = new wxButton(window, 10023, "+", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateEqualsButton()
{
	btn = new wxButton(window, 10024, "=", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateZeroButton()
{
	btn = new wxButton(window, 10004, "0", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateOneButton()
{
	btn = new wxButton(window, 10018, "1", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateTwoButton()
{
	btn = new wxButton(window, 10013, "2", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateThreeButton()
{
	btn = new wxButton(window, 10008, "3", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateFourButton()
{
	btn = new wxButton(window, 10017, "4", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateFiveButton()
{
	btn = new wxButton(window, 10012, "5", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton*  ButtonFactory::CreateSixButton()
{
	btn = new wxButton(window, 10007, "6", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateSevenButton()
{
	btn = new wxButton(window, 10016, "7", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateEightButton()
{
	btn = new wxButton(window, 10011, "8", wxDefaultPosition, wxSize(75, 60));
	return btn;
}

wxButton* ButtonFactory::CreateNineButton()
{
	btn = new wxButton(window, 10006, "9", wxDefaultPosition, wxSize(75, 60));
	return btn;
}


