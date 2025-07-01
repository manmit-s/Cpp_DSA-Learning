#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<s.top()<<" -> Top"<<endl;
    s.pop();
    cout<<s.top()<<" -> Top"<<endl;
    cout<<s.size()<<endl;
    
    stack <int> s2;
    s2.swap(s);
    cout<<s2.size()<<endl;
    cout<<s.size()<<endl;
    return 0;
}