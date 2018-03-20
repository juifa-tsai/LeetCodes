// Insert sort :
// Time, best/worst case : O(n)/O(n^2)
// Space : O(1)
// Stable : True 
#include <iostream>
using namespace std;

// forward check
void insertSort(int a[], int a_n){
    for( int i=1; i<a_n; i++ ){
        int tmp = a[i];
        int j = i;
        // Move to bigger to right
        while( j > 0 && a[j-1] > tmp ){ 
            a[j] = a[j-1];
            j--;
        }
        a[j] = tmp;
    }
}

int main(){
    int a[]={6,7,3,8,9,5,2,1,7,9};

    insertSort(a, sizeof(a)/sizeof(a[0]) );

    cout<<" Sorted : [ ";
    for( int i=0; i<sizeof(a)/sizeof(a[0]); i++){
        cout<<a[i]<<" ";
    }
    cout<<"]"<<endl;

}