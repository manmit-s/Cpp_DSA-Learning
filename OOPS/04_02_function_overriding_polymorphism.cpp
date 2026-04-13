#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {   // important
        cout << "Animal sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {  // optional but good practice
        cout << "Dog barks\n";
    }
};

int main() {
    Animal* a;
    Dog d;

    a = &d;
    a->sound();   // calls Dog's version (runtime decision)
}