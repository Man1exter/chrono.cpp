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
    chrono::duration<int> sek20(20); // 20s, bo okres(duration) domyślnie taktuje sekundami..
    chrono::duration<int, ratio<60>> min3; // 3min = || int min =3, a ratio do sekundy(60s ==> 1 minuta)..

}



int main(){
    chronofunct();
    
    return 0;
}