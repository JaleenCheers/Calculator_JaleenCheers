#pragma once
#include <math.h>
#include "IBaseCommand.h"
#include "AddCommand.h"
#include "SubtractCommand.h"
#include "MultiplyCommand.h"
#include "DivisionCommand.h"
#include "ModuloCommand.h"
#include <vector>

class CalculatorProcessor
{
private:
	// Memberfields
	CalculatorProcessor();
	static CalculatorProcessor* mCalcProcessor;
	float num1 = 0;
	float num2 = 0;
	float numBeforeBin = 0;
	bool operatorClicked = false;
	bool multipleOperators = false;
	bool changedOperator = false;
	bool mToggleNegative = false;
	bool mEqualClicked = false;
	bool mBinaryClicked = false;
	bool mHexClicked = false;
	std::vector<IBaseCommand*> mCommands = std::vector<IBaseCommand*>();

public:
	// Destructor
	~CalculatorProcessor();

	// Assignment operator and copy ctor
	CalculatorProcessor(CalculatorProcessor& c) = delete;
	void operator= (const CalculatorProcessor& c) = delete;

	// Getters and Setters
	bool GetOperatorClicked();
	void SetOperatorClicked(bool _op);

	bool GetMultipleOperators();
	void SetMultipleOperators(bool _op);

	bool GetChangedOperator();
	void SetChangedOperator(bool _op);

	float GetNum1();
	void SetNum1(float _num1);

	float GetNum2();
	void SetNum2(float _num2);


	bool GetToggleNegative();
	void SetToggleNegative(bool _mToggleNegative);

	bool GetEqualClicked();
	void SetEqualClicked(bool _mEqualClicked);

	bool GetBinaryClicked();
	void SetBinaryClicked(bool _bin);

	bool GetHexClicked();
	void SetHexClicked(bool _hex);

	float GetNumBeforeBin();
	void SetNumBeforeBin(float _beforeBin);




	std::vector<IBaseCommand*> GetCommandVec();
	IBaseCommand* GetAtFirstCommandVec();

	

	static CalculatorProcessor* GetInstance();

	// Operand functions
	float Addition();
	float Subtraction();
	float Multiplication();
	float Division();
	int Modulo();
	float SquareRoot(float _num);

	// Add, Remove, and clear vec functions
	void AddVecCommand(IBaseCommand* _command);
	void PopFront();
	void ClearVecCommands();


};

