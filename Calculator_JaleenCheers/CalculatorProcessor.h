#pragma once
 class CalculatorProcessor
{
private:
	CalculatorProcessor() { }
	static CalculatorProcessor* mCalcProcessor;
public:
	CalculatorProcessor(CalculatorProcessor& c) = delete;
	void operator= (const CalculatorProcessor& c) = delete;

	static CalculatorProcessor* GetInstance();
		
	
	
	
};

