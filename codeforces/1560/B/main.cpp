#include <bits/stdc++.h>
using namespace std;

int main() {
#ifdef tajir
    freopen("input.txt","r", stdin);
#endif
    int T;
    cin >> T;

    while(T--) {
        int a,b,c;
        cin >> a >> b >> c;

        int total = abs(b-a) * 2;

        if(c > total || a > total || b > total) {
            cout << -1 << endl;
        } else {
            int d, candidate1, candidate2;

            candidate1 = c + (total/2);
            candidate2 = c - (total/2);

            if(candidate1 > total) {
                cout << candidate2 << endl;
            } else {
                cout << candidate1 << endl;
            }
        }
    }

}