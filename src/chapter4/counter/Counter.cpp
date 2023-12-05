#include <iostream>
#include "Counter.h"
using namespace std;

int main(){
    Counter cnt;
    //cnt.reset();
    cout << "계수기의 현재 값: " << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "계수기의 현재 값: " << cnt.getValue() << endl;
    return 0;

}