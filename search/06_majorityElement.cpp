//// Majoriy element : find the number appears most times, i.e. > n/2 times
//// Tags:  [Array] [devide-and-counter] [bit manipulation]
//// Level: [Easy]

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int majorityElement(vector<int>& nums){
    map<int, int> counts;
    for( int i=0; i<nums.size(); i++){
        counts[nums[i]]++;
    }
    int maxcount=0, maxkey=-1;
    for(int i=0; i<nums.size(); i++){
        if( maxcount < counts[nums[i]] ){
            maxcount = counts[nums[i]];
            maxkey = nums[i];
        }  
    }
    return maxkey;  
}

int main(){

    vector<int> input;
    input.push_back(2);
    input.push_back(3);
    input.push_back(3);
    input.push_back(4);

    cout<<majorityElement(input)<<endl;

}
