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
float CalculatorProcessor::Addition(float a, float b)
{
	float sum = a + b;
	return sum;
}
CalculatorProcessor* ::CalculatorProcessor::mCalcProcessor = nullptr;
