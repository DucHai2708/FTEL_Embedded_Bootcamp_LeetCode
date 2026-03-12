#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int Mod = 1e9+7;
#define fi first;
#define se second;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> ans;
    int maxx = *max_element(candies.begin(),candies.end());
    for (int x : candies) {
        ans.push_back(x + extraCandies >= maxx);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector<int> v(n); for (int &x : v) cin >> x;
    int e; cin >> e;
    vector<bool> res = kidsWithCandies(v,e);
    for (bool x : res) cout << x << ' ';
}