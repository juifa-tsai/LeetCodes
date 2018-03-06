//// Two sum, data structure design
//// Tags:  [Array] [binary seach]
//// Level: [Easy]

#include <iostream>
#include <vector>
#include <map>
using namespace std;

// O(n)
class twoSum{
    public:
        void add(int number){
            numbers.push_back(number);
        }

        bool find(int target){
            map<int, int> hashmap;
            for( int i=0; i<numbers.size(); i++ ){
                int complement = target-numbers[i];
                if( hashmap.count(complement) ) return true;
                // Save number, idx to hashmap
                hashmap[numbers[i]]=i;
            } 
            return false;
        }

    private:
        vector<int> numbers;
};

int main(){

    twoSum twosum;
    twosum.add(1);
    twosum.add(3);
    twosum.add(5);

    cout<<"Find 4: "<<twosum.find(4)<<endl;
    cout<<"Find 5: "<<twosum.find(5)<<endl;
    cout<<"Find 7: "<<twosum.find(7)<<endl;
    cout<<"Find 4: "<<twosum.find(4)<<endl;

}
