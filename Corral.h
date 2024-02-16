#include <iostream>
using namespace std;

class Corral
{
    public:
        Corral();
        Corral(float cartsIn, string numberIn);
        ~Corral();
    
        float getCarts();
        void setCarts(float cartsIn);
        
        void print();
    
    private:
        float carts;
        string number;
};