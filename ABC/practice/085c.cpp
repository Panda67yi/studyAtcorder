#include <bits/stdc++.h>
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
  int count = 0;

  rep(i,N){
    cin >> a.at(i);
  }

  while (!a.empty()){
    auto max_itr = max_element(begin(a), end(a));
    int max_value = *max_itr;
    // 最大値がなくなるまで繰り返し削除
    auto itr = find(begin(a), end(a), max_value);
    while (itr != end(a)) {
      a.erase(itr);
      itr = find(begin(a), end(a), max_value);
    }
    count++;
  }
  
  cout << count << endl;
}