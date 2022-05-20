#include "CalculatorProcessor.h"
#include <string>

CalculatorProcessor::CalculatorProcessor() {
	mCalcProcessor = nullptr;
}
CalculatorProcessor::~CalculatorProcessor()
{
	delete[] mCalcProcessor;
}
bool CalculatorProcessor::GetOperatorClicked()
{
	return OperatorClicked;
}
void CalculatorProcessor::SetOperatorClicked(bool op)
{
	OperatorClicked = op;
}
float CalculatorProcessor::GetNum1()
{
	return num1;
}
void CalculatorProcessor::AddNum1(float _num1)
{
	num1 = _num1;
}
float CalculatorProcessor::GetNum2()
{
	return num2;
}
void CalculatorProcessor::AddNum2(float _num2)
{
	num2 = _num2;
}
CalculatorProcessor* CalculatorProcessor::GetInstance()
{

	if (mCalcProcessor == nullptr)
		mCalcProcessor = new CalculatorProcessor();

	return mCalcProcessor;


}
float CalculatorProcessor::Addition()
{
	float sum = GetNum1() + GetNum2();
	return sum;
}
CalculatorProcessor* ::CalculatorProcessor::mCalcProcessor = nullptr;
