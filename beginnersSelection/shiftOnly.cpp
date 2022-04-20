#include <iostream>
#include <vector>

int main()
{
    int N(200);
    int num;
    bool evenTrue{true};

    std::cin >> N;

    std::vector<int> vec(N);

    for (int i = 0; i < N; i++)
        std::cin >> vec[i];

    while (true)
    {
        for (auto v : vec)
        {
            if (v % 2 == 1)
                evenTrue = false;
            else
                v /= 2;
        }
        if (!evenTrue)
            break;
        for (auto v : vec)
            num++;
    }
    std::cout << num << std::endl;
    return 0;
}