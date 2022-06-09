#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    int operation_num = 0;
    bool even_jud(true);
    while (true)
    {
        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 != 0)
            {
                even_jud = false;
                break;
            }
            else
            {
                A[i] /= 2;
            }
        }
        if (!even_jud)
            break;
        operation_num++;
    }
    cout << operation_num << "\n";
    return 0;
}
