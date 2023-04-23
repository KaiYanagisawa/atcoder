#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, T;
    vector<int> C(N);
    vector<int> R(N);

    cin >> N >> T;
    for (int i = 0; i < N; i++)
        cin >> C[i];
    for (int i = 0; i < N; i++)
        cin >> R[i];

    bool t_exit = false;
    vector<int> c_to_r;
    for (int i = 0; i < N; i++)
    {
        if (C[i] == T)
        {
            t_exit = true;
            c_to_r.push_back(i);
        }
    }

    if (t_exit)
    {
        int max = R[c_to_r[0]];
        if (c_to_r.size() == 1)
            cout << c_to_r[0] + 1 << endl;
        else
        {
            int max_player;
            for (int i = 1; i < c_to_r.size(); i++)
            {
                if (R[c_to_r[i]] > max)
                {
                    max = R[c_to_r[i]];
                    max_player = c_to_r[i] + 1;
                }
            }
            cout << max_player << endl;
        }
    }
    else
    {
        bool same_player1 = false;
        vector<int> same_player1_list;
        for (int i = 0; i < N; i++)
        {
            if (C[i] == C[0])
            {
                same_player1 = true;
                same_player1_list.push_back(i);
            }
        }

        if (same_player1_list.size() == 1)
            cout << same_player1_list[0] + 1;
        else
        {
            int max = R[same_player1_list[0]];
            int max_player;
            for (int i = 1; i < same_player1_list.size(); i++)
            {
                if (R[same_player1_list[i]] > max)
                {
                    max = R[same_player1_list[i]];
                    max_player = same_player1_list[i];
                }
            }
            cout << max_player << endl;
        }
    }

    return 0;
}