#pragma once
#include "IBaseCommand.h"

class Multiplication : public IBaseCommand
{
public:
	int Multiply(int num1, int num2) {
		return num1 * num2;
	}

	void Execute(int base, int second) {
		Multiply(base, second);
	}
};

