#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int y = 0;
        int z = 0;
        
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            
            if (num == 0) {
                z++;
                y = max(y, z);
            } else {
                z = 0;
            }
        }
        
        cout << y << endl;
    }
    
    return 0;
}