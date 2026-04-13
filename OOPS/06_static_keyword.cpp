#include <iostream>
using namespace std;

class Student {
public:
    static int count;  // declaration

    Student() {
        count++;
    }
};

// definition (required)
int Student::count = 0;

//---------------//
class Demo {
public:
    Demo() {
        cout << "Constructor called\n";
    }

    ~Demo() {
        cout << "Destructor called\n";
    }
};

void test() {
    static Demo d;  // static object
}

int main() {
    Student s1, s2, s3;

    cout << Student::count << endl;  // 3

    test();
    test();
}