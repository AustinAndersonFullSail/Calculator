#pragma once
#include "IBaseCommand.h"

class Addition : public IBaseCommand
{
public:
	int Add(int num1, int num2) {
		return num1 + num2;
	}

	void Execute(int base, int second) {
		Add(base, second);
	}
};

