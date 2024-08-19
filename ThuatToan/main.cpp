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
    char fullName[30];
    int age;
    float height;
    void getFullName() {
        cout << "Hi there " << fullName << endl;
    }
};

int main(int argc, const char * argv[]) {
    Person_struct person_struct = {"Duc Nguyen",24, 1.99};
    cout << person_struct.age << endl;
    person_struct.hello();
    
    
    Person_class person_class = {"Testing function", 24, 1.54};
    cout << person_class.fullName << endl;
    person_class.getFullName();
    
}


