//// Excel Sheet Column Title : make column title number to alphabet
//// 1->A .... 26->Z, 27->AA ...., 100->CV
//// Tags:  [string]
//// Level: [Easy]

#include <iostream>
#include <string>
using namespace std;
   
// 01 O(n) : n is the digit of number
string convertToTitle(int n) {
    return n == 0 ? "" : convertToTitle((n - 1) / 26) + (char) ((n - 1) % 26 + 'A');
}

int main(){
    cout<<convertToTitle(52)<<endl;
    cout<<(char) (  0 + 'A')<<endl;
    cout<<(char) ( 25 + 'A')<<endl;
}