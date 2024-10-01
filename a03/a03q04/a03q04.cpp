// Name: Oyedeji Robert Oladayo
// File: a03q04.cpp

#include <iostream>

int main() 
{
    int time1, time2;
    std::cin >> time1;
    std::cin >> time2;

    int hrs1, min1, sec1;
    hrs1 = (time1 / 10000);
    min1 = (time1 / 100 % 100);
    sec1 = time1 % 100;

    time1 = sec1 + (min1 * 60) + (hrs1 * 60 * 60);
    
    int hrs2, min2, sec2;
    hrs2 = (time2 / 10000)  ;
    min2 = (time2 / 100 % 100);
    sec2 = (time2 % 100);

    time2 = sec2 + (min2 * 60) + (hrs2 * 60 * 60);

    int time = time2 - time1;

    int hrs, min, sec;
    hrs = time / 60 / 60;
    min = time / 60 % 60;
    sec = time % 60;    

    std::cout << hrs / 10 << hrs % 10 << ':'
              << min / 10 << min % 10 << ':'
              << sec / 10 << sec % 10 << std::endl;   
    
    return 0;
}
