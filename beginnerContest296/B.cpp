#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<char>> grid(8, vector<char>(8));

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (grid[i][j] == '*')
            {
                int i2 = 8 - i;
                if (j == 0)
                    cout << "a" << i2 << "\n";
                else if (j == 1)
                    cout << "b" << i2 << "\n";
                else if (j == 2)
                    cout << "c" << i2 << "\n";
                else if (j == 3)
                    cout << "d" << i2 << "\n";
                else if (j == 4)
                    cout << "e" << i2 << "\n";
                else if (j == 5)
                    cout << "f" << i2 << "\n";
                else if (j == 6)
                    cout << "g" << i2 << "\n";
                else if (j == 7)
                    cout << "h" << i2 << "\n";
                break;
            }
        }
    }

    return 0;
}