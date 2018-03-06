//// Fizz buzz
//// Tags:  [Array]
//// Level: [Easy]

#include <iostream>
#include <vector>
using namespace std;


vector<string> fizzBuzz(int n) {
    vector<string> res;
    for(int i=1; i<=n; i++){
        if( i%15 == 0 ) res.push_back("FizzBuzz");
        else if( i%3 == 0) res.push_back("Fizz");
        else if( i%5 == 0) res.push_back("Buzz");
        else res.push_back(std::to_string(i));
    }
    return res;
}

int main(){

    int n = 15;
    vector<string> output = fizzBuzz(n);
    cout<<"n = "<<n<<endl;
    for( int i=0; i<n; i++ ){
        cout<<output[i]<<",";
    }
    cout<<endl;
}
