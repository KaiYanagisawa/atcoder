#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int>> a, b;

bool check()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // A[i][j]が1の場合、B[N-1-j][i]も1でなければならない
            if (a[i][j] == 1 && b[n - 1 - j][i] == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    cin >> n;
    a.resize(n, vector<int>(n));
    b.resize(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    if (check())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}