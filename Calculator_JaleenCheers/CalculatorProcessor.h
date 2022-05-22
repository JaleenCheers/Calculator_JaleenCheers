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
	char op;
public:
	// Destructor
	~CalculatorProcessor();

	// Assignment operator and copy ctor
	CalculatorProcessor(CalculatorProcessor& c) = delete;
	void operator= (const CalculatorProcessor& c) = delete;

	// Getters and Setters
	bool GetOperatorClicked();
	void SetOperatorClicked(bool op);

	float GetNum1();
	void SetNum1(float _num1);

	float GetNum2();
	void SetNum2(float _num2);

	char GetOp();
	void SetOp(char _op);

	static CalculatorProcessor* GetInstance();

	// Operand functions
	float Addition();
	float Subtraction();
	float Multiplication();
	float Division();

	
		
	
	
	
};

