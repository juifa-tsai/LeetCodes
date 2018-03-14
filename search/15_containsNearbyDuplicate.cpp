//// Contains Duplicate : return T/F the duplicate within k elements.
//// Tags:  [Array] [Hash table]
//// Level: [Easy]
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// 01. my code O(n): hash table;
bool containsNearbyDuplicate(vector<int>& nums, int k){
    unordered_map<int, int> counter;
    for( int i=0; i<nums.size(); i++){
        if( counter.count(nums[i]) && i-counter[nums[i]] <= k ) return true;
        counter[nums[i]] = i;
    }
    return false;
}

int main(){

    vector<int> input;
    input.push_back(1);
    input.push_back(2);
    input.push_back(0);
    input.push_back(2);

    cout<<"Contains duplicate : "<<containsNearbyDuplicate(input, 4)<<endl;

}
