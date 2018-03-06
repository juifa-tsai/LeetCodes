//// Single number
//// Tags:  [Hash table] [bit manipulation]
//// Level: [Easy]

#include <iostream>
#include <vector>
#include <map>
using namespace std;


// O(n)
int singleNumber(vector<int>& nums) {
    map<int, int> hashmap;
    for( int i=0; i<nums.size(); i++ ){
        hashmap[nums[i]]++;   
    }
    for( map<int, int>::iterator it=hashmap.begin(); it!= hashmap.end(); it++ ){
        if( it->second == 1 ) return it->first;
    }
}

/*
// O(n) slower...
int singleNumber(vector<int>& nums) {
    map<int, int> hashmap;
    hashmap[nums[0]]=0;
    for( int i=1; i<nums.size(); i++ ){
        if( hashmap.count(nums[i]) ) hashmap.erase(nums[i]);
        else hashmap[nums[i]]=i;
    }
    return hashmap.begin()->first;
}
*/


int main(){

    vector<int> input;
    input.push_back(1);
    input.push_back(1);
    input.push_back(2);
    input.push_back(4);
    input.push_back(2);

    cout<<"Singlue number idx: "<<singleNumber(input)<<endl;

}
