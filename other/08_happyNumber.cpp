//// Happy number : sum of the digit with squrt iteratively. Return T/F whether sum is 1 / infinite loops.
//// Tags : [math]
//// [Easy]

#include <iostream>
using namespace std;

// 01, my code recursive solution : time O(n), space O(1)
bool isHappy(int n){
    int sqrtsum = 0, next = n;
    while( next ){
        int cur = next%10;
        sqrtsum += cur*cur;
        next = next/10;
    }
    // cout<<n<<" "<<sqrtsum<<endl;
    // range of [2,6] is infinte loops
    if( sqrtsum == 1 ) return 1;
    else if( sqrtsum > 6 ) return isHappy(sqrtsum);
    else return 0;
}


int main(){
    int n=19;
    cout<<isHappy(n)<<endl;
} 
