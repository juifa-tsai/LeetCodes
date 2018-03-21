//// Rotate image : nxn matrix is ratated 90 clockwise
//// Tags : [array]
//// [Medium]
#include <iostream>
#include <vector>
#include "../dataStructure/array.cpp"
using namespace std;
/*
// 01. my code O(n^2), space O(n^2), (Brute solution), copy matrix....
void rotate(vector<vector<int> >& matrix) {
    int n = matrix.size();
    int rotated[n][n];
    for( int i=0; i<n; i++){
        for( int j=0; j<n; j++){
            rotated[j][n-i-1] = matrix[i][j];
        }
    }
    for( int i=0; i<n; i++){
        for( int j=0; j<n; j++){
            matrix[i][j] = rotated[i][j];
        }
    }

}*/
/*
// 02. O(n^2), space O(1) : (ring by ring) rotate from outside to inside, from cornor to cornor
// https://leetcode.com/problems/rotate-image/discuss/19002/4ms-few-lines-C++-code-Rotate-Image-90-degree-for-O(1)-space
void rotate(vector<vector<int> >& matrix) {
    int n = matrix.size();
    int a = 0;
    int b = n-1;
    while(a<b){
        for(int i=0;i<(b-a);++i){
            swap(matrix[a][a+i], matrix[a+i][b]);
            swap(matrix[a][a+i], matrix[b][b-i]);
            swap(matrix[a][a+i], matrix[b-i][a]);
        }
        ++a;
        --b;
    }
} */

// 03. O(n^2), space O(1) : transpose matrix, then reverse the rows.
// https://leetcode.com/problems/rotate-image/discuss/19123/6-lines-of-code-and-with-O(1)-space-in-c++
void rotate(vector<vector<int> >& matrix) {
    int n = matrix.size();

    for(int i=0; i<n; i++)
        for(int j=0; j<i; j++)
            swap(matrix[i][j], matrix[j][i]);

    for(int i=0; i<n; i++)
        reverse(matrix[i].begin(), matrix[i].end());
}

int main(){

    vector<vector<int> > matrix;
    matrix.push_back(vector<int>(5, 1));
    matrix.push_back(vector<int>(5, 2));
    matrix.push_back(vector<int>(5, 0));
    matrix.push_back(vector<int>(5, 3));
    matrix.push_back(vector<int>(5, 4));
    print2DVector(matrix);
    rotate(matrix);
    print2DVector(matrix);

}
