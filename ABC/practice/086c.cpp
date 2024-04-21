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
  vector<int> t(N+1);
  vector<int> x(N+1);
  vector<int> y(N+1);

  t[0] = 0;
  x[0] = 0;
  y[0] = 0;

  bool can = true;

  rep(i,N){
    cin >> t[i+1] >> x[i+1] >> y[i+1];
  }
  rep(i,N){
    int dt = t[i+1]-t[i];
    int dist = abs(x[i+1]-x[i]) +  abs(y[i+1]-y[i]);
    if (dt < dist){
      can = false;
    }
    if (dist % 2 != dt % 2){
      can = false;
    }
  }
  if (can) cout << "Yes" << endl;
  else cout << "No" << endl;
  
  return 0;
}