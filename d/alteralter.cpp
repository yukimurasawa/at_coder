#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main() {
  int n;
  string s;
  cin >> n >> s;
  int a = 0, b = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'R') a--;
  }
  int ans = max(a, b);
  for(int i = 0; i < n; i++){
    if(s[i] == 'R'){
      a--;
    }else{
      b++;
    }
    int now = max(a,b);
    ans = min(ans. now);
  }
  cout << ans << endl;

  return 0;
}
