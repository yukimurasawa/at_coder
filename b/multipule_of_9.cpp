#include <bits/stdc++.h>
using namespace std;
int main()
{

  int x = 0;
  // string型で値を受け取る
  string s;
  cin >> s;

  for (int i = 0; i < s.length(); ++i) //stringの文字数の数だけループを回す。
  {
    x += (s[i] - '0'); // ASCIIコードであるため、'0'を引くことで正しい数値を取得できる
  }
  if (x % 9 == 0) // xが9の倍数の場合はYes
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl; // xが9の倍数でない場合はNo
  }

  return 0;
}
