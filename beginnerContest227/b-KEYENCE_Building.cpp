#include<iostream>
#include<vector>
int cal(int &a, int &b, std::vector<int>& S,int &men,int& i,int& num_true){
    for (int j = 1; j <= 1000;j++){
        for (int k = 1; k <= 1000;k++){
            a = j;
            b = k;
            men = 4 * a * b + 3 * a + 3 * b;
            if(men==S[i]){
                num_true++;
                return num_true;
            }
        }
    }
    return num_true;
}

int main()
{
    int N{0},num_true{0};
    std::cin >> N;
    std::vector<int> S(N);
    int a, b;
    int men;
    for(auto &v:S)
        std::cin >> v;
    for (int i = 0; i < S.size();i++){
        cal(a, b, S, men, i,num_true);
    }
    std::cout << N - num_true;
    return 0;
}