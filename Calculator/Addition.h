#pragma once
#include "IBaseCommand.h"

class Addition : public IBaseCommand
{private:
	int number;
public:
	static int Add(int num1, int num2) {
		return num1 + num2;
	}

	int Execute(int base, int second) {
		return Add(base, second);
	}

	void SetNumber(int other) { number = other; }
};

