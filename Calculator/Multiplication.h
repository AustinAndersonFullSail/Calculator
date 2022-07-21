#pragma once
#include "IBaseCommand.h"

class Multiplication : public IBaseCommand
{
public:
	static int Multiply(int num1, int num2) {
		return num1 * num2;
	}

	int Execute(int base, int second) {
		return Multiply(base, second);
	}
};

