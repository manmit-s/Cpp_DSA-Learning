#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //Access Modifiers -- private, public, protected
    public:
        //Properties or Attributes
        string name;
        string dept;
        string subject;
        double salary;

        //Methods or Member Functions
        void changeDept(string newDept){
            dept = newDept;
        }
};

class Account{
    //Data hiding
    private:
        double balance;
        string password;
    
    public:
        string accountId;
        string username;
};

int main(){
    Teacher t1; //Object of Teacher Class
    t1.name = "Manmit";
    t1.dept = "Artificial Intelligence";
    t1.subject = "Generative AI";
    t1.salary = 600000;
    
    cout<<t1.dept;
    return 0;
}