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

    ull n, in;
    cin >> n;

    ull sum = (n*(n+1))/2;

    ull tot = 0;

    for (ull i = 0; i < n-1; i++) {
        cin >> in;
        tot += in;
    }

    cout << sum-tot << endl;
}
