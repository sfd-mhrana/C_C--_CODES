#include <bits/stdc++.h>
using namespace std;

#define ll long long

int row, col, fl = 0;
char graph[1005][1005];

bool visit[1005][1005];
vector<pair<int, int>> paths = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool isValid(int srcI, int srcJ)
{
    if (srcI < 0 || srcI >= row || srcJ < 0 || srcJ >= col)
        return false;
    else
        return true;
}

void BfsGrid2D(pair<int, int> first, pair<int, int> second)
{
    queue<pair<int, int>> traverse;
    traverse.push(first);
    visit[first.first][first.second] = true;

    while (!traverse.empty())
    {
        pair<int, int> parent = traverse.front();
        traverse.pop();
        if (parent.first == second.first && parent.second == second.second)
        {
            fl = 1;
            break;
        }
        for (int i = 0; i < 4; i++)
        {
            pair<int, int> child = {parent.first + paths[i].first, parent.second + paths[i].second};
            if (isValid(child.first, child.second) == true && visit[child.first][child.second] == false && graph[child.first][child.second] == '.')
            {
                traverse.push(child);
                visit[child.first][child.second] = true;
            }
        }
    }
}

int main()
{
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            char a;
            cin >> a;
            graph[i][j] = a;
        }
    }

    pair<int, int> first;
    pair<int, int> second;
    cin >> first.first;
    cin >> first.second;
    cin >> second.first;
    cin >> second.second;
    BfsGrid2D(first, second);
    if (fl)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
};