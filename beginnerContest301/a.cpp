#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int t_win = 0;
    int a_win = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
            t_win++;
        else
            a_win++;
    }
    // cout << "t_win " << t_win << "\n a_win " << a_win << "\n";

    if (t_win == a_win)
    {
        int a_win2 = 0;
        int t_win2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
                ++t_win2;
            else
                ++a_win2;

            if (a_win2 >= n / 2)
            {
                cout << "A\n";
                break;
            }
            else if (t_win2 >= n / 2)
            {
                cout << "T\n";
                break;
            }
        }
    }
    else
    {
        if (t_win > a_win)
            cout << "T\n";
        else
            cout << "A\n";
    }
    return 0;
}