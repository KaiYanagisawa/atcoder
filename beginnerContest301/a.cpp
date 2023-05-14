#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    int s_length = s.length();
    if (s_length != n)
        return 1;

    int t_win = 0;
    int a_win = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
            t_win++;
        else
            a_win++;
    }
    if (t_win == a_win)
    {
        bool first_win_t = false;
        int a_win2 = 0;
        int t_win2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
                t_win2++;
            else
                a_win2++;

            if (n % 2 == 0)
            {
                if (t_win2 == n / 2)
                {
                    first_win_t = true;
                    break;
                }
            }
        }
        if (first_win_t)
            cout << "T\n";
        else
            cout << "A\n";
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