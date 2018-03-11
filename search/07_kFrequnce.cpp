//// K most of frequnce number
//// Tags:  [Hash table] [Heap]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
using namespace std;
/*
// 01. my code: O(n^2)
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> hashMap;
    vector<int> topKelements;
    for( int i=0; i<nums.size(); i++){
        hashMap[nums[i]]++;
    }
    while( k > topKelements.size() ){
        int max_v=0, max_i=-1;
        for( unordered_map<int, int>::iterator it=hashMap.begin(); it!= hashMap.end(); it++ ){
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


// 02. max heap : O(nlog(n-k))
//https://leetcode.com/problems/top-k-frequent-elements/discuss/81624/C++-O(n-log(n-k))-unordered_map-and-priority_queue(maxheap)-solution
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> map;
    for(int num : nums){
        map[num]++;
    }

    vector<int> res;
    // pair<first, second>: first is frequency,  second is number
    priority_queue<pair<int,int>> pq; 
    for(auto it = map.begin(); it != map.end(); it++){
        pq.push(make_pair(it->second, it->first)); // max in priority, nlog(n-k)
        if(pq.size() > (int)map.size() - k){
            res.push_back(pq.top().second);
            pq.pop();
        }
    }
    return res;
}
*/
// 03. min heap : O(nlog k)
// https://leetcode.com/problems/top-k-frequent-elements/discuss/81676/C++-O(nlogk)-and-O(n)-solutions

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> counts;
    priority_queue<int, vector<int>, greater<int> > max_k;
    for( int i=0; i<nums.size(); i++ ) ++counts[nums[i]];
    for( unordered_map<int, int>::iterator i=counts.begin(); i!= counts.end(); i++) {
        max_k.push(i->second);
        // Size of the min heap is maintained at equal to or below k
        while(max_k.size() > k) max_k.pop();
    }
    vector<int> res;
    for(unordered_map<int, int>::iterator i=counts.begin(); i!= counts.end(); i++) {
        // The top of min-heap is <= k
        if(i->second >= max_k.top()) res.push_back(i->first);
    }
    return res;
}

int main(){

    vector<int> input;
    input.push_back(1);
    input.push_back(1);
    input.push_back(2);
    input.push_back(4);
    input.push_back(2);

    vector<int> k = topKFrequent(input,2);
    cout<<"[ ";
    for(int i=0; i<k.size(); i++){
        cout<<k[i]<<" ";
    }
    cout<<"]"<<endl;
}
