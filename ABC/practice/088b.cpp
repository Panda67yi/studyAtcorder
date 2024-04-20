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
  cin >> N ;
  vector<int> a(N);
  int AliceSum = 0;
  int BobSum = 0;

  rep(i,N){
    cin >> a.at(i);
  }
  bool alice_turn = true;
  while (true) {
    auto max_itr = max_element(begin(a), end(a));
    int max_value = *max_itr;
    if (max_value == -1) break; // 全ての要素が-1になった場合、ループを抜ける
      if (alice_turn) {
        AliceSum += max_value;
      } else {
        BobSum += max_value;
      }
      *max_itr = -1;
      alice_turn = !alice_turn;
  }

  cout << AliceSum-BobSum << endl;
}