#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int rollno;
};

class Teacher{
    public:
        string subject;
        double salary;
};

class TeachingAssistant : public Student, public Teacher{
    
};

int main(){
    TeachingAssistant ta;
    ta.name = "Manmit";
    ta.rollno = 696969;
    ta.subject = "Quantum Mechanics";
    ta.salary = 80000;

    cout<<"Name: "<<ta.name<<endl;
    cout<<"Roll No: "<<ta.rollno<<endl;
    cout<<"Subject: "<<ta.subject<<endl;
    cout<<"Salary: "<<ta.salary<<endl;
    return 0;
}