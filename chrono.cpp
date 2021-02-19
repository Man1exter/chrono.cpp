#include <iostream>
#include <array>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <forward_list>
#include <typeinfo>
#include <string>
#include <ctime>
#include <algorithm>
#include <deque>
#include <functional>
#include <typeinfo>
#include <set>
#include <chrono>
#include "numbers.h"

using namespace std;

void chronofunct(){
    chrono::duration<int> sek20(20);                 //  20 sekund, bo okres(duration) domyślnie taktuje sekundami..
    chrono::duration<int, ratio<60>> min3;           //  3  min = || int min =3, a ratio do sekundy(60s ==> 1 minuta)..
    chrono::duration<double, ratio<10>> x(0.5);      //  5  sekund, bo jest to polowa 10sekundowego taktu (10 x 0.5)..
    chrono::duration<long, ratio<1,1000>> ms(5);     //  5  milisekund, bo to jest (1 / 1000sekundy)..

}



int main(){
    chronofunct();
    
    return 0;
}