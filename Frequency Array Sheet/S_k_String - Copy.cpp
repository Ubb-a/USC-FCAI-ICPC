#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int x;
    cin >> x;
    string s;
    cin >> s;
    int freq[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }

    bool flag = true;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0 && freq[i] != x)
        {
            flag = false;
            break;
        }
    }

    if (!flag)
    {
        cout << "-1";
    }
    else
    {
        for (int j = 0; j < 26; j++)
        {
            for (int i = 0; i < 26; i++)
            {
            }
            for (int j = 0; j < x; j++)
            {
                cout << char(i + 'a');
            }
        }
    }
}

return 0;
}
