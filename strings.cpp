#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    char str[12]; 

    cout<<"Enter a char array: "<<endl;
    cin>>str;
    cout<<str<<endl; // output is only first word, after space evrything is ignored while taking input through "cin"
    
    cout<<"Enter a char array: "<<endl;
    cin.getline(str, 100);
    cout<<str<<endl; 
    
    char str2[30];
    cout<<"Enter a char array: "<<endl;
    cin.getline(str2, 30, '#'); //'#' is a delimiter and whatever string is before that only that part is going to be stored
    cout<<str2<<endl; 

    for(auto ch : str){
        cout<<ch<<" ";
    }
    cout<<endl;

    // calculation of string length using loops
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }
    cout<<len<<endl;

    string s; // dynamic in nature --> allows runtime modifying
    s = "hello there";
    cout<<s<<endl;
    s = "hello";
    cout<<s<<endl;

    // concatenation of strings
    string s1 = "hello";
    string s2 = " there";
    
    cout<<s1 + s2<<endl;

    // comparison of strings
    cout<<(s1 == s2)<<endl;
    cout<<(s1 < s2)<<endl;
    cout<<(s1 > s2)<<endl;

    // some functions
    cout<<s1.length()<<endl;

    // user input for string
    string st;
    getline(cin, st);
    cout<<st<<endl;

    // reverse a string array
    reverse(st.begin(), st.end());

    return 0;
}