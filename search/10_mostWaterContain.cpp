//// Container With Most Water
//// Tags:  [Array] [Two pointers]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

// 01. O(n) : using priority queue
    int maxArea(vector<int>& height) {
        priority_queue<pair<int, int> > qHeight;
        for( int i=0; i<height.size(); i++){
            qHeight.push(make_pair(height[i], i));
        }
        int x_max = 0, x_min=height.size(), maxA=0;
        while( !qHeight.empty() ){
            x_max = max( x_max, qHeight.top().second );
            x_min = min( x_min, qHeight.top().second );
            maxA = max( qHeight.top().first*(x_max-x_min), maxA );
            qHeight.pop();
        }
        return maxA;
    }

// 02. O(n) Two Pointers Approach


int main(){
    vector<int> input;
    input.push_back(3);
    input.push_back(2);
    input.push_back(6);
    input.push_back(5);
    input.push_back(0);
    input.push_back(3);

    cout<<"Max contain: "<<maxArea(input)<<endl;

}