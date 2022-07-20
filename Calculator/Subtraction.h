#pragma once
#include "IBaseCommand.h"

class Subtraction : public IBaseCommand
{
public:
	int Subtract(int num1, int num2) {
		return num1 - num2;
	}

	void Execute(int base, int second) {
		Subtract(base, second);
	}
};

