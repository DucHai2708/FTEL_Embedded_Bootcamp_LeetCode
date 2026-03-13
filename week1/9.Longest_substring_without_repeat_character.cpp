#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int Mod = 1e9+7;
#define fi first;
#define se second;

int lengthOfLongestSubstring(string s) {
    unordered_set<int> us;
    int ans = -1, l = 0;
    for (int r = 0; r < s.length(); r++) {
        while (us.count(s[r])) {
            us.erase(s[l]);
            l++;
        }
        us.insert(s[r]);
        ans = max(ans,r-l+1);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
    int res = lengthOfLongestSubstring(s);
    cout << res << '\n';

}