#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n;
  int x;
  int t;
  cin >> n >> x >> t;
  int ans = 0;
  if (n <= x)
    ans = t;
  else if (n % x == 0)
    ans = (n / x) * t;
  else
    ans = (n / x + 1) * t;

  cout << ans << endl;
  return 0;
}
