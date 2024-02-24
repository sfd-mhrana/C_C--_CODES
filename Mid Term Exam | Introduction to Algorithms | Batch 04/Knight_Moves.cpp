// Can go
#include <bits/stdc++.h>
using namespace std;

int row, col, fl = 0;
char graph[1005][1005];

bool Visit[1005][1005];
int dist[1005][1005];
vector<pair<int, int>> paths = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {-2, 1}, {2, -1}, {-2, -1}};

bool isValid(int srcI, int srcJ)
{
    if (srcI < 0 || srcI >= row || srcJ < 0 || srcJ >= col)
        return false;
    else
        return true;
}

void BfsGrid2D(int srcR, int srcC)
{
    queue<pair<int, int>> trevers;
    trevers.push({srcR, srcC});
    Visit[srcR][srcC] = true;
    dist[srcR][srcC] = 0;

    while (!trevers.empty())
    {
        pair<int, int> parnt = trevers.front();
        int x = parnt.first, y = parnt.second;
        trevers.pop();

        for (int i = 0; i < 8; i++)
        {
            int ro = x + paths[i].first;
            int co = y + paths[i].second;
            if (isValid(ro, co) == true && Visit[ro][co] == false)
            {
                trevers.push({ro, co});
                Visit[ro][co] = true;
                dist[ro][co] = dist[x][y] + 1;
                fl = 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> row >> col;

        memset(Visit, false, sizeof(Visit));
        memset(dist, -1, sizeof(dist));
        int s1, s2, q1, q2;
        cin >> s1 >> s2 >> q1 >> q2;

        BfsGrid2D(s1, s2);
        cout << dist[q1][q2] << endl;
    }
    if (!fl)
    {
        cout << -1;
    }
    return 0;
}