//// Climbing stairs : find unique steps for n stairs, only 1 and 2 steps allowed
//// Tags : [math] [Dynamic programming]
//// [Easy]

#include <iostream>
#include <cmath>
using namespace std;
/*
// 01. my code O(n), space O(1) : steps[i] = steps[i-1] + steps[i-2] (Fibonacci Number)
int climbStairs(int n) {
    // steps1 = steps[i-1], steps2 = steps[i-2]
    int steps1 = 1, steps2 = 0;
    for( int i=0; i<n; i++ ){
        int cur = steps1 + steps2;
        steps1 = steps2;
        steps1 = cur;
    }
    return steps1;
}
*/
/*
// 02. Dynamic programming, O(n), space O(n), same as Fibonacci Number
int climbStairs(int n) {
    if( n == 1 ) return 1;

    int steps[n+1]; //DP
    steps[0] = 0, steps[1] = 1, steps[2] = 2;
    for( int i=3; i<=n; i++ ){
        steps[i] = steps[i-1] + steps[i-2];
    }
    return steps[n];
}
*/

// 02 time O(log n), space O(1) (Fibonacci Formula)
int climbStairs(int n) {
    double sqrt5 = sqrt(5);
    double fibn = pow((1+sqrt5)/2, n+1) - pow((1-sqrt5)/2, n+1);
    return int(fibn/sqrt5);
}

int main(){
    int n=10;
    cout<<"Unique steps for "<<n<<" stairs has : "<<climbStairs(n)<<endl;

}
