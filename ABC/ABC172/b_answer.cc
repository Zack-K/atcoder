#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int diff = 0;
  int size = s.size();
  rep(i, size) {
  	if(s.at(i) != t.at(i)) diff++; 
  }
  cout << diff << endl;
  return 0;
}