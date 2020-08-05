#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  string first;
  string second;
  cin >> first >> second;
  int diff = 0;
  int size = first.size();
  rep(i, size) {
  	if(first.at(i) != second.at(i)) diff++; 
  }
  cout << diff << endl;
  return 0;
}