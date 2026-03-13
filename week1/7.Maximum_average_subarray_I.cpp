#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int Mod = 1e9+7;
#define fi first;
#define se second;

double findMaxAverage(vector<int>& nums, int k) {
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < k; i++) sum += nums[i];
    ans = sum;
    for (int i = 1; i <= nums.size()-k; i++) {
        sum -= nums[i-1];
        sum += nums[i+k-1];
        ans = max(ans,sum);
    }
    return 1.0*ans/k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int &x : v) cin >> x;
    cout << fixed << setprecision(5) << findMaxAverage(v,k) << '\n';

}