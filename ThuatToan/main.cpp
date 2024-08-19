//
//  main.cpp
//  ThuatToan
//
//  Created by Hartzed Story on 13/8/24.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //REFERENCE: Cơ chế này khác pointer ở chỗ, biến reference không lưu địa chỉ của một biến khác. Thay vào đó, nó tạo alias cho cái biến đó
    int x = 10;
    int* p = &x; //Pointer
    
    int& r = x; //Reference
    
    cout << r << endl;
}


