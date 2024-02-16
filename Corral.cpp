#include "Corral.h"

Corral::Corral()
{
    carts = -1;
    number = -1;
}

Corral::Corral(float cartsIn, string numberIn)
{
    carts = cartsIn;
    number = numberIn;
}

Corral::~Corral()
{
}

float Corral::getCarts()
{
    return carts;
}

void Corral::setCarts(float cartsIn)
{
    carts = cartsIn;
}

void Corral::print()
{
    cout << "Corral " << number << ": " << carts << endl;
}



