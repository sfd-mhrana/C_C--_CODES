// Can go
#include <bits/stdc++.h>
using namespace std;

int row, col, fl = 0;
char graph[1005][1005];

bool Visit[1005][1005];
int dist[1005][1005];
vector<pair<int, int>> paths = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

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
        if (graph[x][y] == 'B')
        {
            fl = 1;
            break;
        }
        for (int i = 0; i < 4; i++)
        {
            int ro = x + paths[i].first;
            int co = y + paths[i].second;
            if (isValid(ro, co) == true && Visit[ro][co] == false && (graph[ro][co] == '.' || graph[ro][co] == 'B'))
            {
                trevers.push({ro, co});
                Visit[ro][co] = true;
                dist[ro][co] = dist[x][y] + 1;
            }
        }
    }
}

int main()
{
    cin >> row >> col;
    int indexAi, indexAj;

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cin >> graph[r][c];
            if (graph[r][c] == 'A')
            {
                indexAi = r;
                indexAj = c;
            }
        }
    }

    memset(Visit, false, sizeof(Visit));
    memset(dist, -1, sizeof(dist));

    BfsGrid2D(indexAi, indexAj);

    if (fl)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
    return 0;
}