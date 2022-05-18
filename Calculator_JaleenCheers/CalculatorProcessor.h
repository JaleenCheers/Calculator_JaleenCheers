#pragma once
#include <wx/wx.h>
 class CalculatorProcessor
{
private:
	static CalculatorProcessor* calcProcessor;
	CalculatorProcessor() {
		calcProcessor = nullptr;
	}
public:
	static CalculatorProcessor* GetInstance();
};

