#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  string S;
  cin >> S;
  bool flag = true;
  char tmp;
  vector<int> num;
  while (flag) {
    tmp = S[0];
    int count = std::count(S.begin(), S.end(), tmp);
    num.push_back(count);
    S.erase(std::remove(S.begin(), S.end(), tmp), S.end());
    if (S.size() == 0){
      flag = false;
    }
  }
  int sum = 0;
  string ans = "Yes";
  rep(i,101){
    rep(j,num.size()){
      if ( i == num[j]){
        sum += 1;
      }
    }
    if (sum == 2 || sum == 0){
      sum = 0;
    }else{
      ans = "No";
      break;
    }
  }  

  cout << ans << endl;
  return 0;
}