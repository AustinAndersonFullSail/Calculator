#include "CalculatorProcessor.h"

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

CalculatorProcessor* CalculatorProcessor::GetInstance() {
	if (_processor == nullptr) {
		_processor = new CalculatorProcessor();
	}
	return _processor;
}

void CalculatorProcessor::SetBaseNumber(int number) {
	_baseNumber = number;
}

std::string CalculatorProcessor::GetDecimal() {
	return std::to_string(_baseNumber);
}

std::string CalculatorProcessor::GetHexadecimal() {
	std::string results = "";
	int number = _baseNumber;

	while (number != 0) {
		int remainder = number % 16;
		switch (remainder)
		{
		case 15:
			results = "F" + results;
			break;
		case 14:
			results = "E" + results;
			break;
		case 13:
			results = "D" + results;
			break;
		case 12:
			results = "C" + results;
			break;
		case 11:
			results = "B" + results;
			break;
		case 10:
			results = "A" + results;
			break;
		default:
			results = std::to_string(remainder);
			break;
		}
		number = number / 16 - remainder;
	}
	return results;
}

std::string CalculatorProcessor::GetBinary() {
	std::string results = "";
	int number = _baseNumber;

	for (int i = 0; i < 32; i++)
	{
		if (number % 2 == 0) {
			results = "0" + results;
		}
		else {
			results = "1" + results;
		}
		number = number / 2;
	}
	return results;
}

int CalculatorProcessor::Multiply() {

	return 0;
}

int CalculatorProcessor::Divide() {

	return 0;
}

int CalculatorProcessor::Plus() {

	return 0;
}

int CalculatorProcessor::Minus() {

	return 0;
}