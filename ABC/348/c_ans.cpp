#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int n;
  cin >> n;
  map<int, int> minimum_taste; // 各色のおいしさの最小値
  rep(i,n){
    int a, c;
    cin >> a >> c;
    auto it = minimum_taste.find(c);
    if (it != minimum_taste.end()) {
      // すでに色cが存在している場合は最小値を更新
      minimum_taste[c] = min(minimum_taste[c], a);
    } else {
      // 新しく追加される色
      minimum_taste[c] = a;
    }
  }
    
  int ans = -1;
  // 存在する色をすべて走査する
  for (auto [c, val] : minimum_taste){
    ans = max(ans, val);
  }
  cout << ans << endl;
  return 0;
}