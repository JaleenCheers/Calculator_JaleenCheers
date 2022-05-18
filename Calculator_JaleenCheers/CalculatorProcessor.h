#pragma once
class CalculatorProcessor
{
private:
public:
	CalculatorProcessor(CalculatorProcessor& c) = delete;
	void operator= (const CalculatorProcessor& c) = delete;
};

