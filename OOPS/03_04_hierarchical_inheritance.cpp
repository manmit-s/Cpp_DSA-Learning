#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;
};

class Student : public Person{
    public:
        int rollno;
};

class Teacher : public Person{
    public:
        string subject;
};

int main(){
    Student s;
    s.name = "Manmit";
    s.age = 19;
    s.rollno = 21;
    
    Teacher t;
    t.name = "Priyanka";
    t.age = 44;
    t.subject = "Maths";

    cout<<"----Student---"<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Age: "<<s.age<<endl;
    cout<<"Roll No: "<<s.rollno<<endl;
    
    cout<<"----Teacher---"<<endl;
    cout<<"Name: "<<t.name<<endl;
    cout<<"Age: "<<t.age<<endl;
    cout<<"Subject: "<<t.subject<<endl;
    return 0;
}