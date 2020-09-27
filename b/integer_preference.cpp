#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  string ans;

  if (b < c || d < a)
    ans = "No";
  else
    ans = "Yes";

  cout << ans << endl;

  return 0;
}
