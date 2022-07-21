#pragma once
#include "IBaseCommand.h"

class Mod : public IBaseCommand
{
public:
	static int ModIt(int num1, int num2) {
		return num1 % num2;
	}

	int Execute(int base, int second) {
		return ModIt(base, second);
	}
};

