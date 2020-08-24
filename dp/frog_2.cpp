#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
using ll = long long;
template <class T>
inline bool chmax(T &a, T b)
{
  if (a < b)
  {
    a = b;
    return true;
  }
  return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
  if (a > b)
  {
    a = b;
    return true;
  }
  return false;
}
const long long INF = 1LL << 60;

const long long INF = 1LL << 60;

long long h[100010];

long long dp[100010];

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> h[i];

  for (int i = 0; i < 100010; i++)
    dp[i] = INF;

  dp[0] = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      chmin(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
    }
  }
  cout << dp[n - 1] << endl;

  return 0;
}
