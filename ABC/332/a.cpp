#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int N,S,K;
  cin >> N;
  cin >> S;
  cin >> K;
  vector<int> product(N);
  int sum = 0;
  int P;
  int Q;

  rep(i,N){
    cin >> P;
    cin >> Q;
    product[i] = P*Q;
  }
  sum = reduce(begin(product), end(product));

  if (sum < S){
    sum += K;
  }

  cout << sum << endl;
  return 0;
}