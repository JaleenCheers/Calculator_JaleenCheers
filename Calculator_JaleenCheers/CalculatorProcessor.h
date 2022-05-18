#pragma once
 class CalculatorProcessor
{
private:
	// Memberfields
	CalculatorProcessor(); 
	static CalculatorProcessor* mCalcProcessor;
	bool OperatorClicked = false;
public:
	// Destructor
	~CalculatorProcessor();

	// Assignment operator and copy ctor
	CalculatorProcessor(CalculatorProcessor& c) = delete;
	void operator= (const CalculatorProcessor& c) = delete;

	// Get only instance of CalulatorProcessor
	static CalculatorProcessor* GetInstance();

	// Operand functions
	float Addition(float a, float b);
		
	
	
	
};

