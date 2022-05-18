#include "CalculatorProcessor.h"


CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	
	/*if (mCalcProcessor == nullptr) {

		static CalculatorProcessor* c;
		mCalcProcessor = c;
	}
	return mCalcProcessor;*/

	static CalculatorProcessor* c;
	return c;
}
