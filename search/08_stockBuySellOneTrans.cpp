//// The best sell and buy stock time
//// Tags:  [Array] [DP]
//// Level: [Easy]

#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

// 01. O(n) : update min and max iterate all numbers (one pass)
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
