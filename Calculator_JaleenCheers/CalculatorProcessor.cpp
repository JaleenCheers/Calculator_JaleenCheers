#include "CalculatorProcessor.h"


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
	return *num1;
}
void CalculatorProcessor::SetNum1(float _num1)
{
	num1 = &_num1;
}
float CalculatorProcessor::GetNum2()
{
	return *num2;
}
void CalculatorProcessor::SetNum2(float _num2)
{
	num2 = &_num2;
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
float CalculatorProcessor::AppendNum1(float _num1)
{
	(char*)num1 += (char*)&_num1;
	return 0.0f;
}
float CalculatorProcessor::AppendNum2(float _num2)
{
	return 0.0f;
}
CalculatorProcessor* ::CalculatorProcessor::mCalcProcessor = nullptr;
