//// Game of life
//// Tags : [array]
//// [Medium]
#include <iostream>
#include <vector>
#include "../dataStructure/array.cpp"
using namespace std;

/*
// 01. my code O(mn), space O(mn)
void gameOfLife(vector<vector<int> >& board) {
    vector<vector<int> > copy = board;

    for( int i=0; i<copy.size(); i++ ){
        for( int j=0; j<copy[i].size(); j++ ){
            int sum = -copy[i][j];
            for( int x = (i-1)<0 ? 0 : i-1; x<=i+1 && x<copy.size(); x++){
                for( int y = (j-1)<0 ? 0 : j-1; y<=j+1 && y<copy[i].size(); y++){
                    sum += copy[x][y];
                }
            }
            if( board[i][j] ){
                if( sum < 2 || sum > 3 ) board[i][j] = 0;
            }else{
                if( sum == 3 ) board[i][j] = 1;
            }
        }
    }
    return;
}
*/

// 02. time O(mn), space O(1)
void gameOfLife(vector<vector<int> >& board) {
    int m = board.size(), n = m ? board[0].size() : 0;
    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j) {
            int count = 0;
            for (int x=max(i-1, 0); x<min(i+2, m); ++x)
                for (int y=max(j-1, 0); y<min(j+2, n); ++y)
                    count += board[x][y] & 1;
            if (count == 3 || count - board[i][j] == 3)
                board[i][j] |= 2;
        }
    }
    for (int i=0; i<m; ++i)
        for (int j=0; j<n; ++j)
            board[i][j] >>= 1;
}

int main(){
    vector<vector<int> > board;
    board.push_back(vector<int>(5, 1));
    board.push_back(vector<int>(5, 1));
    board.push_back(vector<int>(5, 0));
    board.push_back(vector<int>(5, 0));
    board.push_back(vector<int>(5, 1));
    print2DVector(board);
    gameOfLife(board);
    print2DVector(board);
    gameOfLife(board);
    print2DVector(board);

}
