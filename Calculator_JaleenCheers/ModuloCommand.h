#pragma once
#include "IBaseCommand.h"
class ModuloCommand : public IBaseCommand
{
	float Execute(float _num1, float _num2);
	char GetOp();
};

