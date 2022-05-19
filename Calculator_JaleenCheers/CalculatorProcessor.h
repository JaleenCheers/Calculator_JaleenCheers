#pragma once
#include <list>
 class CalculatorProcessor
{
private:
	// Memberfields
	CalculatorProcessor(); 
	static CalculatorProcessor* mCalcProcessor;
	bool OperatorClicked = false;
	std::list<float> num1;
	std::list<float> num2;
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

	static CalculatorProcessor* GetInstance();

	// Operand functions
	float Addition();

	
		
	
	
	
};

