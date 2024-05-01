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
  vector<string> A(N);
  vector<string> B(N);
  int ans1 = -1;
  int ans2 = -1;
  rep(i,N){
    cin >> A[i];
  }
  rep(i,N){
    cin >> B[i];
  }

  rep(i,N){
    rep(j,N){
      if (A[i][j] != B[i][j]){
        ans1 =i+1;
        ans2 = j+1;
      }
    }
    if(ans1 != -1 && ans2 != -1)
      break;
  }

  cout << ans1 << " " << ans2 << endl;

  return 0;
}