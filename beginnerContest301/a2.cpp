#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int t_win = 0, a_win = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
            t_win++;
        else
            a_win++;
    }

    if (t_win > a_win)
        cout << 'T' << endl;
    else if (t_win < a_win)
        cout << 'A' << endl;
    else
        cout << char('T' + 'A' - s.back()) << endl;
    return 0;
}