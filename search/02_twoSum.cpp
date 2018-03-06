//// Two sum, sorted arry, one solution only
//// Tags:  [Array] [binary seach]
//// Level: [Easy]

#include <iostream>
#include <vector>
#include <map>
using namespace std;

// O(n)
vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> result;
    int l=0;
    int r=numbers.size()-1;
    while( r<l ){
        if( numbers[r] + numbers[l] > target ) r--;
        else if ( numbers[r] + numbers[l] < target ) l++;
        else break;
    }
    if( r!=l ){
        result.push_back(l+1);
        result.push_back(r+1);
    }else{
        cout<<"No two sum found!"<<endl;
    }
    return result;
}

/*
vector<int> twoSum(vector<int>& numbers, int target) {
    int l=0, r=numbers.size()-1;
    while( r>l ){
        if( numbers[r] + numbers[l] > target ){ r--; }
        else if ( numbers[r] + numbers[l] < target ){ l++; }
        else{
            vector<int> res{l+1,r+1};
            return res;
        }
    }
}
*/

int main(){

    vector<int> input;
    input.push_back(2);
    input.push_back(3);
    input.push_back(4);
    input.push_back(8);

    vector<int> output = twoSum(input, 6);
    cout<<output[0]<<" "<<output[1]<<endl;

}
