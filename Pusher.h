#include <iostream>
#include "Corral.h"
using namespace std;

class Pusher
{
    public:
   
        //construct
        Pusher();
        Pusher(string N, float E, bool M);
        ~Pusher();
   
        //methods
        float goToZero(Corral Zero);
        float goToOne(Corral One);
        float goToTwo(Corral Two);
        float goToThree(Corral Three);
        float goToFour(Corral Four);
        float goToFive(Corral Five);
        float goToSix(Corral Six);
        float goToSeven(Corral Seven);
        float goToEight(Corral Eight);
        float goToNine(Corral Nine);
        
        float Roam(Corral Zero, Corral One, Corral Two, Corral Three, Corral Four, Corral Five, Corral Six, Corral Seven, Corral Eight, Corral Nine);
       
       
        //getters
        string getName();
        float getEfficient();
        bool getManage();
       
        //setters
        void setName(string N);
        void setEfficient(float E);
        void setManage(bool M);
   
        void print() const;
        
   
    private:
        string name;
        float efficient;
        bool manage;
       
};