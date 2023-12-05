#pragma once

class Calc
{
private:
	static Calc* instance;

public:
	void Cal();

	static Calc* Get()
	{
		if (instance == nullptr)
		{
			instance = new Calc();
		}
		return instance;
	}
};

