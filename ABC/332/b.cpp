#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int K, G, M;
  cin >> K >> G >> M;
  int g = 0;
  int m = 0;

  rep(i,K){
    if (g == G){
      g = 0;
    }else if(m == 0){
      m = M;
    }else {
      if (m >= (G-g)){
        m -= G-g;
        g = G;
      }else {
        g += m;
        m = 0;
      }
    }
  }

  cout << g << " " << m << endl;
  return 0;
}