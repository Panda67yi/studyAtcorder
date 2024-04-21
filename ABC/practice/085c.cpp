#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  int Y;
  cin >> N;
  cin >> Y;
  unordered_set<int> sum;
  int tmpsum;
  int a = -1, b = -1, c = -1;

  rep(i,N+1){
    rep(j,N+1-i){
      tmpsum = 10000*i+5000*j+1000*(N-i-j);
      sum.insert(tmpsum);
      if(tmpsum == Y) { 
        a = i;
        b = j;
        c = N-i-j;
      }
    }
  }
  if (sum.count(Y)){
    cout << a << " " << b << " " << c << endl;
  }else{
    cout << "-1 -1 -1" << endl;
  }
  
}