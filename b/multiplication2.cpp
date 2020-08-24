#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  int mult;
  for(int i = n + 1; i > 0; i--){
    if(i == 0){
      return;
    }
  }

  return 0;
}

// 問題を分析する
// 掛け算の時は0が含まれる場合は必ず0になる
// 
