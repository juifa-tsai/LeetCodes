//// Find duplicate : there must be a duplicate number in n+1 array with the number of 1 - n.
//// Tags:  [Array] [Hash table] [Cycle Detection]
//// Level: [Medium]
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "../dataStructure/array.cpp"
using namespace std;

/*
// 01. my code Brute solution, time O(n^2), space O(1)
int findDuplicate(vector<int>& nums) {
    int n = nums.size();
    for( int i=1; i<n; i++){
        int count=0;
        for( int k=0; k<n; k++ ){
            if( i == nums[k] ) count++; 
            if( count > 1 ) return i;
        }
    }
    return 0;
}*/

/*
// 02. my code Hashmap, O(n), space O(n)
int findDuplicate(vector<int>& nums) {
    unordered_map<int, int> hmap;
    for( int i=0; i<nums.size(); i++){ 
        hmap[nums[i]]++;
        if( hmap[nums[i]] > 1 ) return nums[i];
    }
    return 0;
}*/

/*
// 03. my code Hashset, O(n), space O(n)
int findDuplicate(vector<int>& nums) {
    unordered_set<int> hset;
    for( int i=0; i<nums.size(); i++){ 
        if( hset.count(nums[i]) ) return nums[i];
        hset.insert(nums[i]);
    }
    return 0;
}*/

// 04. Floyd's Tortoise and Hare, time O(n), space O(1)
int findDuplicate(vector<int>& nums) {
    int T = nums[0];
    int H = nums[0];
    // check if cycle, find the intersection point of the two runners. 
    do{
        T = nums[T];
        H = nums[nums[H]];
    }while( T != H );

    // Find the "entrance" to the cycle.
    int p1 = nums[0];
    int p2 = T;
    while( p1 != p2 ){
        p1 = nums[p1];
        p2 = nums[p2];
    }
    return p1;
}

int main(){

    int a[]={7, 8, 7, 5, 4, 3,2,1};
    vector<int> input = arrayToVector(a, sizeof(a)/sizeof(a[0]));
    printVector(input);

    cout<<"Contains duplicate : "<<findDuplicate(input)<<endl;

}
