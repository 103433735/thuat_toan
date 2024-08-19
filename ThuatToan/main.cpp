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
    
    int* p = &x;
    
    //* : Toán tử truy cập
    // nếu cout << p --> In ra địa chỉ mà biến p đang lưu trữ
    // nếu cout << *p --> Truy cập vào biến p trước --> in ra giá trị mà biến p đang tham chiếu
    
    cout << *p << endl; //In ra giá trị của vùng dữ liệu đó

    *p = 100;
}


