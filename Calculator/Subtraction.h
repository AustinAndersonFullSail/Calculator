#pragma once
#include "IBaseCommand.h"

class Subtraction : public IBaseCommand
{
public:
	static int Subtract(int num1, int num2) {
		return num1 - num2;
	}

	int Execute(int base, int second) {
		return Subtract(base, second);
	}
};

