#pragma once
class CalculatorProcessor
{
private:
	CalculatorProcessor(){}
public:
	CalculatorProcessor(CalculatorProcessor& c) = delete;
	void operator= (const CalculatorProcessor& c) = delete;
};

