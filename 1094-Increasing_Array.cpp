#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	optimize();

  ll n;
  cin >> n;
  
  ll prev = -1, in, ans = 0;
  
  cin >> prev;
  
  for (ll i = 1; i < n; i++) {
  	cin >> in;
  	
  	if (in < prev) {
  		ans += (prev-in);
  	} else {
  		prev = in;
  	}
  }
  
  cout << ans << endl;
}