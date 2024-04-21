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
  vector<int> A(N+1);
  vector<int> B(N+1);
  vector<int> change;

  rep1(i,N){
    cin >> A.at(i);
    B[A[i]] = i;
  }
  rep1(i,N){
    if (i == A[i]){
      continue;
    }else {
      if (A[B[i]]!=A[i] && A[B[i]]<A[i]){
        change.push_back(A[B[i]]);
        change.push_back(B[i]);
        int tmp = A[i];
        A[i] = A[B[i]];
        A[B[i]] = tmp;
        B[tmp] = B[i];
      }
    }
  }

   cout << change.size()/2 << endl;
   for (int i = 0; i < int(change.size()); i = i+2){
      cout << change[i] << " " << change[i+1] << endl;
   }

  return 0;
}