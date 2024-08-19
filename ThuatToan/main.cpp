//
//  main.cpp
//  ThuatToan
//
//  Created by Hartzed Story on 13/8/24.
//

#include <iostream>
using namespace std;

struct Person_struct {
    //Trong struct có thể khai báo kiểu function
    char fullName[30];
    int age = 30;
    float height = 1.65;
    
    void hello() {
        cout << "hello" << endl;
    }
};

class Person_class {
public: //access scope
    string fullName;
    int age;
    float height;
    
    //Constructor
    Person_class() { //Hàm khởi tạo mặc định
    }
    
    Person_class(string fullName, int age, float height) { //Hàm khởi tạo có parameter
        cout << "Created a model" << endl;
        fullName = fullName;
        age = age;
        height = height;
    }
    
    void getFullName() {
        cout << "Hi there " << fullName << endl;
    }
};

int main(int argc, const char * argv[]) {
    Person_struct person_struct = {"Duc Nguyen",24, 1.99};
    cout << person_struct.age << endl;
    person_struct.hello();
    
    
    Person_class person_class_1 = Person_class("Nguyen", 100, 100);
    cout << person_class_1.fullName << endl;
    
    //
}


