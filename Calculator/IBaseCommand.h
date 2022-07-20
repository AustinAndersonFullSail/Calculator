#pragma once

class IBaseCommand
{
public:
	virtual int Execute(int base, int second) = 0;
};

