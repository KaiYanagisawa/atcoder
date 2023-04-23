#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    if (N == 1)
    {
        cout << "Yes\n";
        return 0;
    }
    bool MF = true;
    for (int i = 0; i < N - 1; i++)
    {
        if (S[i] == 'M')
        {
            if (S[i + 1] == 'M')
            {
                MF = false;
                break;
            }
        }
        else
        {
            if (S[i + 1] == 'F')
            {
                MF = false;
                break;
            }
        }
    }
    if (MF)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}