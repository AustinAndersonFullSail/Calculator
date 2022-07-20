#pragma once
#include "IBaseCommand.h"

class Mod : public IBaseCommand
{
public:
	int ModIt(int num1, int num2) {
		return num1 % num2;
	}

	void Execute(int base, int second) {
		ModIt(base, second);
	}
};

