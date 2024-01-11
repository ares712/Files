#include <iostream>
#include "Rand.h"

int main()
{
    unique_ptr<Rand> ran(new Rand());

    ran->RPS();

    return 0;
}