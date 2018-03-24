#include <iostream>
#include <vector>
#include "../dataStructure/array.cpp"
using namespace std;


// 01. my code DFS O(mxn), space O(1)
void DFS(vector<vector<int> >& grid, int i, int j){
    if( i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() ) return;
    //cout<<i<<" "<<j<<" "<<grid[i][j]<<" ";
    if( grid[i][j] == 0 ){ 
        //cout<<"on water"<<endl; 
        return;
    } 
    //cout<<" go next "<<endl;
    grid[i][j] = 0;
    DFS(grid, i-1, j);
    DFS(grid, i,   j+1);
    DFS(grid, i+1, j);
    DFS(grid, i,   j-1);
}
int numIslands(vector<vector<int> >& grid) {
    int count=0;
    for( int i=0; i<grid.size(); i++ ){
        for( int j=0; j<grid[0].size(); j++){
            if( grid[i][j] == 0 ) continue;
            DFS(grid, i, j);
            count++;
            //cout<<"Add counts at "<<i<<" "<<j<<" "<<grid[i][j]<<" "<<count<<endl;
        }
    }
    return count;
}

int main(){
    vector<vector<int> > board;
    vector<int> a1, a2, a3, a4, a5;
    /*
       a1.push_back(1); a1.push_back(1); a1.push_back(0); a1.push_back(0); a1.push_back(0);
       a2.push_back(1); a2.push_back(1); a2.push_back(0); a2.push_back(1); a2.push_back(0); 
       a3.push_back(0); a3.push_back(0); a3.push_back(1); a3.push_back(0); a3.push_back(0);
       a4.push_back(0); a4.push_back(0); a4.push_back(0); a4.push_back(1); a4.push_back(1);
       board.push_back(a1); board.push_back(a2); board.push_back(a3); board.push_back(a4);
       */
    a1.push_back(1); a1.push_back(1); a1.push_back(1);
    a2.push_back(0); a2.push_back(1); a2.push_back(0);
    a3.push_back(1); a3.push_back(1); a3.push_back(1);
    board.push_back(a1); board.push_back(a2); board.push_back(a3);

    print2DVector(board);
    int ans = numIslands(board);
    cout<<"num of island : "<<ans<<endl;
    print2DVector(board);

}
