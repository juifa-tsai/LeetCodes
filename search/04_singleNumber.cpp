//// Single number
//// Tags:  [Hash table] [bit manipulation]
//// Level: [Easy]

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int singleNumber(vector<int>& nums) {
    map<int, int> hashmap;
    for( int i=0; i<nums.size(); i++ ){
        hashmap[nums[i]]++;   
    }
    for( map<int, int>::iterator it=hashmap.begin(); it!= hashmap.end(); it++ ){
        if( it->second == 1 ) return it->first;
    }
}

int main(){

    vector<int> input;
    input.push_back(1);
    input.push_back(1);
    input.push_back(2);
    input.push_back(4);
    input.push_back(2);

    cout<<"Singlue number idx: "<<singleNumber(input)<<endl;

}
