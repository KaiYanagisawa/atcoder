#include <iostream>
int main()
{
    int N, A, Y, X;
    int sum{0};
    std::cin >> N >> A >> X >> Y;
    for (int i = 1; i <= N; ++i)
    {
        if (i <= A)
        {
            sum += X;
        }
        else
        {
            sum += Y;
        }
    }
    std::cout << sum;
    return 0;
}