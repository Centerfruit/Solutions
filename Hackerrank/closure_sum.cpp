#include <bits/stdc++.h>
using namespace std; 
int main() {
    int num; 
    cin >> num; 
    int len = to_string(num).length();  // trunc(log10(num)) + 1
    int arr[len];
    for (int i = len - 1; i >= 0; i--) {
        arr[i] = num % 10;
        num /= 10;
    }
    int sum = 0; 
    for (int i = 0; i < len / 2; i++)
        sum += arr[i] * 10 + arr[len - i - 1]; 
    if (len & 1)
        sum += arr[len / 2];
   cout << sum; 
}
