//// Product of Array Except Self : return array which each i is the product of all element except itself.
//// E.g. [1, 2, 3, 4, 5] = [120, 60, 40, 30, 24]
//// Tags:  [Array]
//// Level: [Medium]

#include <iostream>
#include <vector>
using namespace std;

// 01. O(n), space O(1) : Tow pointers : (prod_L)-> i <-(prod_R)
vector<int> productExceptSelf(vector<int>& nums) {
    int size=nums.size();
    int prod_L=1, prod_R=1;
    vector<int> res(size, 1); // initialize output

    for(int l=0; l<size; l++){
        int r=size-1-l;
        // multiply left or right product for lelt or right element
        res[l]*=prod_L;
        res[r]*=prod_R;
        // update left and right product
        prod_L*=nums[l];
        prod_R*=nums[r];
    }
    return res;
}

int main(){
    vector<int> input;
    input.push_back(1);
    input.push_back(2);
    input.push_back(3);
    input.push_back(4);
    input.push_back(5);

    vector<int> output = productExceptSelf(input);
    cout<<"[ ";
    for( int i=0; i<output.size(); i++){
        cout<<output[i]<<" ";
    }
    cout<<"]"<<endl;
}
