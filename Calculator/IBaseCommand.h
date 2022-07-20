#pragma once

class IBaseCommand
{
public:
	virtual void Execute(int base, int second) = 0;
};

