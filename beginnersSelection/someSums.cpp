#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int sum{0};
    for (int i = 1; i <= N; i++)
    {
        vector<int> digit;
        // cout << "i= " << i << endl;
        int j{i};
        while (j >= 0)
        {
            if (j >= 10000)
            {
                digit.push_back(j / 10000);
                j %= 10000;
            }
            else if (j >= 1000)
            {
                digit.push_back(j / 1000);
                j %= 1000;
            }
            else if (j >= 100)
            {
                digit.push_back(j / 100);
                j %= 100;
            }
            else if (j >= 10)
            {
                digit.push_back(j / 10);
                j %= 10;
                // cout << "i10=" << j << endl;
            }
            else if (j >= 0)
            {
                digit.push_back(j);
                // cout << "i0=" << j << endl;
                break;
            }
        }
        int correct{0};
        for (auto d : digit)
            correct += d;
        // cout << "cor" << correct << endl;
        if (correct >= A && correct <= B)
            sum += i;
        // cout << "sum=" << sum << endl;
    }
    cout << sum << endl;
    return 0;
}