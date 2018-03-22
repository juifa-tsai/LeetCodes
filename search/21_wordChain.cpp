//// Word chain : find the word chain with order of alphabets
//// Tags : [Hash map] [string]
//// [Medium]  
//// Not in leetcode

#include <iostream>
#include <unordered_set>
using namespace std;

// 01. my code hash map, time O(n), space O(n)
bool canArrangeWords( int n, string* arr){
    int min = 26;
    unordered_set<int> alphanums;
    for( int i=0; i<n; i++ ){
        for( int j=0; j<arr[i].length(); j++ ){
            int num = arr[i][j] - 'a';
            alphanums.insert(num);
            if( num < min ) min = num;
        }
    }
    //cout<<min<<" "<<alphanums.size()<<endl;
    for( int i=min; i<min+alphanums.size(); i++ ){
        if( ! alphanums.count(i) ) return false;
    }
    return true;
}

int main(){
    const int n = 2;
    //string a[n] = {"abcd", "defg", "ghij", "jkl"};
    //string a[n] = {"ghij", "defg", "jkl", "abcd"};
    //string a[n] = {"ghj", "def", "jkl", "abcd"};
    //string a[n] = {"ghij", "def", "jkl"};
    string a[n] = {"kkk", "ll"};
    cout<<"Can be arranged : "<<canArrangeWords(n, a)<<endl;

}