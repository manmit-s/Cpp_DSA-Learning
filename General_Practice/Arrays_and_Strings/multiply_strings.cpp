#include <iostream>
#include <vector>
using namespace std;

string multiply(string num1, string num2) {
    if (num1 == "0" || num2 == "0") return "0";

    int n = num1.size(), m = num2.size();
    vector<int> result(n + m, 0);

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');

            int pos1 = i + j;
            int pos2 = i + j + 1;

            int sum = mul + result[pos2];

            result[pos2] = sum % 10;
            result[pos1] += sum / 10;
        }
    }

    // convert to string
    string ans = "";
    for (int num : result) {
        if (!(ans.empty() && num == 0)) {
            ans += to_string(num);
        }
    }

    return ans.empty() ? "0" : ans;
}

int main(){
    
    return 0;
}