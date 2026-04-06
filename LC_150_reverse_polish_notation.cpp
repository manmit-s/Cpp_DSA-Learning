#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int operation(string oprtr, int x, int y){
    if(oprtr == "/") return y/x;
    else if(oprtr == "*") return y*x;
    else if(oprtr == "+") return y+x;
    else return y-x;
}

int evalRPN(vector<string>& tokens) {
    if(tokens.size() <= 1) return stoi(tokens[0]);
    
    stack<int> st;
    for(string ch : tokens){
        if(ch != "/" && ch != "*" && ch != "-" && ch != "+"){
            st.push(stoi(ch));
        }
        else{
            int y = st.top();
            st.pop();
            int x = st.top();
            st.pop();

            st.push(operation(ch, y, x));
        }
    }
    return st.top();
}

int main(){
    stack<int> st;
    st.push(3);
    st.push(4);

    return 0;
}