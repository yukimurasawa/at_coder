#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 1; i < a.size(); i++)
  {
    if (abs(a[i] - a[i - 1]) > 3)
  }

  return 0;
}
