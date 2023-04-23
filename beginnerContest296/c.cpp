#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    bool exit = false;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (A[i] - A[j] == X || A[j] - A[i] == X)
            {
                exit = true;
                break;
            }
        }
    }
    if (exit)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}