#pragma once
#include "IBaseCommand.h"
class DivisionCommand : public IBaseCommand
{

	float Execute(float _num1, float _num2);
	char GetOp();

};

