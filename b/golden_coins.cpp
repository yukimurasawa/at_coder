#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int x;
  cin >> x;
  int sum = 0;
  sum += x/500 *1000;
  int a = x%500;
  sum += a/5 * 5;
  cout << sum << endl;

  return 0;
}
