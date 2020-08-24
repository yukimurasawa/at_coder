#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  long long ans = 0; // 答えが大きくなることが予想されるので、long longで持っておく
  int MaxNum = 0;
  for (int i = 0; i < N; i++)
  {
    //MaxNumを使い回すことで計算を抑える。この処理の仕方はroopで最大値(最小値)を保持する際によく使用するので覚えておく
    MaxNum = max(MaxNum, A[i]);
    int Bi = MaxNum;  // i番目より前で、最も大きい値を取得する。
    ans += Bi - A[i]; // BiとA[i]の差分分、台を追加すればよいので、この差をansに追加する
  }

  cout << ans << endl;
}
