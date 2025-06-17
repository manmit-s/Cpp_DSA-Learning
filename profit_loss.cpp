#include <iostream>
#include <vector>

using namespace std;
int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 0; i < prices.size(); i++){
            for(int j = i+1; j < prices.size(); j++){
                if(profit < (prices[j] - prices[i])){
                    profit = prices[j] - prices[i];
                }
                if(profit < 0){
                    profit = 0;
                }
            }
        }
        return profit;
    }
int main(){
    vector <int> prices = {7,1,5,3,6,4};
    // vector <int> prices = {7,6,4,3,1};
    cout<<maxProfit(prices);
    return 0;
}