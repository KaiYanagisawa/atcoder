#include <iostream>
#include <vector>

int main()
{
    int N;
    std::vector<int> vec(N);
    int num;
    bool evenTrue{true};
    while
    {
        for (auto v : vec)
        {
            if (v % 2 == 1)
                evenTrue = false;
        }
        if (!evenTrue)
            break;
        for (auto v : vec)
            num++;
    }
    std::cout << num << std::endl;
}