#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int n, m;
char grid[N][N];
bool visit[N][N];
int cunt;
int minArea = INT_MAX;
vector<pair<int, int>> cell = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool valid(int r, int c)
{
    if (r >= 0 && r < n && c >= 0 && c < m)
        return true;
    else
        return false;
}

void dfs(int r, int c)
{
    visit[r][c] = true;
    cunt++;
    for (int i = 0; i < 4; i++)
    {
        int r1 = r + cell[i].first;
        int c1 = c + cell[i].second;

        if (valid(r1, c1) && !visit[r1][c1] && grid[r1][c1] == '.')
        {
            dfs(r1, c1);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(visit, false, sizeof(visit));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visit[i][j] && grid[i][j] == '.')
            {
                cunt = 0;
                dfs(i, j);
                minArea = min(minArea, cunt);
            }
        }
    }
    if (minArea == INT_MAX)
        cout << "-1" << endl;
    else
        cout << minArea << endl;

    return 0;
}