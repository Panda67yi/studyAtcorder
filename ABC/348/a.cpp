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
  rep1(i,N){
    if (i % 3 == 0){
      cout << "x" ;
    }else{
      cout << "o" ;
    }
  }

  return 0;
}