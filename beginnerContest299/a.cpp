#include <iostream>

using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;
    string before, after;
    cout << S.substr(0, 0);
    for (int i = 0; i < N; ++i)
    {
        if (S[i] == '*')
        {
            before = S.substr(0, i + 1);
            after = S.substr(i + 1, N - (i + 1));
            break;
        }
    }

    bool after_exit = false, before_exit = false;
    if (before.length() != 0)
    {
        for (int i = 0; i < before.length(); i++)
        {
            if (before[i] == '|')
            {
                before_exit = true;
                break;
            }
        }
    }
    if (after.length() != 0)
    {
        for (int i = 0; i < after.length(); i++)
        {
            if (after[i] == '|')
            {
                after_exit = true;
                break;
            }
        }
    }

    if (before_exit && after_exit)
    {
        cout << "in\n";
    }
    else
        cout << "out\n";

    return 0;
}