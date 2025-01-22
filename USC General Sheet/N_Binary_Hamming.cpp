#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    // freopen("hamming.in", "r", stdin);


    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string x; cin >> x;
        string y; cin >> y;
        string z=x+y;
        int c=0;
        int v=0;
        for (int i = 0; i < z.size(); i++) {
            if(z[i]=='0') {
                c++;
            }
            if(z[i]=='1') {
                v++;
            }
        }
        if(n==1 && v==1 || c==1) {
            cout<< 1<<endl;
        }
        else{
            cout<< min(v,c) << "\n";
        }
    }




    return 0;
}