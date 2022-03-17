#include <iostream>
#include <string>
int main()
{
    int a, b, c;
    std::string s;
    int sum;
    std::cin >> a;
    std::cin >> b >> c;
    std::cin >> s;
    sum = a + b + c;
    std::cout << sum << " " << s << std::endl;
    return 0;
}