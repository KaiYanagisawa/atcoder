#include <iostream>
int main()
{
    int a, b;
    std::cin >> a >> b;
    (a * b % 2 == 0) ? std::cout << "Even\n" : std::cout << "Odd\n";
    return 0;
}