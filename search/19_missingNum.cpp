//// Missing number : find missing positive in continual array
//// Tags:  [Array] [Hash table] [math]
//// Level: [Medium]
#include <iostream>
#include <vector>
#include <unordered_set>
#include "../dataStructure/array.cpp"
using namespace std;

/*
// 01. my code O(n), space O(n): hash table; 
int missingNumber(vector<int>& nums){
    unordered_set<int> hmap;
    int missing = 0;
    for( int i=0; i<nums.size(); i++){
        hmap.insert(nums[i]);
    }
    for( int i=0; i<nums.size(); i++){
        if( hmap.count(missing) ) missing++;
    }
    return missing;
}*/


// 02. Guass math O(n), time O(1)
int missingNumber(vector<int>& nums){
    int size = nums.size();
    int guass_sum = size*(1+size)/2;
    int sum = 0;
    for( int i=0; i<size; i++) sum += nums[i];
    return guass_sum - sum;
}


int main(){

    int a[]={9, 8, 7, 5, 4, 3,2,1,0};
    //int a[] = {3,0,1};
    vector<int> input = arrayToVector(a, sizeof(a)/sizeof(a[0]));
    printVector(input);

    cout<<"Missing number: "<<missingNumber(input)<<endl;

}
