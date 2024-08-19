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
    int z = 30;
    
    int* q = &z;
    int* p = &x;
    p = q;
    p = NULL;
    
    //Phép so sánh pointer
    cout << (p == &x) << endl; //p sẽ lưu địa chỉ NULL, mà &x lại chính là địa chỉ của x --> false
    cout << (p != q) << endl; //p lưu địa chỉ NULL, q lưu địa chỉ của z --> true
    cout << (p <= q) << endl;
    cout << (p >= q) << endl;
    cout << (p == NULL) << endl;
    

    //Check NULL cho một pointer
    if (p != NULL) {
        //Lúc này cho phép truy cập biến p
        cout << *p << endl;
    } else {
        cout << "P bị NULL ròi má" << endl;
    }
}


