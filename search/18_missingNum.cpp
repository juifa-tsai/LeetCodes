//// Missing number : find the first missing positive which is not in the "sorted" array.
//// Tags:  [Array]
//// Level: [Easy]
#include <iostream>
#include <vector>
#include "../dataStructure/array.cpp"
using namespace std;

// 01. my code O(n); 
int firstMissingPositive(vector<int>& nums){
    int smallest = 1;
    for( int i=0; i<nums.size(); i++){
        if( smallest == nums[i] ) smallest = nums[i]+1;
    }
    return smallest;
}

int main(){

    int a[]={-1, 1, 2, 3, 6, 7};
    vector<int> input = arrayToVector(a, sizeof(a)/sizeof(a[0]));
    printVector(input);

    cout<<"Missing postive : "<<firstMissingPositive(input)<<endl;

}
