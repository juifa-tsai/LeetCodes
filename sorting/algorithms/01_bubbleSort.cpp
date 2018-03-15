// Bubble sort : compare and swap nearby iteratively
// Time, best/worst case : O(n^2)/O(n^2)
// Space : O(1)
// Stable : True 
#include <iostream>
using namespace std;

void bubbleSort(int a[], int a_n){
    for( int i=0; i<a_n; i++ ){
        for( int j=i+1; j<a_n; j++){
            if( a[i]>a[j] ){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main(){
    int a[]={6,7,3,8,9,5,2,1,7,9};

    bubbleSort(a, sizeof(a)/sizeof(a[0]) );

    cout<<" Sorted : [ ";
    for( int i=0; i<sizeof(a)/sizeof(a[0]); i++){
        cout<<a[i]<<" ";
    }
    cout<<"]"<<endl;

}