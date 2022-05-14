#pragma once
#include "wx/wx.h"
class ButtonFactory
{
public:
	ButtonFactory();
	~ButtonFactory();



	// Clear button
	wxButton CreateCButton();
	// Toggle negative button
	wxButton CreateNegativeButton();
	// Output mode buttons
	wxButton CreateDecButton();	
	wxButton CreateBinButton();			
	wxButton CreateHexButton();			
	// Aesthetic buttons
	wxButton CreateMadeButton();		
	wxButton CreateByButton();			
	wxButton CreateJTCButton();
	// Operator buttons
	wxButton CreateSqrtButton();
	wxButton CreateModButton();         
	wxButton CreateDivideButton();
	wxButton CreateMultiplyButton();
	wxButton CreateMinusButton();
	wxButton CreatePlusButton();
	wxButton CreateEqualsButton();
	// Number buttons
	wxButton CreateZeroButton();		
	wxButton CreateOneButton();
	wxButton CreateTwoButton();			
	wxButton CreateThreeButton();		
	wxButton CreateFourButton();
	wxButton CreateFiveButton();		
	wxButton CreateSixButton();			
	wxButton CreateSevenButton();
	wxButton CreateEightButton();		
	wxButton CreateNineButton();		


};										