#include <iostream>
#include <vector>

using namespace std;

int main(){ 
    vector<int> S(8);
    for (auto &s: S){ 
        cin >> s;
    }
    bool yes = true;
    int start{S[0]};
    if (start < 100 || start > 675 || start % 25 != 0)
        yes = false;
    for (int i{1}; i < S.size(); i++){ 
        if (S[i-1] > S[i] || S[i] < 100 || S[i] > 675 || S[i] % 25 != 0){ 
            yes = false;
            break; 
        }
    }

    if (yes){ 
        cout << "Yes" << endl;
    } else { 
        cout << "No" <<endl;
    }
    return 0;
}
