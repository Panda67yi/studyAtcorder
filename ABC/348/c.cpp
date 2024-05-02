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
  vector<int> A(N);
  vector<int> C(N);
  vector<int> min_val;
  vector<int> color;
  vector<int> color_pos;
  vector<int>::iterator it;
  vector<int>::iterator it_c;

  rep(i,N){
    cin >> A[i] >> C[i];
  }
  rep(i,N){
    int tmp = A[i];
    it = std::find(color.begin(), color.end(), C[i]);
    if (it != color.end()) {
      int point = it - color.begin();
      if (tmp < min_val[color_pos[point]]){
        min_val[color_pos[point]] = tmp;
      }
    } else {
      min_val.push_back(tmp);
      color.push_back(C[i]);
      color_pos.push_back(min_val.size()-1);
    }
  }
  int ans = *max_element(begin(min_val), end(min_val));

  cout << ans << endl;
  return 0;
}