#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main() {
  int k;
  cin >> k;
  int x = 7%k;
  set<int> s;
  int i = 1;
  while(s.count(x)) {
    if(x == 0){
      cout << i << endl;
      return 0;
    }
    s.insert(x)
    x = (x*10+7)%k;
    i++;
  }
  cout << -1 << endl;
  return 0;
}
