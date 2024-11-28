#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
#define umap unordered_map
#define f(i, x, n) for (ll i = x; i < n; i++)
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
void solve(ll n) {
  cout << n << " ";
  
  if (n==1) return;
  else if(n&1) {
  	solve(3*n+1);
  } else {
  	solve(n/2);
  }
}
 
 
int32_t main() {
	optimize();
	
	ll n;
	cin >> n;
	
	solve(n);
	cout << endl;
