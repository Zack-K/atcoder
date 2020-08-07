#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main(){
  int n;
  cin >> n;
  //マップで入力文字をキー、そのカウントをバリューに設定することでカウントを実現
  map<string,int> cnt;
  rep(i, n) {
  	string s;
    cin >> s;
    cnt[s]++;
  }
  //foreach的に配列を回しながら、文字を出力している
  for(string s : {"AC", "WA", "TLE", "RE"}) {
    cout << s << " x " << cnt[s] << endl;
  }
  return 0;
}