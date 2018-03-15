// Interpolation search : search by ratio of distance iteratively, improved binary search
// Worst case : O(log log n)
// Application : ordered, stable data
#include <iostream>
#include <algorithm>
using namespace std;

int interpolationSearch(int a[], int a_n, int key){
    int l=0, r=a_n-1;
    while( l<=r ){
        // caculate ratio
        float x = (a[r] != a[l]) ? (key-a[l])/(a[r]-a[l]) : 0; 
        // predicted m having key
        int m = l + x*(l+r)/2;
        
        if( a[m] == key ) return m;
        else if( a[m] < key ) l = m+1;
        else r = m-1;
    }
    return -1;
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int k = 5;
    cout<<"Search "<<k<<" at "<<interpolationSearch(a, sizeof(a)/sizeof(a[0]), k )<<" idx of array";

}