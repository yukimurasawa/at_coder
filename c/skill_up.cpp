#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int INF = 1001001001;
int a[12][12];

int main(){
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> c(n);
  for(int i = 0; i < n; i++){
    cin >> c[i];
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  int ans = INF;
  for(int s = 0; s < s<<1; s++){
    int cost = 0;
    vector<int> d(m);
    for(int i = 0; i < n; i++){
      if(s>>i&1){
        cost += c[i];
        for(int j = 0; j < m; j++){
          d[j] += a[i][j];
        }
      }
    }
    bool ok = true;
    for(int j = 0; j < m; j++){
      if(d[j] < x) ok = false;
    }
    if(ok) ans = min(ans, cost);
  }
  if(ans == INF) cout << -1 << endl;
  else cout << ans << endl;

  return 0;
}
