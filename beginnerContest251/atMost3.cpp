#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, W;
    cin >> N >> W;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    vector<int> good_int_count(W + 1);

    // Select 1 weight.
    for (int i = 0; i < N; i++)
    {
        if (A[i] <= W)
            good_int_count[A[i]] = 1;
    }

    // Select 2 weights.
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int sum{A[i] + A[j]};
            if (sum <= W)
                good_int_count[sum] = 1;
        }
    }

    // Select 3 weights.
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int sum{A[i] + A[j] + A[k]};
                if (sum <= W)
                    good_int_count[sum] = 1;
            }
        }
    }

    int good_int{0};
    for (int i = 1; i <= W; i++)
        good_int += good_int_count[i];
    cout << good_int << "\n";

    return 0;
}