#include "ButtonFactoryTests.h"
#include <iostream>

void ButtonFactoryTests::TestButtonLabel1()
{
	btn = buttonFactory.CreateButton(new wxWindow(), 10018, "1", wxDefaultPosition, wxSize(75, 60));

	if (btn->GetLabel() == "1")
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;

}

void ButtonFactoryTests::TestButtonLabel2()
{
	btn = buttonFactory.CreateButton(new wxWindow(), 10013, "2", wxDefaultPosition, wxSize(75, 60));

	if (btn->GetLabel() == "2")
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void ButtonFactoryTests::TestButtonLabel3()
{
	btn = buttonFactory.CreateButton(new wxWindow(), 10008, "3", wxDefaultPosition, wxSize(75, 60));

	if (btn->GetLabel() == "3")
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void ButtonFactoryTests::TestButtonLabel4()
{
	btn = buttonFactory.CreateButton(new wxWindow(), 10017, "4", wxDefaultPosition, wxSize(75, 60));

	if (btn->GetLabel() == "4")
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void ButtonFactoryTests::TestButtonId1()
{
	btn = buttonFactory.CreateButton(new wxWindow(), 10018, "1", wxDefaultPosition, wxSize(75, 60));

	if (btn->GetId() == 10018)
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void ButtonFactoryTests::TestButtonId2()
{
	btn = buttonFactory.CreateButton(new wxWindow(), 10013, "2", wxDefaultPosition, wxSize(75, 60));

	if (btn->GetId() == 10013)
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void ButtonFactoryTests::TestButtonId3()
{
	btn = buttonFactory.CreateButton(new wxWindow(), 10008, "3", wxDefaultPosition, wxSize(75, 60));

	if (btn->GetId() == 10008)
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void ButtonFactoryTests::TestButtonId4()
{
	btn = buttonFactory.CreateButton(new wxWindow(), 10017, "4", wxDefaultPosition, wxSize(75, 60));

	if (btn->GetId() == 10017)
		std::cout << "PASS" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void ButtonFactoryTests::TestButtonValue1()
{
}

void ButtonFactoryTests::TestButtonValue2()
{
}
