#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int length = S.size();
  int ans = 1;
  for(int i = 1; i < length; i++) {
    if(S.at(i) == '+') ans++;
    else if(S.at(i) == '-') ans--;
  }
  cout << ans << endl;
  return 0;
}