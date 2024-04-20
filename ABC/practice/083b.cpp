#include <bits/stdc++.h>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  int A;
  int B;
  int sum=0;
  int SUM=0;
  string num;
  cin >> N >> A >> B;

  rep1(i,N){
    
    sum = 0;
    num = to_string(i);
    rep(j,num.length()){
      sum += int(num[j]-'0');
    }
    if (A <= sum && sum <= B){
      SUM += i;
    }
  }
  cout << SUM << endl;
}