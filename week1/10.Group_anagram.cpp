#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int Mod = 1e9+7;
#define fi first
#define se second

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<pair<string,string>> v;
    for (string x : strs) {
        string t = x; sort(t.begin(),t.end());
        v.push_back({t,x});
    }
    sort(v.begin(),v.end());
    vector<vector<string>> ans;
    vector<string> res; res.push_back(v[0].se);
    for (int i = 1; i < v.size(); i++) {
        if (v[i].fi == v[i-1].fi) res.push_back(v[i].se);
        else {
            ans.push_back(res);
            res.clear();
            res.push_back(v[i].se);
        }
    }
    ans.push_back(res);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector<string> v(n);
    for (string &x : v) cin >> x;
    vector<vector<string>> ans = groupAnagrams(v);
    for (int i = 0; i < ans.size(); i++) {
        for (auto x : ans[i]) cout << x << " ";
        cout << "\n";
    }
}

/*
abt bat
aet ate
aet eat
aet tea
ant nat
ant tan

*/
