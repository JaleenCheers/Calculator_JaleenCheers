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
	float x = 0;
	for (auto i = num2.begin(); i != num2.end(); ++i)
		x += *i;
	return x;
}
void CalculatorProcessor::AddNum1(float _num1)
{
	num1.push_back(_num1);
}
float CalculatorProcessor::GetNum2()
{
	std::string s;

	float x = 0;
	for (auto i = num2.begin(); i != num2.end(); ++i)
		s += *i;

	

	return s;
}
void CalculatorProcessor::AddNum2(float _num2)
{
	num2.push_back(_num2);
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
