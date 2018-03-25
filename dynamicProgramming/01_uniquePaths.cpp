//// Unique Paths : find the unique paths from top-right to bottom-left with only right and down move.
//// Tags : [array] [Dynamic programming]
//// [Medium]

#include <iostream>
#include <vector>
using namespace std;

// 01. time O(n^2), space O(m*n) : any box is from either top or left, p[i][j] = path[i - 1][j] + path[i][j - 1]
int uniquePaths(int m, int n) {
    vector<vector<int> > path(m, vector<int> (n, 1));
    for (int i = 1; i < m; i++) 
        for (int j = 1; j < n; j++) 
        // row 0 and column 0 only have 1 path
            path[i][j] = path[i - 1][j] + path[i][j - 1];
    return path[m - 1][n - 1];
}

/*
// 02 time O(n^2), space O(1) 
int uniquePaths(int m, int n) {
    if (m > n) return uniquePaths(n, m);
    vector<int> cur(m, 1);
    for (int j = 1; j < n; j++)
        for (int i = 1; i < m; i++)
            cur[i] += cur[i - 1]; 
    return cur[m - 1];
}
*/
int main(){
    int m=5;
    int n=10;
    cout<<"Unique paths at "<<m<<"x"<<n<<" has : "<<uniquePaths(m,n)<<endl;

}
