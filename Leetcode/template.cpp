// template for GCD of 2 num

#include <bits/stdc++.h>
using namespace std; 
class Solution {
  public:
    int sol(int a, int b) {
      if (!b)
        return a; 
      return sol(b, a % b); 
    } 
    int gcd(int num1, int num2) {
      return sol(num1, num2); 
    }
};
int main() {
  int a, b; 
  cin >> a >> b; 
  Solution sol;
  int ans = sol.gcd(a, b); 
  cout << ans; 
}
