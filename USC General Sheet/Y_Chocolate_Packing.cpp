#include <bits/stdc++.h>


using namespace std;

int main() {
    int L, W, H; 
    int l, w, h; 

    cin >> L >> W >> H;

    cin >> l >> w >> h;

    int o1 = (L / l) * (W / w) * (H / h);
    int o2 = (L / l) * (W / h) * (H / w);
    int o3 = (L / w) * (W / l) * (H / h);
    int o4 = (L / w) * (W / h) * (H / l);
    int o5 = (L / h) * (W / l) * (H / w);
    int o6 = (L / h) * (W / w) * (H / l);

    int maxBoxes = max({o1, o2, o3, o4, o5, o6});

    cout << maxBoxes << endl;

    return 0;
}