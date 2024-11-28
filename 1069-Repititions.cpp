#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pb push_back
#define umap unordered_map
#define f(i, x, n) for(ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    optimize();
    
    string s;

    cin >> s;

    ll ans = LLONG_MIN;
    
    for (ll i = 0; i < s.size(); i++) {
        char c = s[i];

        ll cnt = 1, idx = i+1;

        while (s[idx] == c && idx < s.size()) {
            cnt++;
            idx++;
            i++;
        }

        if (cnt > ans) {
            ans = cnt;
        }
    }

    cout << ans << endl;
}
