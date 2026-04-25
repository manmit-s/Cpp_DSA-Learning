#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        int sign = 1;
        long long num = 0;
        long long res = 0;
        stack<long long> st;

        for(char ch : s){
            if(ch == '+'){
                res += sign*num;
                num = 0;
                sign = 1;
            }
            else if(ch == '-'){
                res += sign*num;
                num = 0;
                sign = -1;
            }
            else if(ch == '('){
                num = 0;
                st.push(res);
                st.push(sign);
                res = 0;
                sign = 1;
                continue;
            }
            else if(ch == ' ') continue;
            else if(ch == ')'){
                res *= st.top();
                st.pop();
                res += st.top();
                st.pop();
            }
            else{
                num = num*10 + (ch - '0');
            }
        }
        if(num != 0) res += sign*num;
        return (int)res;
    }
};

int main(){
    
    return 0;
}