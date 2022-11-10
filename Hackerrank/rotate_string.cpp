#include <iostream>
using namespace std; 

int main() {
    auto rotate = [](string str, int n) {
      string a, b; 
      a = str.substr(0, n); 
      b = str.substr(n, str.length()); 
      b += a; 
      return b; 
    };
    string given, rfactor; 
    getline(cin, given);
    cin >> rfactor; 
    int mid = 0; 
    while (given[mid] != ' ') {
        mid++; 
    }
    string a = given.substr(0, mid), b = given.substr(mid + 1, given.length());
    if (rfactor[0] == 'L')
        a = rotate(a, rfactor[1] - '0');
    else 
        b = rotate(b, rfactor[1] - '0'); 
    a +=  " " + b;
    cout << a; 
}

/*
input ->
hacker rank
L2

output->
ckerha rank

*/
