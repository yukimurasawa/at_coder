#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int ans = 0;
  if(a > k) {
    ans = k;
  }
  else if( a + b > k ){
    ans = a;
  }
  else{
    ans = 2*a + b - k;
  }
  cout << ans << endl;
  return 0;
}
