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
  vector<int> x(N);
  vector<int> y(N);
  rep(i,N){
    cin >> x[i] >> y[i];
  }
  float max;
  int maxNum;
  rep(i,N){
    max = 0;
    maxNum = 0;
    rep(j,N){
      float dis = sqrt(pow(x[i]-x[j],2) + pow(y[i]-y[j],2));
      if (max < dis){
        maxNum = j + 1;
        max = dis;
      }
    }
    cout << maxNum << endl;
  }
  return 0;
}