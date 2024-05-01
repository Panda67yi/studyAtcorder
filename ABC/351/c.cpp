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
  vector<int> A(N);
  int tmp;
  vector<int> X;
  bool flag = true;
  rep(i,N){
    cin >> A[i];
  }

  rep(i,N){
    flag = true;
    X.push_back(A[i]);
    while (flag){
      if (X.size()==1){
        break;
      }
      if (X[X.size() - 1] == X[X.size() - 2]){
        tmp = X[X.size() - 1] + 1;
        X.pop_back();
        X.pop_back();
        X.push_back(tmp);
      }else {
        flag = false;
      }
    }
  }

  cout << X.size() << endl;
  return 0;
}