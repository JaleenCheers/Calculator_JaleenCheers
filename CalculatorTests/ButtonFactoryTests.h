#pragma once
#include "../Calculator_JaleenCheers/ButtonFactory.h"
#include "../Calculator_JaleenCheers/ButtonFactory.cpp"
#include "wx/wx.h"
#include <iostream>

class ButtonFactoryTests
{
public:


	ButtonFactory buttonFactory;
	wxButton* btn;


	void TestButtonLabel1();
	void TestButtonLabel2();
	void TestButtonLabel3();
	void TestButtonLabel4();
	void TestButtonId1();
	void TestButtonId2();
	void TestButtonId3();
	void TestButtonId4();
	void TestButtonValue1();
	void TestButtonValue2();


};

