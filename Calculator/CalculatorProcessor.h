#pragma once
#include <string>

class CalculatorProcessor
{

private:
	static CalculatorProcessor* _processor;
	int _baseNumber = 0;
	CalculatorProcessor() {}
public:
	static CalculatorProcessor* GetInstance();

	void SetBaseNumber(int number);
	int GetBaseNumber();

	CalculatorProcessor(CalculatorProcessor& copy) = delete;
	void operator=(const CalculatorProcessor& assignment) = delete;

	std::string GetDecimal();
	std::string GetHexadecimal();
	std::string GetBinary();

	int Multiply();
	int Divide();
	int Plus();
	int Minus();
};
