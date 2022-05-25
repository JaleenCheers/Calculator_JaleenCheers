#pragma once
#include <math.h>
#include "IBaseCommand.h"
#include "AddCommand.h"
#include "SubtractCommand.h"
#include "MultiplyCommand.h"
#include "DivisionCommand.h"
#include <vector>

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
	bool mToggleNegative = false;
	bool mEqualClicked = false;
	std::vector<IBaseCommand*> mCommands = std::vector<IBaseCommand*>();

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

	bool GetToggleNegative();
	void SetToggleNegative(bool _mToggleNegative);

	bool GetEqualClicked();
	void SetEqualClicked(bool _mEqualClicked);

	static CalculatorProcessor* GetInstance();

	// Operand functions
	float Addition();
	float Subtraction();
	float Multiplication();
	float Division();
	int Modulo();
	float SquareRoot(float _num);

	// Add to vec function
	//void AddVecCommand(IBaseCommand* _command);


};

