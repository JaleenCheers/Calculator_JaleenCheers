#include "SubtractCommand.h"

float SubtractCommand::Execute(float _num1, float _num2)
{
	float sum = _num1 - _num2;
	return sum;
}

char SubtractCommand::GetOp()
{
	return '-';
}
