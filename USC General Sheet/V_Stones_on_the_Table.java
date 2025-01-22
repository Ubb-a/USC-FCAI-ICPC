#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    
    // Read input
    cin >> n;
    cin >> s;
    
    // Count stones to remove
    int stones_to_remove = 0;
    
    // Check each pair of adjacent stones
    for (int i = 1; i < n; i++) {
        // If current stone is same color as previous stone
        if (s[i] == s[i-1]) {
            stones_to_remove++;
        }
    }
    
    // Print result
    cout << stones_to_remove << endl;
    
    return 0;
}