#include "Pusher.h"



Pusher::Pusher()
{
    name = "";
    efficient = -1;
    manage = false;
}

Pusher::Pusher(string N, float E, bool M)
{
    name = N;
    efficient = E;
    manage = M;
}

Pusher::~Pusher()
{
}


float Pusher::goToZero(Corral Zero)
{
    float carts = Zero.getCarts();
    
    float timeTakeGo = 83;
    float timeTakeStack = 5.2 * carts;
    float timeTakeBack = timeTakeGo * (1 + (carts/30));
    
    float totalTime = timeTakeGo + timeTakeStack + timeTakeBack;
    totalTime = totalTime * (1 / efficient);
    
    if (Zero.getCarts() == 0)
    {
        totalTime = 0;
    }
    
    return totalTime;
}

float Pusher::goToOne(Corral One)
{
    float carts = One.getCarts();
    
    float timeTakeGo = 40;
    float timeTakeStack = 5.2 * carts;
    float timeTakeBack = timeTakeGo * (1 + (carts/30));
    
    float totalTime = timeTakeGo + timeTakeStack + timeTakeBack;
    totalTime = totalTime * (1 / efficient);
    
    if (One.getCarts() == 0)
    {
        totalTime = 0;
    }
    
    return totalTime;
}

float Pusher::goToTwo(Corral Two)
{
    float carts = Two.getCarts();
    
    float timeTakeGo = 76;
    float timeTakeStack = 5.2 * carts;
    float timeTakeBack = timeTakeGo * (1 + (carts/30));
    
    float totalTime = timeTakeGo + timeTakeStack + timeTakeBack;
    totalTime = totalTime * (1 / efficient);
    
    if (Two.getCarts() == 0)
    {
        totalTime = 0;
    }
    
    return totalTime;
}

float Pusher::goToThree(Corral Three)
{
    float carts = Three.getCarts();
    
    float timeTakeGo = 33;
    float timeTakeStack = 5.2 * carts;
    float timeTakeBack = timeTakeGo * (1 + (carts/30));
    
    float totalTime = timeTakeGo + timeTakeStack + timeTakeBack;
    totalTime = totalTime * (1 / efficient);
    
    if (Three.getCarts() == 0)
    {
        totalTime = 0;
    }
    
    return totalTime;
}

float Pusher::goToFour(Corral Four)
{
    float carts = Four.getCarts();
    
    float timeTakeGo = 63;
    float timeTakeStack = 5.2 * carts;
    float timeTakeBack = timeTakeGo * (1 + (carts/30));
    
    float totalTime = timeTakeGo + timeTakeStack + timeTakeBack;
    totalTime = totalTime * (1 / efficient);
    
    if (Four.getCarts() == 0)
    {
        totalTime = 0;
    }
    
    return totalTime;
}

float Pusher::goToFive(Corral Five)
{
    float carts = Five.getCarts();
    
    float timeTakeGo = 43;
    float timeTakeStack = 5.2 * carts;
    float timeTakeBack = timeTakeGo * (1 + (carts/30));
    
    float totalTime = timeTakeGo + timeTakeStack + timeTakeBack;
    totalTime = totalTime * (1 / efficient);
    
    if (Five.getCarts() == 0)
    {
        totalTime = 0;
    }
    
    return totalTime;
}

float Pusher::goToSix(Corral Six)
{
    float carts = Six.getCarts();
    
    float timeTakeGo = 82;
    float timeTakeStack = 5.2 * carts;
    float timeTakeBack = timeTakeGo * (1 + (carts/30));
    
    float totalTime = timeTakeGo + timeTakeStack + timeTakeBack;
    totalTime = totalTime * (1 / efficient);
    
    if (Six.getCarts() == 0)
    {
        totalTime = 0;
    }
    
    return totalTime;
}

float Pusher::goToSeven(Corral Seven)
{
    float carts = Seven.getCarts();
    
    float timeTakeGo = 81;
    float timeTakeStack = 5.2 * carts;
    float timeTakeBack = timeTakeGo * (1 + (carts/30));
    
    float totalTime = timeTakeGo + timeTakeStack + timeTakeBack;
    totalTime = totalTime * (1 / efficient);
    
    if (Seven.getCarts() == 0)
    {
        totalTime = 0;
    }
    
    return totalTime;
}

float Pusher::goToEight(Corral Eight)
{
    float carts = Eight.getCarts();
    
    float timeTakeGo = 91;
    float timeTakeStack = 5.2 * carts;
    float timeTakeBack = timeTakeGo * (1 + (carts/30));
    
    float totalTime = timeTakeGo + timeTakeStack + timeTakeBack;
    totalTime = totalTime * (1 / efficient);
    
    if (Eight.getCarts() == 0)
    {
        totalTime = 0;
    }
    
    return totalTime;
}

float Pusher::goToNine(Corral Nine)
{
    float carts = Nine.getCarts();
    
    float timeTakeGo = 96;
    float timeTakeStack = 5.2 * carts;
    float timeTakeBack = timeTakeGo * (1 + (carts/30));
    
    float totalTime = timeTakeGo + timeTakeStack + timeTakeBack;
    totalTime = totalTime * (1 / efficient);
    
    if (Nine.getCarts() == 0)
    {
        totalTime = 0;
    }
    
    return totalTime;
}


string Pusher::getName()
{
    return name;
}

float Pusher::getEfficient()
{
    return efficient;
}

bool Pusher::getManage()
{
    return manage;
}

void Pusher::setName(string N)
{
    name = N;
}

void Pusher::setEfficient(float E)
{
    efficient = E;
}

void Pusher::setManage(bool M)
{
    manage = M;
}

void Pusher::print() const
{
    cout << "Name: " << name << endl;
    cout << "Efficiency: " << efficient << endl;
    cout << "Mule: " << manage << endl;
}