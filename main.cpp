#include <iostream>
#include "Pusher.h"
#include <cstdlib>
using namespace std;


//method for pushers

void roamMethod(Pusher Reese, int &process, int &vestibuleCount, int &pushVisit, int &wastedTime, Corral &Zero, Corral &One, Corral &Two, Corral &Three, Corral &Four, Corral &Five, Corral &Six, Corral &Seven, Corral &Eight, Corral &Nine)
{
            bool roam = false;
            int decide = rand() % 2 + 1;
            
            if (decide == 1)
            {
                process += 30;
                roam = true;
            }
            
            
            if (!roam)
            {
                decide = rand() % 100 + 1;
                if (decide <= 10)
                {
                    if (Zero.getCarts() > 10)
                    {
                        process += Reese.goToZero(Zero);
                        vestibuleCount += Zero.getCarts();
                        Zero.setCarts(0);
                        pushVisit++;
                        cout << Reese.getName() << " Visited Zero" << endl;
                    }
                    
                    else
                    {
                        process += 29;
                        wastedTime += 29;
                    }
                }
                
                else if (decide <= 30)
                {
                    if (One.getCarts() > 10)
                    {
                        process += Reese.goToOne(One);
                        vestibuleCount += One.getCarts();
                        One.setCarts(0);
                        pushVisit++;
                        cout << Reese.getName() << " Visited One" << endl;
                    }
                    
                    else
                    {
                        process += 30;
                        wastedTime += 30;
                    }
                }
                
                else if (decide <= 50)
                {
                    if (Two.getCarts() > 10)
                    {
                        process += Reese.goToTwo(Two);
                        vestibuleCount += Two.getCarts();
                        Two.setCarts(0);
                        pushVisit++;
                        cout << Reese.getName() << " Visited Two" << endl;
                    }
                    
                    else
                    {
                        process += 31;
                        wastedTime += 31;
                    }
                }
                
                else if (decide <= 70)
                {
                    if (Three.getCarts() > 10)
                    {
                        process += Reese.goToThree(Three);
                        vestibuleCount += Three.getCarts();
                        Three.setCarts(0);
                        pushVisit++;
                        cout << Reese.getName() << " Visited Three" << endl;
                    }
                    
                    else
                    {
                        process += 28;
                        wastedTime += 28;
                    }
                }
                
                else if (decide <= 90)
                {
                    if (Four.getCarts() > 10)
                    {
                        process += Reese.goToFour(Four);
                        vestibuleCount += Four.getCarts();
                        Four.setCarts(0);
                        pushVisit++;
                        cout << Reese.getName() << " Visited Four" << endl;
                    }
                    
                    else
                    {
                        process += 33;
                        wastedTime += 33;
                    }
                }
                
                else if (decide <= 88)
                {
                    if (Five.getCarts() > 10)
                    {
                        process += Reese.goToFive(Five);
                        vestibuleCount += Five.getCarts();
                        Five.setCarts(0);
                        pushVisit++;
                        cout << Reese.getName() << " Visited Five" << endl;
                    }
                    
                    else
                    {
                        process += 35;
                        wastedTime += 35;
                    }
                }
                
                else if (decide <= 92)
                {
                    if (Six.getCarts() > 10)
                    {
                        process += Reese.goToSix(Six);
                        vestibuleCount += Six.getCarts();
                        Six.setCarts(0);
                        pushVisit++;
                        cout << Reese.getName() << " Visited Six" << endl;
                    }
                    
                    else
                    {
                        process += 50;
                        wastedTime += 50;
                    }
                }
                
                else if (decide <= 98)
                {
                    if (Seven.getCarts() > 10)
                    {
                        process += Reese.goToSeven(Seven);
                        vestibuleCount += Seven.getCarts();
                        Seven.setCarts(0);
                        pushVisit++;
                        cout << Reese.getName() << " Visited Seven" << endl;
                    }
                    
                    else
                    {
                        process += 40;
                        wastedTime += 40;
                    }
                }
                
                else if (decide <= 99)
                {
                    if (Eight.getCarts() > 10)
                    {
                        process += Reese.goToEight(Eight);
                        vestibuleCount += Eight.getCarts();
                        Eight.setCarts(0);
                        pushVisit++;
                        cout << Reese.getName() << " Visited Eight" << endl;
                    }
                    
                    else
                    {
                        process += 50;
                        wastedTime += 50;
                    }
                }
                
                else if (decide <= 100)
                {
                    if (Nine.getCarts() > 5)
                    {
                        process += Reese.goToNine(Nine);
                        vestibuleCount += Nine.getCarts();
                        Nine.setCarts(0);
                        pushVisit++;
                        cout << Reese.getName() << " Visited Nine" << endl;
                    }
                    
                    else
                    {
                        process += 50;
                        wastedTime += 50;
                    }
                }
            }
            
            
            
            
            
            //checks all full corrals...
            if (Zero.getCarts() > 25)
                {
                    process += Reese.goToZero(Zero);
                    vestibuleCount += Zero.getCarts();
                    Zero.setCarts(0);
                    pushVisit++;
                    cout << Reese.getName() << " Visited Zero" << endl;
                }
                
            if (One.getCarts() > 25)
                {
                    process += Reese.goToOne(One);
                    vestibuleCount += One.getCarts();
                    One.setCarts(0);
                    pushVisit++;
                    cout << Reese.getName() << " Visited One" << endl;
                }
                
            if (Two.getCarts() > 25)
                {
                    process += Reese.goToTwo(Two);
                    vestibuleCount += Two.getCarts();
                    Two.setCarts(0);
                    pushVisit++;
                    cout << Reese.getName() << " Visited Two" << endl;
                }
                
            if (Three.getCarts() > 25)
                {
                    process += Reese.goToThree(Three);
                    vestibuleCount += Three.getCarts();
                    Three.setCarts(0);
                    pushVisit++;
                    cout << Reese.getName() << " Visited Three" << endl;
                }
                
            if (Four.getCarts() > 25)
                {
                    process += Reese.goToFour(Four);
                    vestibuleCount += Four.getCarts();
                    Four.setCarts(0);
                    pushVisit++;
                    cout << Reese.getName() << " Visited Four" << endl;
                }
                
            if (Five.getCarts() > 25)
                {
                    process += Reese.goToFive(Five);
                    vestibuleCount += Five.getCarts();
                    Five.setCarts(0);
                    pushVisit++;
                    cout << Reese.getName() << " Visited Five" << endl;
                }
                
            if (Six.getCarts() > 25)
                {
                    process += Reese.goToSix(Six);
                    vestibuleCount += Six.getCarts();
                    Six.setCarts(0);
                    pushVisit++;
                    cout << Reese.getName() << " Visited Six" << endl;
                }
                
            if (Seven.getCarts() > 25)
                {
                    process += Reese.goToSeven(Seven);
                    vestibuleCount += Seven.getCarts();
                    Seven.setCarts(0);
                    pushVisit++;
                    cout << Reese.getName() << " Visited Seven" << endl;
                }
        
}



