#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<int> l(n);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> l[i];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < n; k++)
      {
        if (i < j && j < k)
        {
          if (l[i] == l[j])
            continue;
          if (l[j] == l[k])
            continue;
          if (l[i] == l[k])
            continue;
          if ((ll)l[i] + l[j] + l[k] <= max({l[i], l[j], l[k]}) * 2)
            continue;
          ans++;
        }
      }
    }
  }
  cout << ans << endl;

  return 0;
}
