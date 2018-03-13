//// Reverse int
//// Tags:  [math]
//// Level: [Easy]

#include <iostream>
#include <stack>
#include <queue>
#include <cmath>
#include "../dataStructure/linkedList.cpp"
using namespace std;

/*
// 01. O(n) : using long long to control overflow case
int reverse(int x) {
    long long res = 0;
    while(x) {
        //cout<<x<<", "<<res<<", "<<res*10 + x%10<<endl;
        res = res*10 + x%10;
        x /= 10;
    }
    return (res<INT_MIN || res>INT_MAX) ? 0 : res;
}
*/

// 02. O(n) : Recursive case, (int(r) == r) checking 32-bit returns 0 or 1.
int reverse(int x, long r=0) {
    int out= x ? reverse(x/10, r*10 + x%10) : (int(r) == r) * r;
    return out;
}

int main(){
    int a = -123;
    cout<<reverse(a)<<endl;
}
