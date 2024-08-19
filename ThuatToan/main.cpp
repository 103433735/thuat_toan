//
//  main.cpp
//  ThuatToan
//
//  Created by Hartzed Story on 13/8/24.
//

#include <iostream>
using namespace std;

//Template
template <typename T>
void hello() {
    cout << "Type: " << typeid(T).name() << endl;
    cout << "Size: " << sizeof(T) << " bytes" << endl;
}

int main(int argc, const char * argv[]) {
    hello<int>();
}


