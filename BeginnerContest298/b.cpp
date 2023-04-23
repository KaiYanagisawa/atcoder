#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    vector<vector<int>> B(N, vector<int>(N));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> B[i][j];
        }
    }

    bool all_one = true;

    for (int a = 0; a < 4; a++)
    {
        all_one = true;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (A[i][j] == 1 && B[i][j] == 0)
                    all_one = false;
            }
        }

        if (all_one)
            break;
        // 回転
        vector<vector<int>> tmp = A;

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                A[i - 1][j - 1] = tmp[(N + 1 - j) - 1][i - 1];
            }
        }
    }

    if (all_one)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