int main()
{
    //pushers
    Pusher Reese("Reese", 1, true);
    Pusher Alan("Alan", 1.1, false);
    Pusher Braydon("Braydon", 0.7, false);
    Pusher K("K", 0.7, false);
    Pusher Wesley("Wesley", 0.8, false);
    
    //corrals
    Corral Zero(0, "Zero");
    Corral One(0, "One");
    Corral Two(0, "Two");
    Corral Three(0, "Three");
    Corral Four(0, "Four");
    Corral Five(0, "Five");
    Corral Six(0, "Six");
    Corral Seven(0, "Seven");
    Corral Eight(0, "Eight");
    Corral Nine(0, "Nine");
    Corral BackL(0, "BackL");
    Corral BackR(0, "BackR");
    Corral TBC(0, "TBC");
    
    int decide;
    int customerEnter;
    int vestibuleCount = 250;
    int customerCount = 0;
    int timeTest = 3600 * 13;
    
    int processforReese = -100;
    int processforAlan = 60;
    int processforBraydon = -120;
    int processforK = -200;
    int processforWesley = 110;
    int visitReese = 0;
    int visitAlan = 0;
    int visitBraydon = 0;
    int visitK = 0;
    int visitWesley = 0;
    
    int business = 100;
    int wastedTime = 0;

    srand(time(0));
    
    
    
    
    
    
    
    //tracking the Vestibule
    
    cout << "Vestibule starting with: " << vestibuleCount << " carts" << endl;
    for (int i = 0; i < timeTest; i++)
    {
        
        
        
        customerEnter = rand() % business + 1;
        
        if (i == 3600)
        {
            vestibuleCount -=50;
            business = 120;
            cout << "Vestibule currently has: " << vestibuleCount << " carts" << endl;
        }
        
        if (i == (3600 * 2))
        {
            vestibuleCount -= 20;
            business = 85;
            processforReese += 7600;
            cout << "Vestibule currently has: " << vestibuleCount << " carts" << endl;
        }
        
        if (i == (3600 * 3))
        {
            vestibuleCount -= 40;
            business = 80;
            cout << "Vestibule currently has: " << vestibuleCount << " carts" << endl;
        }
        
        if (i == (3600 * 4))
        {
            vestibuleCount -= 15;
            business = 75;
            processforBraydon += 15000;
            processforK += 15000;
            cout << "Vestibule currently has: " << vestibuleCount << " carts" << endl;
        }
        
        if (i == (3600 * 5))
        {
            vestibuleCount -= 10;
            business = 74;
            cout << "Vestibule currently has: " << vestibuleCount << " carts" << endl;
        }
        
        if (i == (3600 * 6))
        { 
            vestibuleCount += 10;
            business = 81;
            cout << "Vestibule currently has: " << vestibuleCount << " carts" << endl;
        }
        
        if (i == (3600 * 7))
        {
            vestibuleCount += 15;
            business = 84;
            processforReese -= 10000;
            processforWesley -= 10000;
            processforAlan -= 10000;
            Braydon.setEfficient(0.9);
            K.setEfficient(0.9);
            cout << "Vestibule currently has: " << vestibuleCount << " carts" << endl;
        }
        
        if (i == (3600 * 8))
        {
            business = 95;
            cout << "Vestibule currently has: " << vestibuleCount << " carts" << endl;
        }
        
        if (i == (3600 * 9))
        {
            vestibuleCount +=10;
            business = 100;
            cout << "Vestibule currently has: " << vestibuleCount << " carts" << endl;
        }
        
        if (i == (3600 * 10))
        {
            vestibuleCount += 20;
            business = 103;
            cout << "Vestibule currently has: " << vestibuleCount << " carts" << endl;
        }
        
        if (i == (3600 * 11))
        {
            vestibuleCount += 30;
            business = 130;
            cout << "Vestibule currently has: " << vestibuleCount << " carts" << endl;
        }
        
        
        // realistically assign random carts to corrals
        if (customerEnter <= 10 && vestibuleCount > 0)
        {
            customerCount++;
            vestibuleCount--;
            
            decide = rand() % 100 + 1;
            
            if (decide <= 7)
            {
                Zero.setCarts(Zero.getCarts() + 1);
            }
            
            else if (decide <= 25)
            {
                One.setCarts(One.getCarts() + 1);
            }
            
            else if (decide <= 41)
            {
                Two.setCarts(Two.getCarts() + 1);
            }
            
            else if (decide <= 62)
            {
                Three.setCarts(Three.getCarts() + 1);
            }
            
            else if (decide <= 75)
            {
                Four.setCarts(Four.getCarts() + 1);
            }
            
            else if (decide <= 88)
            {
                Five.setCarts(Five.getCarts() + 1);
            }
            
            else if (decide <= 92)
            {
                Six.setCarts(Six.getCarts() + 1);
            }
            
            else if (decide <= 98)
            {
                Seven.setCarts(Seven.getCarts() + 1);
            }
            
            else if (decide <= 99)
            {
                Eight.setCarts(Eight.getCarts() + 1);
            }
            
            else if (decide <= 100)
            {
                Nine.setCarts(Nine.getCarts() + 1);
            }
            
            
            if (vestibuleCount == 0)
            {
            cout << "Vestibule empty. Failed at " << (i / 3600 ) << "H " << ((i % 3600) / 60) << "M " << i % 60 << "S" << endl;
            break;
            }   
            
        }
        
        if (i == timeTest - 1)
            {
                cout << "CONGRATULATIONS!! You withstood the customers, good job!" << endl;
            }

        if (i == processforReese)
        {
            roamMethod(Reese, processforReese, vestibuleCount, visitReese, wastedTime, Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine);
        }
        
        if (i == processforAlan)
        {
            roamMethod(Alan, processforAlan, vestibuleCount, visitAlan, wastedTime, Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine);
        }
        
        if (i == processforBraydon)
        {
            roamMethod(Braydon, processforBraydon, vestibuleCount, visitBraydon, wastedTime, Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine);
        }
        
        if (i == processforK)
        {
            roamMethod(K, processforK, vestibuleCount, visitK, wastedTime, Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine);
        }
        
        if (i == processforWesley)
        {
            roamMethod(Wesley, processforWesley, vestibuleCount, visitWesley, wastedTime, Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine);
        }
        
        
        
    }

    
    Zero.print();
   One.print();
   Two.print();
   Three.print();
   Four.print();
   Five.print();
   Six.print();
   Seven.print();
   Eight.print();
   Nine.print();
    
    int totalCarts = Zero.getCarts() + One.getCarts() + Two.getCarts() + Three.getCarts() + Four.getCarts() + Five.getCarts() + Six.getCarts() + Seven.getCarts() + Eight.getCarts() + Nine.getCarts() + BackR.getCarts() + BackL.getCarts() + TBC.getCarts();
    
    cout << "Vestibule finishing with: " << vestibuleCount << " carts" << endl;
    cout << "Total carts on parking lot: " << totalCarts << " carts" << endl;
    cout << "Total customers within experiment: " << customerCount << " customers" << endl << endl << endl;
    
    
    //Output pusher contents
    cout << "Pusher Statistics:" << endl;
    cout << "Reese visits: " << visitReese << endl;
    cout << "Alan visits: " << visitAlan << endl;
    cout << "Braydon visits: " << visitBraydon << endl;
    cout << "K visits: " << visitK << endl;
    cout << "Wesley visits: " << visitWesley << endl;

    //Output final contents
    cout << "Total Wasted Time due to Roaming: " << (wastedTime / 3600) << "H ";
    wastedTime = wastedTime % 3600;
    cout << (wastedTime / 60) << "M ";
    wastedTime = wastedTime % 60;
    cout << wastedTime << "S"; 

    return 0;
}


