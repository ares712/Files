#include "Framework.h"

Calc* Calc::instance = nullptr;

void Calc::Cal()
{
	srand(GetTickCount64());

	int ra = rand() % 10 + 1;

	vector<int>vec;

	for (int i = 0; i < ra; ++i)
	{
		vec.push_back(ra);
		cout << vec[0] << endl;
	}
}
