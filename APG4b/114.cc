#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int small = min(min(A,B), C);
  int big = max(max(A,B), C);
  cout << big - small << endl;
  return 0;
}