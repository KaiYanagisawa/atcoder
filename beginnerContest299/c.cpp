#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    string S;

    cin >> N >> S;

    vector<int> dango;
    int dango_number = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'o')
        {
            dango_number++;
        }
        else
        {
            dango.push_back(dango_number);
            dango_number = 0;
        }
    }

    int max_level = 0;
    for (int i = 0; i < dango.size(); i++)
    {
        if (dango[i] > max_level)
            max_level = dango[i];
    }

    if (max_level == 0)
        cout << -1 << endl;
    else
        cout << max_level << endl;

    return 0;
}