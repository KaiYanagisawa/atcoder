#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];

    int alice{0}, bob{0};

    for (int i = 1; i <= N; i++)
    {
        int max_num{0}, max{0};
        for (int j = 0; j < a.size(); j++)
        {
            if (max < a[j])
            {
                max = a[j];
                max_num = j;
            }
        }
        (i % 2 != 0) ? alice += max : bob += max;
        a.erase(a.begin() + max_num);
    }
    cout << alice - bob << "\n";
    return 0;
}