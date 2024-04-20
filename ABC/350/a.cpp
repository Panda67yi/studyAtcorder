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

  int num = stoi(S.substr(3, 3));
  if (1<=num && num<350 && num != 316){
    cout << "Yes" << endl;
  }else  {
    cout << "No" << endl;
  }

  return 0;
}