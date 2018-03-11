//// The best sell and buy stock time : only a transaction allowed (sell before buy, either sell or buy in a day)
//// Tags:  [Array] [G]
//// Level: [Easy]

#include <iostream>
#include <vector>
using namespace std;

// 01. O(n) : sum of the slope (one pass)
// http://bangbingsyb.blogspot.tw/2014/11/leetcode-best-time-to-buy-and-sell.html
int maxProfit(vector<int> &prices) {
    int maxProfit = 0;
    for(int i = 1; i < prices.size(); i++){
        maxProfit += prices[i] - prices[i-1] > 0 ? prices[i] - prices[i-1] : 0;
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