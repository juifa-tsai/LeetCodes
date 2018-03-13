//// Reverse string
//// Tags:  [string] [two pointers]
//// Level: [Easy]

#include <iostream>
#include <string>
using namespace std;

// 01. my code O(n), two pointers approch
string reverseString(string s) {
    string res(s);
    int l=0, r=s.size()-1;
    while( l<r ){
        swap(res[l++], res[r--]);
    }
    return res;
}

int main(){
    string s = "hello";
    cout<<reverseString(s)<<endl;
}
