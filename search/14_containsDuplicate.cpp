//// Contains Duplicate
//// Tags:  [Array] [Hash table]
//// Level: [Easy]

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
using namespace std;

// 01. my code O(n): hash table;
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> counter;
    for( int i=0; i<nums.size(); i++){
        counter[nums[i]]++;
        if( counter[nums[i]] > 1 ) return true;
    }
    return false;
}


int main(){

    vector<int> input;
    input.push_back(1);
    input.push_back(1);
    input.push_back(2);
    input.push_back(4);
    input.push_back(2);

    cout<<"Contains duplicate : "<<containsDuplicate(input)<<endl;

}
