//// Find smallest positive : find the smallest positive which is not in the "unsorted" array.
//// Tags:  [Array] [Hash table]
//// Level: [Medium]
#include <iostream>
#include <vector>
#include <unordered_set>
#include "../dataStructure/array.cpp"
using namespace std;

// 01. my code O(n): hash table; 
int findSmallest(vector<int>& nums){
    unordered_set<int> hmap;
    int smallest = 1;
    for( int i=0; i<nums.size(); i++){
        hmap.insert(nums[i]);
        if( hmap.count(smallest) ) smallest++;
    }
    return smallest;
}

int main(){

    int a[]={1, 3, -2, 5, 7, 6};
    vector<int> input = arrayToVector(a, sizeof(a)/sizeof(a[0]));
    printVector(input);

    cout<<"Smallest int not in array : "<<findSmallest(input)<<endl;

}
