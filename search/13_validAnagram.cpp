//// Valid Anagram  
//// Tags:  [String] [Hash table]
//// Level: [Easy]

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

/*
// 01. my code O(n) : Hash map 
bool isAnagram(string s, string t) {
    if( s.size() != t.size() ) return false;
    unordered_map<char, int> smap, tmap;
    for( int i=0; i<s.size(); i++){
        smap[s[i]]++;
        tmap[t[i]]++;
    }
    for( unordered_map<char, int>::iterator ss=smap.begin(); ss!=smap.end(); ss++){
        if( tmap[ss->first] != ss->second ) return false;
    }
    return true;
}
*/
// 02. O(nlog n) Sorting
//https://leetcode.com/articles/valid-anagram/

// 03. O(n) : Hash map, fewer space used than mine 
bool isAnagram(string s, string t) {
    if( s.size() != t.size() ) return false;
    unordered_map<char, int> count;
    for( int i=0; i<s.size(); i++){
        count[s[i]]++;
        count[t[i]]--;
    }
    for( unordered_map<char, int>::iterator c=count.begin(); c!=count.end(); c++){
        if( c->second != 0 ) return false;
    }
    return true;
}

int main(){
    string s="anagram";
    string t="nagaram";
    cout<<s<<" and "<<t<<" are the anagram : "<<isAnagram(s,t)<<endl;

}
