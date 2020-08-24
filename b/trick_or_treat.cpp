#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
  int n, k;
  cin >> n >> k;
  vector<int> d(n);
  for(int i = 0; i < k; i++){
    int m;
    cin >> m;
    for(int j = 0; j < m; j++){
      int a;
      cin >> a;
      d[a-1] = 1;
    }
  }

  int ans = 0;
  for(int i = 0; i < n; i++){
    if(d[i] == 0) ans++;
  }

  cout << ans << endl;
  return 0;
}
