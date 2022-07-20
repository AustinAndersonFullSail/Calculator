#pragma once
#include "IBaseCommand.h"

class Addition : public IBaseCommand
{private:
	int number;
public:
	int Add(int num1, int num2) {
		return number + num2;
	}

	int Execute(int base, int second) {
		return Add(base, second);
	}

	void SetNumber(int other) { number = other; }
};

