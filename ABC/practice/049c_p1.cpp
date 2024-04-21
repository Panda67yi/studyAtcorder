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

  string divide[4] = {"dream", "dreamer", "erase", "eraser"};
  rep(i,4){reverse(divide[i].begin(), divide[i].end());}

  bool flag = true;
  int counta;
  reverse(S.begin(), S.end());
  
  while (!S.empty() && flag){
    counta = 0;
    rep(i,4){
      string tmp = S.substr(0,divide[i].length());
      if (tmp != divide[i]) { // 文字列が見つからなかった場合
        counta++;
      }else {
        S.erase(0, divide[i].length());
        continue;
      }
      if (counta == 4){
        flag = false;
        break;
      }
    }
  }
  
  if (flag){
    cout << "YES" << endl;
  }else {
    cout << "NO" << endl;
  }

  return 0;
} 