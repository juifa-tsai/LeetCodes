//// Game of life
//// Tags : [array]
//// [Medium]
#include <iostream>
#include <vector>
#include "../dataStructure/array.cpp"
using namespace std;

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
