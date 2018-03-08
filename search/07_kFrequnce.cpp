//// K most of frequnce number
//// Tags:  [Hash table] [Heap]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include <map>
using namespace std;

//* 01. my code: O(n^2)
vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int, int> hashMap;
    vector<int> topKelements;
    for( int i=0; i<nums.size(); i++){
        hashMap[nums[i]]++;
    }
    while( k > topKelements.size() ){
        int max_v=0, max_i=-1;
        for( map<int, int>::iterator it=hashMap.begin(); it!= hashMap.end(); it++ ){
            if( it->second >= max_v ){
                max_i = it->first;
                max_v = it->second;
            }
        }
        topKelements.push_back(max_i);
        hashMap.erase(max_i);
    }
    return topKelements;
}

int main(){

    vector<int> input;
    input.push_back(1);
    input.push_back(1);
    input.push_back(2);
    input.push_back(4);
    input.push_back(2);

    vector<int> k = topKFrequent(input,3);
    cout<<"[ ";
    for(int i=0; i<k.size(); i++){
        cout<<k[i]<<" ";
    }
    cout<<"]"<<endl;
}
