#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ll x, k, d;
  cin >> x >> k >> d;
  x = abs(x);
  ll ans;
  if (x / d > k)
  {
    ans = x - d * k;
  }
  else
  {
    ll e = x / d;
    k -= e;
    x -= e * d;
    if (k % 2 == 1)
      x = abs(x - d);
    ans = x;
  }

  cout << ans << endl;
  return 0;
}
