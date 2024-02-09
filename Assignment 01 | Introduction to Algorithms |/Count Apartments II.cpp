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

int DFS(int srcRow, int srcColumn)
{
    int count = 1;
    visit[srcRow][srcColumn] = true;
    for (int i = 0; i < 4; i++)
    {
        int ro = srcRow + vct[i].first;
        int co = srcColumn + vct[i].second;
        if (valid(ro, co) == true && visit[ro][co] == false && graph[ro][co] == '.')
        {
            count += DFS(ro, co);
        }
    }
    return count;
}
int main()
{
    vector<int> apartmentSizes;
    cin >> row >> col;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cin >> graph[r][c];
        }
    }

    memset(visit, false, sizeof(visit));

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (graph[r][c] == '.' && visit[r][c] == false)
            {
                int appCount = DFS(r, c);
                if (appCount > 0)
                {
                    apartmentSizes.push_back(appCount);
                }
            }
        }
    }
    sort(apartmentSizes.begin(), apartmentSizes.end());
    for (int size : apartmentSizes)
    {
        cout << size << " ";
    }
    if (apartmentSizes.empty())
    {
        cout << "0";
    }

    return 0;
}