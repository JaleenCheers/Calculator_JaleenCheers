#include "CalculatorProcessor.h"

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	static CalculatorProcessor* c;
	
	return c;
}
