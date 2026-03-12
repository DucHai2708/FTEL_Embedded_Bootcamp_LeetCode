#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int Mod = 1e9+7;
#define fi first;
#define se second;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string s1 = "", s2 = "";
    for (string x : word1) s1 += x;
    for (string x : word2) s2 += x;
    return s1 == s2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

}