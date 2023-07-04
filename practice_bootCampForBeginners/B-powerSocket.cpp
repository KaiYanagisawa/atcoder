#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int quantity = 1, not_use = a;

    while (not_use < b)
    {
        ++quantity;
        --a;
        not_use += a;
    }

    cout << quantity;

    return 0;
}