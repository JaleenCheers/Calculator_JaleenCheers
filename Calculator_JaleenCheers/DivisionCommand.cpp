#include "DivisionCommand.h"

float DivisionCommand::Execute(float _num1, float _num2)
{
	float quotient = _num1 / _num2;
	return quotient;
}

char DivisionCommand::GetOp()
{
	return '/';
}
