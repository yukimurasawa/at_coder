#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  s[k - 1] = s[k - 1] + ('a' - 'A');

  cout << s << endl;

  return 0;
}
