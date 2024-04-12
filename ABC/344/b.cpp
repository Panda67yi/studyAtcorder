#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  
  vector<int> numbers;
  int num;

  while (cin >> num) {
    numbers.push_back(num);
    if (num == 0) break; 
  }

  for (int i = numbers.size() -1; i >= 0; --i){
    cout << numbers[i] << endl;
  }

}