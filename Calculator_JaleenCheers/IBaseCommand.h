#pragma once
class IBaseCommand
{
public:
	// Virtual Execute function
	virtual float Execute(float _num1, float _num2) = 0;

	// Virtual Get Operator function
	virtual char GetOp() = 0;


};

