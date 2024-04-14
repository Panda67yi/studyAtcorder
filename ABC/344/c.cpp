#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int N,M,L,Q;
  // receive input
  cin >> N;
  vector<int> A(N);
  rep(i,N) {
    cin >> A.at(i);
  }
  cin >> M;
  vector<int> B(M);
  rep(i,M) {
    cin >> B.at(i);
  }
  cin >> L;
  vector<int> C(L);
  rep(i,L) {
    cin >> C.at(i);
  }
  cin >> Q;
  vector<int> X(Q);
  rep(i,Q) {
    cin >> X.at(i);
  }
  vector<string> ans(Q);
  ll sum;
  unordered_set<int> S; 
  rep(i,N){
    rep(j,M){
      rep(k,L){
        sum = A[i]+B[j]+C[k];
        S.insert(sum);
      }
    }
  }
  rep(i,Q){
    if (S.count(X[i])){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }

  return 0;
}