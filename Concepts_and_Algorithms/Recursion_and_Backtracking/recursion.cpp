#include <iostream>
using namespace std;

void printNum(int n){ // print from n to 1
    if(n == 1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<" ";
    printNum(n - 1);
}

int factorial(int n){
    if(n == 1){
        return 1;
    }
    return factorial(n - 1) * n;
}

// time complexity: O(n)
// space complexity: O(n)

int main(){
    printNum(10);
    cout<<factorial(5)<<endl;
    return 0;
}