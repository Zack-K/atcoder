#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  ll d;
  cin >> n >> d;
  int ans = 0;
  rep(i, n) {
    ll x, y;
    cin >> x >> y;
	// x*x + y*y <= y*y と整数のまま計算するのがコツ
    if(x*x + y*y <= d*d) ans++;
  }
  cout << ans << endl;
  return 0;
}