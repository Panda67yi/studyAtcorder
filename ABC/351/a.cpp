#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int tmpA = 0;
  int tmpB = 0;
  int sumA = 0;
  int sumB = 0;
  vector<int> A(9);
  vector<int> B(8);
  rep(i,9){
    cin >> tmpA;
    sumA += tmpA;
  }
  rep(i,8){
    cin >> tmpB;
    sumB += tmpB;
  }

  int ans = sumA - sumB + 1; 

  cout << ans << endl;
  return 0;
}