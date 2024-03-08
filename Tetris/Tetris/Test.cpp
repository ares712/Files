#include "Test.h"

Test::Test()
{
	blockData = new Data();
}

Test::~Test()
{
	delete blockData;
}

void Test::Render()
{
	blockData->LBlock();
}
