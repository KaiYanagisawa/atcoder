#include <iostream>
#include <vector>

using namespace std;

struct Price { 
    int price;
    string name;
};

int main(){ 
    int N, M;
    cin >> N >> M;

    vector<string> C(N);
    vector<string> D(M);
    vector<int> P(M+1);

    for (auto &c: C){ 
        cin >> c;
    }
    for (auto &d: D){ 
        cin >> d;
    }
    for (auto &p: P){ 
        cin >> p;
    }

    vector<Price> price;
    for (int i=0; i < D.size(); i++){ 
        price.push_back({P[i+1], D[i]});
    }

    int sum = 0;
    for (int i=0; i < C.size(); i++){ 
        bool search = false;
        for (int j=0; j < price.size(); j++){ 
            if (C[i] == price[j].name){ 
                sum += price[j].price;
                search = true;
            } 
            if (j==price.size()-1 && !search){ 
                sum += P[0];
            }
        }
    }

    cout << sum << endl;

    return 0;
}
