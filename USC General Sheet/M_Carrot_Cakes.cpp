#include <bits/stdc++.h>
#include <cmath>  // إضافة مكتبة الرياضيات لاستخدام دالة ceil
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, k, d;
    cin >> n >> t >> k >> d;

    // استخدام دالة ceil بدلاً من الحساب (n + k - 1) / k
    int b = ceil((double)n / k) * t;

    if (d + t < b) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }

    return 0;
}
