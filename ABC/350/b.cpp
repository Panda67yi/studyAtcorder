#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  int Q;
  cin >> N;
  cin >> Q;
  vector<int> T(Q);
  vector<int> status(N+1, 1);
  int counta = 0;
  rep(i,Q){
    cin >> T.at(i);
  }
  rep(i,Q){
    if ( status[T[i]] == 1 ){
      status[T[i]] = 0;
    }else {
      status[T[i]] = 1;
    }
  }
  for(int num : status){
    if (num == 1) {
      counta++;
    }
  }

  cout << counta-1 << endl;
  return 0;
}