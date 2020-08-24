#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<int> ans(n);
  for (int i = 0; i < n - 1; i++)
  {
    int a;
    cin >> a;
    ans[a - 1]++;
  }
  for (int x : ans)
  {
    cout << x << endl;
  }

  return 0;
}
