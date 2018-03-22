//// Pefect number : adding the factors of the number, except itself.
//// Tags : [math]
//// [Easy]
#include <iostream>
using namespace std;
/*
// 01. my code O(n), brute solution (better)
bool checkPerfectNumber(int num) {
    int sum=0;
    for( int i=1; i<num; i++ ){
        if( num%i == 0 ) sum+=i;
    }
    return num == sum;
}
*/
/*
// 02. my code O(n), two pointer
bool checkPerfectNumber(int num) {
    if( num == 1 ) return false;

    int sum=1, r=2, l=num-1;
    while( r<l && sum <= num ){
        if( num%r == 0 ){
            l = num/r;
            sum += (r + l);
        }
        r++;
    }
    return num == sum ;
}
*/
// 03. O(sqrt(n))
bool checkPerfectNumber(int num) {
    int sum = 0;
    for( int i=1; i*i<=num; i++ ){
        if( num%i == 0 ){ 
            sum+=i;
            if(  i*i != num ) sum += num/i;
            //cout<<i<<" "<<num/i<<" "<<sum<<endl;
        }
    }
    return sum - num == num ; // subtract itself due to 1
}

int main(){
    int n=28;
    cout<<"Check perfect number "<<n<<" : "<<checkPerfectNumber(n)<<endl;
}