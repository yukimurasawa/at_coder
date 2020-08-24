#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  int sum;
  int ans;
  for (int i = 0; i < m; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < m; i++)
  {
    sum += a[i];
  }

  if (sum > n)
    cout << -1 << endl;
  else
    cout << n - sum << endl;

  return 0;
}
