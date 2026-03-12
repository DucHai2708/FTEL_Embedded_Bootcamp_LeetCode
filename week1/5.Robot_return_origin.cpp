#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int Mod = 1e9+7;
#define fi first;
#define se second;

bool judgeCircle(string moves) {
    int ud = 0, lr = 0;
    for (int i = 0; i < moves.size(); i++) {
        switch (moves[i])
        {
        case 'U':
            ud++;
            break;
        case 'D':
            ud--;
            break;
        case 'L':
            lr++;
            break;
        case 'R':
            lr--;
            break;
        default:
            break;
        }
    }
    return ud == 0 && lr == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
    (judgeCircle(s)) ? cout << "true" << "\n" : cout << "false" << '\n'; 
}