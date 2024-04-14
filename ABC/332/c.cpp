#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int N,M;
  cin >> N;
  cin >> M;
  
  string S;
  cin >> S;
  
  
  //着用済み服
  int m = M;
  //最低限のロゴT
  int lt;
  int LT = 0;
  //end flag
  bool loop = true;

  while (loop) {
    m = M;
    lt = LT;
    rep(i,N){
      if(S[i] == '0'){
        m = M;
        lt = LT;
      }else if(S[i] == '1'){
        if (m != 0){
          m -= 1;
        }else{
          if (lt == 0){
            LT +=1;
            break;
          }else{
            lt -= 1;
          }
        }
      }else{
        if (lt == 0){
          LT +=1;
          break;
        }else{
          lt -= 1;
        }
      }
      if (i==N-1){
        loop = false;
      }
    }
  }
  
  cout << LT << endl;
  return 0;
}