#include <iostream>

int main()
{
    std::string S;
    std::cin >> S;
    if (S.size() == 1)
    {
        for (int i = 0; i < 6; i++)
            std::cout << S;
    }
    else if (S.size() == 2)
    {
        for (int i = 0; i < 3; i++)
            std::cout << S;
    }
    else if (S.size() == 3)
    {
        for (int i = 0; i < 2; i++)
            std::cout << S;
    }
    return 0;
}