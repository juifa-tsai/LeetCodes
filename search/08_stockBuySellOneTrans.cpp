//// The best sell and buy stock time : only a transaction allowed (sell before buy, either sell or buy in a day)
//// Tags:  [Array] [DP]
//// Level: [Easy]

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
/*
// 01. O(n^2) : Brute solution, time exceeded
int maxProfit(vector<int> &prices) {
    int maxprofit = 0;
    for (int i = 0; i < prices.size(); i++) {
        for (int j = i + 1; j < prices.size(); j++) {
            int profit = prices[j] - prices[i];
            if (profit > maxprofit) maxprofit = profit;
        }
    }
    return maxprofit;
}
*/

// 02. O(n) : update min and max iterate all numbers (one pass)
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/discuss/39039/Sharing-my-simple-and-clear-C++-solution
int maxProfit(vector<int> &prices) {
    int maxProfit = 0;
    int minPrice  = INT_MAX;
    for(int i = 0; i < prices.size(); i++){
        minPrice  = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    return maxProfit;
}


int main(){
    vector<int> input;
    input.push_back(3);
    input.push_back(2);
    input.push_back(6);
    input.push_back(5);
    input.push_back(0);
    input.push_back(3);

    cout<<"Best profit: "<<maxProfit(input)<<endl;

}