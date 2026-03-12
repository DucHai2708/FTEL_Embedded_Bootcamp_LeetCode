#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int Mod = 1e9+7;
#define fi first;
#define se second;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    while (nums1.size() && nums1.back() == 0) nums1.pop_back();
    while (nums2.size() > 0 && nums2.back() == 0) nums2.pop_back();
    vector<int> ans;
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) ans.push_back(nums1[i++]);
        else ans.push_back(nums2[j++]);
    }
    while (i < m) ans.push_back(nums1[i++]);
    while (j < n) ans.push_back(nums2[j++]);
    while (ans.size() < m+n) ans.push_back(0);
    nums1 = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int m, n; cin >> m >> n;
    vector<int> nums1, nums2;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        nums1.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        nums2.push_back(x);
    }
    merge(nums1,m,nums2,n);
    for (int x : nums1) cout << x << ' ';
}