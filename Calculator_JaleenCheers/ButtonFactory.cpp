#include "ButtonFactory.h"
#include "Main.h"
#include "Calc.h"



ButtonFactory::ButtonFactory()
{
	main = new Main();

}

ButtonFactory::~ButtonFactory()
{
}

wxButton ButtonFactory::CreateCButton()
{
	btn = new wxButton(main, 10000, "C", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateNegativeButton()
{
	btn = new wxButton(main, 10000, "+/-", wxDefaultPosition, wxSize(75, 60));
	return  wxButton();
}

wxButton ButtonFactory::CreateDecButton()
{
	btn = new wxButton(main, 10000, "Dec.", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateBinButton()
{
	btn = new wxButton(main, 10000, "Bin.", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateHexButton()
{
	btn = new wxButton(main, 10000, "Hex.", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateMadeButton()
{
	btn = new wxButton(main, 10000, "Made", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateByButton()
{
	btn = new wxButton(main, 10000, "By", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateJTCButton()
{
	btn = new wxButton(main, 10000, "JTC", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateSqrtButton()
{
	btn = new wxButton(main, 10000, "Sqrt", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateModButton()
{
	btn = new wxButton(main, 10000, "MOD", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateDivideButton()
{
	btn = new wxButton(main, 10000, "/", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateMultiplyButton()
{
	btn = new wxButton(main, 10000, "x", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateMinusButton()
{
	btn = new wxButton(main, 10000, "-", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreatePlusButton()
{
	btn = new wxButton(main, 10000, "+", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateEqualsButton()
{
	btn = new wxButton(main, 10000, "=", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateZeroButton()
{
	btn = new wxButton(main, 10000, "0", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateOneButton()
{
	btn = new wxButton(main, 10000, "1", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateTwoButton()
{
	btn = new wxButton(main, 10000, "2", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateThreeButton()
{
	btn = new wxButton(main, 10000, "3", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateFourButton()
{
	btn = new wxButton(main, 10000, "4", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateFiveButton()
{
	btn = new wxButton(main, 10000, "5", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateSixButton()
{
	btn = new wxButton(main, 10000, "6", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateSevenButton()
{
	btn = new wxButton(main, 10000, "7", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateEightButton()
{
	btn = new wxButton(main, 10000, "8", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}

wxButton ButtonFactory::CreateNineButton()
{
	btn = new wxButton(main, 10000, "9", wxDefaultPosition, wxSize(75, 60));
	return wxButton();
}


