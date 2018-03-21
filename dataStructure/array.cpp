// Array function 
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void printArray( T* a, int n ){
    cout<<"Array["<<n<<"]: [ ";
    for( int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"]"<<endl;
}

template<typename T>
vector<T> arrayToVector( T* a, int n ){
    vector<T> vec;
    for( int i=0; i<n; i++ ){
        vec.push_back(a[i]);
    }
    return vec;
}

template<typename T>
void printVector( vector<T> v ){
    int size = v.size();
    cout<<"Vector["<<size<<"]: [ ";
    for( int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<"]"<<endl;
}

template<typename T>
void print2DVector( vector<vector<T> > v ){
    int xsize = v.size();
    cout<<"V["<<xsize<<"] = ["<<endl;
    for( int i=0; i<xsize; i++){
        cout<<"[ ";
        for( int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
    cout<<"]"<<endl;
}

#endif
