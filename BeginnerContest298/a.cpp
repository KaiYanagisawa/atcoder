#include <iostream>
using namespace std;
int main()
{
    int N;
    string S;
    cin >> N >> S;
    bool ok = false;
    for (int i = 0; i <= N; i++)
    {
        if (S[i] == 'x')
        {
            ok = false;
            break;
        }
        if (S[i] == 'o')
        {
            ok = true;
        }
    }
    if (ok)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}