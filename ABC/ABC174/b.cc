#include<bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
  int n;
  int d;
  cin >> n >> d;
  
  int i = 0;
  long int x;
  long int y;
  long double point;
  long int ans = 0;
  while(i < n){
  	cin >> x >> y;
    point = sqrt((x*x)+(y*y));
    if(point <= d){
      ans ++;
    }
    i++;
  }
  cout << ans << endl;
  return 0;
}