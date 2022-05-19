#pragma once
 class CalculatorProcessor
{
private:
	// Memberfields
	CalculatorProcessor(); 
	static CalculatorProcessor* mCalcProcessor;
	bool OperatorClicked = false;
	float num1 = 0;
	float num2 = 0;
public:
	// Destructor
	~CalculatorProcessor();

	// Assignment operator and copy ctor
	CalculatorProcessor(CalculatorProcessor& c) = delete;
	void operator= (const CalculatorProcessor& c) = delete;

	// Getters and Setters
	bool GetOperatorClicked();
	void SetOperatorClicked(bool op);

	static CalculatorProcessor* GetInstance();

	// Operand functions
	float Addition(float a, float b);

	
		
	
	
	
};

