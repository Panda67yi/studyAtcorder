#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  string S,T;
  cin >> S;
  cin >> T;
  string ans = "No";
  size_t findPos; 

  transform(T.begin(), T.end(), T.begin(), ::tolower);
  if (T[2] == 'x'){
    findPos = S.find_first_of(T[0]);
    if (findPos == std::string::npos) {
    }else {
      S.erase(S.begin(), S.begin() + findPos + 1);
      findPos = S.find_first_of(T[1]);
      if (findPos == std::string::npos) {
      }else {
        ans = "Yes";
        // S.erase(S.begin(), S.begin() + findPos + 1);
        // if (S.size() != 0){
        //   ans = "Yes";
        // }
      }
    }
  }else {
    findPos = S.find_first_of(T[0]);
    if (findPos == std::string::npos) {
    }else {
      S.erase(S.begin(), S.begin() + findPos + 1);
      findPos = S.find_first_of(T[1]);
      if (findPos == std::string::npos) {
      }else {
        S.erase(S.begin(), S.begin() + findPos + 1);
        findPos = S.find_first_of(T[2]);
        if (findPos == std::string::npos) {
        }else {
          ans = "Yes";
        }
      }
    }
  }


  cout << ans << endl;
  return 0;
}