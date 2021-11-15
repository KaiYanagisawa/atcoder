#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N{0}, K{0};
    int type_before{1}, type_after{1};
    cin >> N >> K;
    vector<int> c(N);
    for (auto &e : c)
        cin >> e;
    for (int i = 0; i < N - K + 1; ++i)
    {
        vector<int> v(K, 0);
        for (int j = 0; j < K; ++j)
        {
            v.push_back(c[i + j]);
        }
        for (auto &e : v)
            cout << e << " ";
        cout << "\n";
        for (int k = 0; k < v.size(); ++k)
        {
            for (int l = 1; l < v.size(); ++l)
            {
                if (v[l] != v[k])
                    type_before++;
            }
        }
        if (type_before > type_after)
            type_after = type_before;
        type_before = 1;
    }
    cout << type_after;
    return 0;
}