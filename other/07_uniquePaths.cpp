//// Unique Paths : find the unique paths from top-right to bottom-left with only right and down move.
//// Tags : [array] [Dynamic programming]
//// [Medium]

#include <iostream>
#include <vector>
using namespace std;

// 01. time O(n^2), space (m*n)
int uniquePaths(int m, int n) {
    vector<vector<int> > path(m, vector<int> (n, 1));
    for (int i = 1; i < m; i++)
        for (int j = 1; j < n; j++)
            path[i][j] = path[i - 1][j] + path[i][j - 1];
    return path[m - 1][n - 1];
}

int main(){
    int m=5;
    int n=10;
    cout<<"Unique paths at "<<m<<"x"<<n<<" has : "<<uniquePaths(m,n)<<endl;

}
