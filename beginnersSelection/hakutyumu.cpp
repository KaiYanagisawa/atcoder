#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main()
{
    string S;
    cin >> S;
    bool dreamOrErase;

    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; i++)
        reverse(divide[i].begin(), divide[i].end());
    for (int i = 0; i < S.size();)
    {
        for (int j = 0; j < 4; j++)
        {
            if (S.substr(i, divide[j].size()) == divide[j])
            {
                dreamOrErase = true;
                i += divide[j].size();
                break;
            }
            else
                dreamOrErase = false;
        }
        if (!dreamOrErase)
            break;
    }

    (dreamOrErase) ? std::cout << "YES" : std::cout << "NO";

    return 0;
}