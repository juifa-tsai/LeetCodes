//// Excel Sheet Column Title : make column title alphabet to number
//// 1->A .... 26->Z, 27->AA ...., 100->CV
//// Tags:  [string]
//// Level: [Easy]

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
   
// 01 O(n) : n is the digit of number
    int titleToNumber(string s) {
        int result = 0;
        for (int i = 0; i < s.size(); i++){
            result = result * 26 + (s.at(i) - 'A' + 1);
            //cout<<(s.at(i) - 'A' + 1)<<" "<<result<<endl;
        }
    return result;
    }

int main(){
    cout<<titleToNumber("AAA")<<endl;
    cout<<(char) ( 25 + 'A')<<endl;
    cout<<( string("A")[0] - 'A' + 1)<<endl;
}