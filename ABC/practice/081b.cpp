#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  
  vector<int> tmpA;
  int sum;
  int counta = -1;
  cin >> N;
  bool flag = true;
  vector<int> A(N);
  rep(i,N){
    cin >> A[i];
  }
  while(flag){
    sum = 0;  
    rep(i,N){
      sum += A[i]%2;
      A[i] /= 2;
      if (sum > 0){
        flag = false;
        break;
      } 
    }
    counta += 1;

  }
  cout << counta << endl;
}