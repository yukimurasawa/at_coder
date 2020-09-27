#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main()
{
  int n, m;
  cin >> n >> m;
  dsu d(n);

  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    d.merge(a, b);
  }

  int cnt = d.groups().size();
  int ans = cnt - 1;
  cout << ans << endl;

  return 0;
}
