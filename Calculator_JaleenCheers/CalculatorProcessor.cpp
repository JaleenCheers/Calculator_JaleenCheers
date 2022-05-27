#include "CalculatorProcessor.h"
#include <string>

CalculatorProcessor::CalculatorProcessor() {
	
}
CalculatorProcessor::~CalculatorProcessor()
{
	delete[] mCalcProcessor;
}
bool CalculatorProcessor::GetOperatorClicked()
{
	return operatorClicked;
}
void CalculatorProcessor::SetOperatorClicked(bool _op)
{ 
	operatorClicked = _op;
} 
bool CalculatorProcessor::GetMultipleOperators()
{
	return multipleOperators;
}
void CalculatorProcessor::SetMultipleOperators(bool _op)
{
	multipleOperators = _op;
}
bool CalculatorProcessor::GetChangedOperator()
{
	return changedOperator;
}
void CalculatorProcessor::SetChangedOperator(bool _op)
{
	changedOperator = _op;
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
bool CalculatorProcessor::GetToggleNegative()
{
	return mToggleNegative;
}
void CalculatorProcessor::SetToggleNegative(bool _mToggleNegative)
{
	mToggleNegative = _mToggleNegative;
}
bool CalculatorProcessor::GetEqualClicked()
{
	return mEqualClicked;
}
void CalculatorProcessor::SetEqualClicked(bool _mEqualClicked)
{
	mEqualClicked = _mEqualClicked;
}
bool CalculatorProcessor::GetBinaryClicked()
{
	return mBinaryClicked;
}
void CalculatorProcessor::SetBinaryClicked(bool _bin)
{
	mBinaryClicked = _bin;
}
bool CalculatorProcessor::GetHexClicked()
{
	return mHexClicked;
}
void CalculatorProcessor::SetHexClicked(bool _hex)
{
	mHexClicked = _hex;
}
float CalculatorProcessor::GetNumBeforeBin()
{
	return numBeforeBin;
}
void CalculatorProcessor::SetNumBeforeBin(float _beforeBin)
{
	numBeforeBin = _beforeBin;
}
std::vector<IBaseCommand*> CalculatorProcessor::GetCommandVec()
{
	return mCommands;
}
IBaseCommand* CalculatorProcessor::GetAtFirstCommandVec()
{
	return mCommands[0];
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
int CalculatorProcessor::Modulo()
{
	int remainder = (int)num1 % (int)num2;
	return remainder;
}
float CalculatorProcessor::SquareRoot(float _num)
{
	float root = sqrt(_num);
	return root;
}
void CalculatorProcessor::AddVecCommand(IBaseCommand* _command)
{
	mCommands.push_back(_command);
}
void CalculatorProcessor::PopFront()
{
	auto it = mCommands.erase(mCommands.begin());
}
void CalculatorProcessor::ClearVecCommands()
{
	mCommands.clear();
}
CalculatorProcessor* ::CalculatorProcessor::mCalcProcessor = nullptr;
