#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n;
  cin >> n;
  set<string> st; //setの定義。vectorみたいにして定義できる
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    st.insert(s); //上で定義したsetに挿入する
  }
  cout << st.size() << endl; //setは重複を許さないので、要素数を取得するだけでよい

  return 0;
}
