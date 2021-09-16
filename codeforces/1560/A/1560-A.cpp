#include <bits/stdc++.h>
using namespace std;

bool isValid(int n) {
  return ( n%3 != 0  && n%10 != 3);
}

void init(vector < int > &v) {
  for(int i = 1; v.size() < 1000; ++i) {
    if(isValid(i)) {
      v.push_back(i);
    }
  }
}

int main() {
#ifdef tajir
    freopen("input.txt", "r", stdin);
#endif

    vector < int > liked_sequence;
    init(liked_sequence);

    int T;
    cin >> T;

    while(T--) {
      int k;
      cin >> k;
      cout << liked_sequence[k] << endl;
    }

    return 0;
}