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

  int firstPipe = S.find('|'); 
  int secondPipe = S.find('|', firstPipe + 1);
  S.erase(firstPipe, secondPipe - firstPipe + 1);

  cout << S << endl;
}