#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int Mod = 1e9+7;
#define fi first;
#define se second;

bool canConstruct(string ransomNote, string magazine) {
    int cnt[255] = {0};
    for (int i = 0; i < magazine.length(); i++) cnt[magazine[i]]++;
    for (int i = 0; i < ransomNote.length(); i++) cnt[ransomNote[i]]--;
    for (int i = 0; i < 256; i++) {
        if (cnt[i] < 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s, t;
    cin >> s >> t;
    (canConstruct(s,t)) ? cout << "true" << '\n' : cout << "false" << '\n';
}