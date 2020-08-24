#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
  ll a;
  double b;
  cin >> a >> b;
  ll ib = b*100+0.5;
  a *= ib;
  a /= 100;
  printf("%lld\n", a);

  return 0;
}
