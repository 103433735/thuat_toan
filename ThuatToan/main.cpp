//
//  main.cpp
//  ThuatToan
//
//  Created by Hartzed Story on 13/8/24.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x = 10;
    int y = 20;
    int* p = &x;
    
    //Gán lại pointer bằng một địa chỉ khác
    p = &y;
    
    cout << *p << endl ;
    int* q = p;
    cout << *q << endl ;
    
    //Biến con trỏ 2 chiều
    int** qq = &q;
    cout << **qq << endl;
    
}


