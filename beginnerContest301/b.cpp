#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 1; i < a.size(); ++i)
    {
        if (a[i] < a[i - 1] - 1)
            a.insert(a.begin() + i, a[i - 1] - 1);
        else if (a[i] > a[i - 1] + 1)
            a.insert(a.begin() + i, a[i - 1] + 1);
    }

    for (auto a : a)
        cout << a << " ";
    cout << endl;
    return 0;
}