#include <iostream>
using namespace std;

/*
There are 3 types of constructors:
    1. Non-Parameterized Constructor
    2. Parameterized Constructor
    3. Copy Constructor
*/

class Account{
    public:
        //Non-Parameterized Constructor
        Account(){
            cout<<"Hello i am constructor"<<endl;
        }


    public:
        //Parameterized Constructor
        Account(double balance, string password, string accountId, string username){
            this->balance = balance;
            this->password = password;
            this->accountId = accountId;
            this->username = username;
        }

    public:
        //Copy Constructor
        Account(Account &orgObj){
            this->balance = orgObj.balance;
            this->password = orgObj.password;
            this->accountId = orgObj.accountId;
            this->username = orgObj.username;
        }

    private:
        double balance;
        string password;
    
    public:
        string accountId;
        string username;

    void getInfo(){
        cout<<accountId<<endl;
        cout<<username<<endl;
    }
};

// Shallow Copy
class Demo {
public:
    int *ptr;

    Demo(int x) {
        ptr = new int(x);
    }
};

// Deep Copy
class Demo {
public:
    int *ptr;

    Demo(int x) {
        ptr = new int(x);
    }

    // deep copy constructor
    Demo(const Demo &obj) {
        ptr = new int(*obj.ptr);
    }
};

int main(){    
    Account acc(800000, "6969", "12343128", "69694ever");
    acc.getInfo();  

    Account acc2(acc);
    acc2.getInfo();
    return 0;
}