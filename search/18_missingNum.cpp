//// Missing number : find the first missing positive which is not in the "unsorted" array.
//// Tags:  [Array] [Hash table]
//// Level: [Hard]
#include <iostream>
#include <vector>
#include <unordered_set>
#include "../dataStructure/array.cpp"
using namespace std;

/*
// 01. my code O(n), space O(n): hash table; 
int firstMissingPositive(vector<int>& nums){
    unordered_set<int> hmap;
    int smallest = 1;
    for( int i=0; i<nums.size(); i++){
        hmap.insert(nums[i]);
    }
    for( int i=0; i<nums.size(); i++){
        if( hmap.count(smallest) ) smallest++;
    }
    return smallest;
}*/

// 02. O(n), space O(1)
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(); 
        for (int i = 0; i < n; i++)
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);
        for (int i = 0; i < n; i++)
            if (nums[i] != i + 1)
                return i + 1;
        return n + 1;
    }


int main(){

    //int a[]={1, 3, -2, 5, 7, 6};
    int a[]={9, 8, 7, 5, 4, 3,2,1};
    vector<int> input = arrayToVector(a, sizeof(a)/sizeof(a[0]));
    printVector(input);

    cout<<"Missing postive : "<<firstMissingPositive(input)<<endl;

}
