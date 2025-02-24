//
//  main.cpp
//  ThuatToan
//
//  Created by Hartzed Story on 13/8/24.
//

#include <iostream>
using namespace std;

//Template
template <typename T1, typename T2> //Template function
void printing() {
    cout << "Type 1: " << typeid(T1).name() << endl;
    cout << "Type 2: " << typeid(T2).name() << endl;
};

template <typename T, int lenght>
struct ABC {
    T a[lenght];
};

struct Doll {
    string color;
    Doll *child;
};

Doll *big_doll = new Doll({
    "red",
    NULL
});

void countDoll(Doll *doll) {
    cout << "OPEN DOLL: " << doll->color;
    if (doll -> child == NULL) {
        return;
    } else {
        countDoll(doll -> child);
    }
}
int main(int argc, const char * argv[]) {
    printing<int, bool>();
    
    ABC<int, 100> array;
    
    cout << sizeof(array);
    
    big_doll -> child = new Doll({
        "green",
        NULL
    });
    big_doll -> child -> child = new Doll({
        "yellow",
        NULL
    });
    big_doll -> child -> child = new Doll({
        "blue",
        NULL
    });
    countDoll(big_doll);
}


