#pragma once
#include "IBaseCommand.h"

class Division : public IBaseCommand
{
public:
	int Divide(int num1, int num2) {
		return num1 / num2;
	}

	int Execute(int base, int second) {
		return Divide(base, second);
	}
};

