#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
  ll n;
  cin >> n;
  int64_t total= 1;
  int64_t minus_nine=1;
  int64_t minus_eight=1;
  int64_t total_minus;

  for(int i = 0; i < n; i++) {
    total *= 10;
    minus_nine *=9;
    minus_eight *=8;
    total%(10*10*10*10*10*10*10*10*10+7);
    minus_nine%(10*10*10*10*10*10*10*10*10+7);
    minus_eight%(10*10*10*10*10*10*10*10*10+7);
  }

  total_minus = minus_nine + minus_nine - minus_eight;

  int64_t ans;
  ans = abs(total - total_minus%(10*10*10*10*10*10*10*10*10+7));

  cout << ans << endl;


  return 0;
}
