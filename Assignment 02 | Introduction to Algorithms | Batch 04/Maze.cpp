#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
char grid[N][N];
bool visit[N][N];
int distnc[N][N];

int row, col;

vector<pair<int, int>> cells = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool isValid(int ci, int cj)
{
    return (ci >= 0 && ci < row && cj >= 0 && cj < col && !visit[ci][cj] && grid[ci][cj] != '#');
}

map<pair<int, int>, pair<int, int>> parent;
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;
    distnc[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + cells[i].first;
            int cj = b + cells[i].second;
            if (isValid(ci, cj))
            {
                q.push({ci, cj});
                visit[ci][cj] = true;
                distnc[ci][cj] = distnc[a][b] + 1;
                parent[{ci, cj}] = par;
            }
        }
    }
}
int main()
{
    cin >> row >> col;
    int si, sj, di, dj;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    memset(visit, false, sizeof(visit));
    bfs(si, sj);

    int ci = di, cj = dj;
    if (visit[di][dj])
    {
        while (ci != si || cj != sj)
        {
            grid[ci][cj] = 'X';
            pair<int, int> par = parent[{ci, cj}];
            ci = par.first;
            cj = par.second;
        }
        grid[si][sj] = 'R';
        grid[di][dj] = 'D';
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}