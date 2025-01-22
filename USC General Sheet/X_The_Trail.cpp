#include <iostream>
#include <vector>
#include <string>
using namespace std;

void processGrid(int n, int m, string directions, vector<vector<int>> &grid)
{
    vector<vector<int>> result(n, vector<int>(m, 0));
    int x = 0, y = 0;

    // تطبيق التوجيهات لتحسين القيم في الشبكة
    result[x][y] = grid[x][y];
    for (char dir : directions)
    {
        if (dir == 'D')
        {
            x++;
        }
        else if (dir == 'R')
        {
            y++;
        }
        result[x][y] = grid[x][y];
    }

    // طباعة الشبكة
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        string directions;
        cin >> n >> m;
        cin >> directions;

        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> grid[i][j];
            }
        }

        processGrid(n, m, directions, grid);
    }

    return 0;
}
