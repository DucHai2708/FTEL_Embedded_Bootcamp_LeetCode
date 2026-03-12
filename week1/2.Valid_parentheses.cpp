#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int Mod = 1e9+7;
#define fi first;
#define se second;

bool isValid(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
        else {
            if (st.empty()) return false;
            char open = st.top(), close = s[i];
            if (open == '(' && close == ')') st.pop();
            else if (open == '[' && close == ']') st.pop();
            else if (open == '{' && close == '}') st.pop();
            else return false;
        }
    }
    if (st.empty()) return true;
    else return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
    if (isValid(s)) cout << "true" << '\n';
    else cout << "false";

}