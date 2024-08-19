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
struct Point_struct {
    T x;
    T y;
    
    void showPoint() {
        cout << "Type: " << typeid(T).name() << endl;
    }
};

template <typename T>
class Point_class {
public:
    T x;
    T y;
};

int main(int argc, const char * argv[]) {
    Point_struct<int> point_struct;
    point_struct.x = 10;
    point_struct.y = 20;
    
    Point_class<float> point_class;
    point_class.x = 30;
    point_class.y = 40;
    
    // Gọi hàm bên trong struct với kiểu dữ liệu T
    point_struct.showPoint();
}


