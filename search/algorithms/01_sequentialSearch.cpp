// Sequential search (linear search) : go through all elements of arry
// Worst case : O(n)
// Application : unordered, frequent changing data
#include <iostream>
using namespace std;

int sequentialSearch(int a[], int a_n, int key){
    for(int i=0; i<a_n; i++){
        if(a[i]==key) return i;
    }
    return -1;
}

int main(){
    int a[]={1,4,6,7,8,3,5,2,0};
    int k = 5;
    cout<<"Search "<<k<<" at "<<sequentialSearch(a, sizeof(a)/sizeof(a[0]), k )<<" idx of array";

}