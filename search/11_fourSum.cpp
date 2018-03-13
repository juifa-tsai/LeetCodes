//// 4 Sum : count number of solution for summing the 4 same-length arraies' each one element to zero
//// Tags:  [Array] [Hash table]
//// Level: [Midium]

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// O(n^2) : Hashmap for A, B sum first.
int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
    unordered_map<int, int>  abSum;
    for(int a=0; a<A.size(); a++) {
        for(int b=0; b<B.size(); b++) {
            abSum[A[a]+B[b]]++;
        }
    }
    int count = 0;
    for( int c=0; c<C.size(); c++ ){
        for( int d=0; d<D.size(); d++ ) {
            unordered_map<int, int>::iterator it = abSum.find(0 - C[c] - D[d]);
            if(it != abSum.end()) {
                count += it->second;
            }
        }
    }
    return count;
}

int main(){
    int a[]={1,2};
    int b[]={-2,-1};
    int c[]={-1, 2};
    int d[]={ 0, 2};
    vector<int> A(a, a+sizeof(a)/sizeof(a[0]));
    vector<int> B(b, b+sizeof(b)/sizeof(b[0]));
    vector<int> C(c, c+sizeof(c)/sizeof(c[0]));
    vector<int> D(d, d+sizeof(d)/sizeof(d[0]));
    cout<<"4 sum solution to zero : "<<fourSumCount(A,B,C,D)<<endl;

}
