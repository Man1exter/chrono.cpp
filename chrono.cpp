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

void chronoBasicFunct(){
    chrono::duration<int> sek20(20);                 //  20 sekund, bo okres(duration) domyślnie taktuje sekundami..
    chrono::duration<int, ratio<60>> min3;           //  3  min = || int min =3, a ratio do sekundy(60s ==> 1 minuta)..
    chrono::duration<double, ratio<10>> x(0.5);      //  5  sekund, bo jest to polowa 10sekundowego taktu (10 x 0.5)..
    chrono::duration<long, ratio<1,1000>> ms(5);     //  5  milisekund, bo to jest (1 / 1000sekundy)..
    chrono::seconds sek(15);                         //  15 sekund..
}

void chronoSomeDay(){
    chrono::hours day(24);                           // 24  godziny..
    using namespace chrono;
    auto okres = minutes(2);
    cout << " specyficzna nazwa okresu =====> "<< typeid(okres).name() << endl;

    chrono::milliseconds(10);
    chrono::microseconds(10);
    chrono::nanoseconds(10);
}

void chronoCout(){
    chrono::duration<int> sek(20);   
    cout << sek.count() << endl;                    // oznacza =====> ile sekund? (zwraca ilość taktów)..
    sek++;                                          // INKREMENTACJA..
    cout << sek.count() << endl;                    // oznacza =====> ile sekund? (zwraca ilość taktów)..
}

void chronoValue(){
    chrono::duration<int> sek(20); 
    chrono::seconds result = sek - sek;             // 20 - 20 = result..

    cout << result.count() << endl;
    cout << chrono::minutes::period::num << " " << chrono::minutes::period::den << endl;    // 60 & 1 ..
}

void chrono10(){
    cout << chrono::duration<long, ratio<10>>::period::num << " - " << chrono::duration<long, ratio<10>>::period::den << endl;
    // 10 , 1 bo  ratio<10>  to domyslne ratio , czyli  ratio<10,1>
    cout << endl;
}

void chronoTime(){
    int r;
    cout << "Millisekundowe konwertowanie ( liczba ) ===> " << endl;
    cin >> r;
    chrono::milliseconds mav2(r);
    cout << " Konwersja z sekund tyle wynosi na (r) sekundy : " << mav2.count() << endl;
}

int main(){
    chronoBasicFunct();
    chronoSomeDay();
    chronoCout();
    chronoValue();
    chrono10();

    chronoTime();
    
    return 0;
}