#include <iostream>
using namespace std;
int main()
{
    int N{0};
    string S;
    cin >> N;
    cin >> S;
    for (int i = 0; i < (int)S.size(); ++i)
    {
        char ch = S[i];
        if (ch == '1' && i % 2 != 0)
        {
            cout << "Aoki";
            break;
        }
        else if (ch == '1' && i % 2 == 0)
        {
            cout << "Takahashi";
            break;
        }
    }
    return 0;
}