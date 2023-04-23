#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> route(N, vector<int>(3));
    for (int i = 0; i < N; i++)
        cin >> route[i][0] >> route[i][1] >> route[i][2];

    // vector<int> atcoder{0, 0, 0};

    bool can = false;
    for (int i = 0; i < N; i++)
    {
        int dt = route[i + 1][0] - route[i][0];
        int dist = abs(route[i + 1][1] - route[i][1]) + abs(route[i + 1][2] - route[i][2]);
        if (dist > dt)
            can = false;
        if (dist % 2 != dt % 2)
            can = false;
    }
    if (can)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}