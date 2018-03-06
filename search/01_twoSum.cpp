//// Two sum, one solution only
//// Tags:  [Array] [Hash table]
//// Level: [Easy]

#include <iostream>
#include <vector>
using namespace std;

/*
// 01. my code, O(n^2)
vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> i_unmatch;
    vector<int> result;
    i_unmatch.push_back(0);
    for( int i=1; i<numbers.size(); i++ ){
        bool matched = false;
        for( int j=0; j<i_unmatch.size(); j++){
            if ( numbers[i] + numbers[i_unmatch[j]] == target ){ 
                matched = true;
                if( numbers[i] >= numbers[i_unmatch[j]] ){ 
                    result.push_back(i_unmatch[j]);
                    result.push_back(i);
                }else{
                    result.push_back(i);
                    result.push_back(i_unmatch[j]);
                }
            }
        }
        if( !matched ) i_unmatch.push_back(i);
    }
    return result; 
}
*/

/*
// 02. Brute force : O(n^2)
vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> output;
    for( int i=0; i<numbers.size(); i++ ){
        for( int j=i+1; j<numbers.size(); j++ ){
            if( numbers[i]+numbers[j] == target ){
                output.push_back(i);
                output.push_back(j);
                return output;
            }
        }
    } 
    cout<<"No tow sum found!"<<endl;
    return output;
}
*/

// 03. Hash table : O(n)



int main(){

    vector<int> input;
    input.push_back(2);
    input.push_back(3);
    input.push_back(4);

    vector<int> output = twoSum(input, 6);
    cout<<output[0]<<" "<<output[1]<<endl;

}
