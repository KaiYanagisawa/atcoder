#include<iostream>
int main(){
    int N, K, A;
    std::cin >> N >> K >> A;
    for (int i = 0; i < K; ++i)
    {
        if(i!=0)
            A++;
        if (A > N)
        {
            A = 1;
        }
    }
    std::cout << A;
    return 0;
}