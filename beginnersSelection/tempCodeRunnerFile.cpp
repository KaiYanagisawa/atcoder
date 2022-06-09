#include <iostream>
using namespace std;
int main()
{
    int A{0}, B{0}, C{0}, X{0};
    cin >> A >> B >> C >> X;

    int count_true{0};
    for (int a = 0; a <= A; a++)
    {
        for (int b = 0; b <= B; b++)
        {
            for (int c = 0; c <= C; c++)
            {
                int sum{a * 500 + b * 100 + c * 50};
                if (sum == X)
                {
                    count_true++;
                }
            }
        }
    }
    cout << count_true << "\n";
    return 0;
}