#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> d(N);
    for (int i = 0; i < N; i++)
        cin >> d[i];
    sort(d.begin(), d.end());
    int numberOfStages{0}, max{0};
    for (int i = 0; i < N; i++)
    {
        if (d[i] > max)
        {
            max = d[i];
            numberOfStages++;
        }
    }
    cout << numberOfStages << endl;
    return 0;
}