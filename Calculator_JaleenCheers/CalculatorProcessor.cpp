#include "CalculatorProcessor.h"

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (calcProcessor == nullptr)
		calcProcessor = new CalculatorProcessor();
	return calcProcessor;
}
