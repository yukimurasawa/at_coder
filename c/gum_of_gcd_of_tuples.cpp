#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int k;
  cin >> k;
  ll ans = 0;
  for (int a = 1; a <= k; a++)
  {
    for (int b = 1; b <= k; b++)
    {
      for (int c = 1; c <= k; c++)
      {
        ans += gcd(a, gcd(b, c));
      }
    }
  }
  cout << ans << endl;
  return 0;
}
