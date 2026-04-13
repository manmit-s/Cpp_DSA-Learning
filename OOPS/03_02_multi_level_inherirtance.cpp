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

class GradStudent : public Student{
    public:
        string researchArea;
};

int main(){
    GradStudent gs;
    gs.name = "Manmit";
    gs.researchArea = "Quantum Mechanics";  
    
    cout<<"Name: "<<gs.name<<endl;
    cout<<"Reasearch Area: "<<gs.researchArea<<endl;
    return 0;
}