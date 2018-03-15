// Selection sort : pickup biggest number and swap it to end, iteratively reduce scaning range until touch begin node.
// Time, best/worst case : O(n^2)/O(n^2)
// Space : O(1)
// Stable : True 
#include <iostream>
using namespace std;

/*
// my code : forward check
void selectionSort(int a[], int a_n){
    for( int i=0; i<a_n; i++ ){
        int max=0;
        // pickup biggest
        for( int j=1; j<a_n-i; j++){
            if ( a[j] > a[max] ) max=j;
        }
        int tmp = a[a_n-i-1];
        a[a_n-i-1] = a[max];
        a[max] = tmp;
    }
}
*/
// book : backward check
void selectionSort(int a[], int a_n){
    for( int i=a_n-1; i>0; i-- ){
        int max=i;
        // pickup biggest
        for( int j=i-1; j>=0; j-- ){
            if ( a[j] > a[max] ) max=j;
        }
        int tmp = a[max];
        a[max] = a[i];
        a[i] = tmp;
    }
}

int main(){
    int a[]={6,7,3,8,9,5,2,1,7,9};

    selectionSort(a, sizeof(a)/sizeof(a[0]) );

    cout<<" Sorted : [ ";
    for( int i=0; i<sizeof(a)/sizeof(a[0]); i++){
        cout<<a[i]<<" ";
    }
    cout<<"]"<<endl;

}