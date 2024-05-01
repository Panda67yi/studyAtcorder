#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  int tmp;
  int sum = 0;
  int ans;
  rep(i, N-1){
    cin >> tmp;
    sum += tmp;
  }
  
  if ( sum == 0 ){
    ans = sum;
  }else {
    ans = -sum;
  }

  cout << ans << endl;
  return 0;
}