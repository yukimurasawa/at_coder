#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int life_a = a;
  int life_b = c;
  for (int i = 0; i < 100; i++)
  {
    life_a -= d;
    life_b -= b;
    if (life_b <= 0 & life_a <= 0)
    {
      cout << "Yes" << endl;
      break;
    }
    else if (life_b <= 0 & life_a >= 0)
    {
      cout << "Yes" << endl;
      break;
    }
    else if (life_b >= 0 & life_a <= 0)
    {
      cout << "No" << endl;
      break;
    }
  }

  return 0;
}
