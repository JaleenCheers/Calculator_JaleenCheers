#pragma once
#include "IBaseCommand.h"
class MultiplyCommand : public IBaseCommand
{
	float Execute(float _num1, float _num2);
	char GetOp();
};

