#include "CalculatorProcessor.h"

CalculatorProcessor::CalculatorProcessor() {
	mCalcProcessor = nullptr;
}
CalculatorProcessor::~CalculatorProcessor()
{
	delete[] mCalcProcessor;
}
CalculatorProcessor* CalculatorProcessor::GetInstance()
{

	if (mCalcProcessor == nullptr)
		mCalcProcessor = new CalculatorProcessor();

	return mCalcProcessor;


}
CalculatorProcessor* ::CalculatorProcessor::mCalcProcessor = nullptr;
