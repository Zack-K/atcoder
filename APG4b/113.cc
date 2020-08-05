#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> points(n);
  int total = 0;
  for(int i =0; i < n; i++) {
    cin >> points.at(i);
    total += points.at(i);
  }
  int avg = total / n;
  for(int i = 0; i < n; i++) {
    if(avg - points.at(i) < 0) {
      cout << (avg - points.at(i)) * (-1) << endl;
    } else {
      cout << avg - points.at(i) << endl;
    }
  }
  return 0;
}