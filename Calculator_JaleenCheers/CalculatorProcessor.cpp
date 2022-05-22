#include "CalculatorProcessor.h"
#include <string>

CalculatorProcessor::CalculatorProcessor() {
	mCalcProcessor = nullptr;
	op = ' ';
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
void CalculatorProcessor::SetNum1(float _num1)
{
	num1 = _num1;
}
float CalculatorProcessor::GetNum2()
{
	return num2;
}
void CalculatorProcessor::SetNum2(float _num2)
{
	num2 = _num2;
}
char CalculatorProcessor::GetOp()
{
	return op;
}
void CalculatorProcessor::SetOp(char _op)
{
	op = _op;
}
CalculatorProcessor* CalculatorProcessor::GetInstance()
{

	if (mCalcProcessor == nullptr)
		mCalcProcessor = new CalculatorProcessor();

	return mCalcProcessor;


}
float CalculatorProcessor::Addition()
{
	float sum = num1 + num2;
	return sum;
}
float CalculatorProcessor::Subtraction()
{
	float sum = num1 - num2;
	return sum;
}
float CalculatorProcessor::Multiplication()
{
	float product = num1 * num2;
	return product;
}
float CalculatorProcessor::Division()
{
	float quotient = num1 / num2;
	return quotient;
}
CalculatorProcessor* ::CalculatorProcessor::mCalcProcessor = nullptr;
