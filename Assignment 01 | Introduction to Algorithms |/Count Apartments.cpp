#include <bits/stdc++.h>
using namespace std;

int row, col;
char graph[1005][1005];
bool visit[1005][1005];
vector<pair<int, int>> vct = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int srcI, int srcJ)
{
    return (srcI >= 0 && srcI < row && srcJ >= 0 && srcJ < col);
}

void DFS(int srcRow, int srcColumn)
{
    visit[srcRow][srcColumn] = true;
    for (int i = 0; i < 4; i++)
    {
        int ro = srcRow + vct[i].first;
        int co = srcColumn + vct[i].second;
        if (valid(ro, co) == true && visit[ro][co] == false && graph[ro][co] == '.')
        {
            DFS(ro, co);
        }
    }
}

int main()
{
    cin >> row >> col;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cin >> graph[r][c];
        }
    }

    memset(visit, false, sizeof(visit));
    int count = 0;

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (graph[r][c] == '.' && !visit[r][c])
            {
                count++;
                DFS(r, c);
            }
        }
    }

    cout << count << endl;

    return 0;
}