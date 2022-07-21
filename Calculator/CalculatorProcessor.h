#pragma once
#include <string>

class CalculatorProcessor
{

private:
	static CalculatorProcessor* _processor;
	int _baseNumber = 0;
	int _secondNumber = 0;
	//char _operator = ' ';
	CalculatorProcessor() {}
public:
	static CalculatorProcessor* GetInstance();

	void SetBaseNumber(int number);
	int GetBaseNumber();
	void SetSecondNumber(int number);
	int GetSecondNumber();
	//void SetOperator(char operators);
	//char GetOperator();

	CalculatorProcessor(CalculatorProcessor& copy) = delete;
	void operator=(const CalculatorProcessor& assignment) = delete;

	std::string GetDecimal();
	std::string GetHexadecimal();
	std::string GetBinary();

	//int Equals();
};
