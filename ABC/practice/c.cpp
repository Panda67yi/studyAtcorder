#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int A;
  int B;
  int C;
  int X;
  cin >> A >> B >> C >> X;
  ll sum;
  int counta = 0;

  unordered_set<int> S; 
  rep(i,A+1){
    rep(j,B+1){
      rep(k,C+1){
        sum = 500*i + 100*j + 50*k;
        if (sum == X){
          counta++;
        }
      }
    }
  }
    
  cout << counta << endl;
}