#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ll x;
  cin >> x;
  ll sum = 100;
  ll count = 0;
  while (sum < x)
  {
    sum += sum / 100;
    count++;
  }
  cout << count << endl;

  return 0;
}
