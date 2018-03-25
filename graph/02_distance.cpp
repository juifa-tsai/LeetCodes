//// Distance : caculate the distances from capital to other city (tree structure case T[n_city], i.e. no cycle) 
//// T[i] = j, i city connect to j city, T[i] = i is capital
//// Tags : [DFS]
//// [Medium]

#include <iostream>
#include <vector>
#include <set>
#include "../dataStructure/array.cpp"
using namespace std;

// 02. my code O(n), space O(n) without using additional space
int countDist( vector<int> &T, int i, int capital){
    return i == capital ? 0 : countDist(T, T[i], capital) + 1;
}

vector<int> collectDist(vector<int> T) {
    int n_city = T.size(), capital = -1;
    vector<int> res(n_city-1, 0);
    for( int i=0; i<n_city; i++ ){ if( i == T[i] ) capital = i; } // find the capital, O(m)
    for( int i=0; i<n_city; i++ ){
        int distance = countDist(T, i, capital);
        if( distance > 0 ) res[distance-1]++;
    }
    return res;
}

int main(){
    /*
    Example 1.
    8-7   5
      |   | 
    4-2-0-9-3
      |   |
      6   1
    As 1 is capital, dist(1) = [9], dist(2) = [0,3,5], dist(3) = [2], dist(4) = [4,6,7], dist(5) = [8]; 
    */
    int T[]={9, 1, 0, 9, 2, 9, 2, 2, 7, 1 };
    vector<int> distances = collectDist( arrayToVector(T, sizeof(T)/sizeof(T[0])) );
    printVector(distances);

}

/*
// Original solution
#include <set>
int countDist( vector<set<int>> citymap, int i, int t ){
    if( citymap[i].count(t) ) return 1;
    for( set<int>::iterator it=citymap[i].begin(); it!=citymap[i].end(); it++ ){
        return countDist( citymap, *it, t ) + 1;
    }
    return 0;
}

vector<int> solution(vector<int> &T) {
    // write your code in C++14 (g++ 6.2.0)
    int n_city = T.size();
    int capital = -1;
    vector<set<int> > citymap(n_city);
    vector<int> res(n_city-1, 0);
    // find capital & get graph
    for( int i=0; i<n_city; i++ ){
        if( i == T[i] ) capital = i;
        else citymap[T[i]].insert(i);
    }
    // count path
    for( int i=0; i<n_city; i++ ){
        if( i == capital ) continue;
        int distance = countDist(citymap, capital, i);
        if( distance > 0 ) res[distance-1]++;
    }
    return res;
}
*/