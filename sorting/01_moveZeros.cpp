//// Move zeros
//// Tags:  [array] [pointers]
//// Level: [Easy]

#include <iostream>
#include <vector>
using namespace std;

// O(n^2)
void moveZeroes(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++){
        for( vector<int>::iterator it=nums.begin(); it!=nums.end()-i; it++){
            if( *it == 0 ){ 
                nums.erase(it);
                nums.push_back(0);
                continue;
            }
        }
    }
}

int main(){

    vector<int> input;
    input.push_back(0);
    input.push_back(0);
    input.push_back(1);
/*
    input.push_back(3);
    input.push_back(4);
    input.push_back(8);
*/
    moveZeroes(input);
    cout<<input[0]<<" "<<input[1]<<endl;

}
