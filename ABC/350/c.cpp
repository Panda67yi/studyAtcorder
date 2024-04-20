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
  vector<int> A(N+1);
  vector<int> B(N+1);

  rep1(i,N){
    cin >> A.at(i);
    B[A[i]] = i;
  }
  rep1(i,N){
    cout << B[i] << endl;
  }

  return 0;
}