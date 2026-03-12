#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int Mod = 1e9+7;
#define fi first;
#define se second;

char findTheDifference(string s, string t) {
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if (s.size() == 0) return t[0];
    int id = 0;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == s[id]) id++;
        else return t[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s, t;
    cin >> s >> t;
    cout << findTheDifference(s,t) << '\n';
}