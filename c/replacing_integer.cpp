#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, k;
  cin >> n >> k;
  ll a = n%k;
  ll ans = min(a, k-a);
  cout << ans << endl;

  return 0;
}
