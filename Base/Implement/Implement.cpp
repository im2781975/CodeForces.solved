#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n&1)
	{
		cout<<n/2<<endl<<n/2+1<<endl;
	}
	else
	{
		cout<<n/2<<endl;
	}
	return 0;
}
ll sqrtf (ll x) {
     ll ans = 0;
   for (ll k = 1LL << 30; k != 0; k /= 2) {
         if ((ans + k) * (ans + k) <= x) {
             ans += k;
         }
     }
     return ans;
 }
ll powermod(ll a, ll b, ll m)
 {
     if (b == 0) return 1;
     ull k = powermod(a, b / 2, m);
     k = k * k;
     k %= m;
     if (b & 1) k = (k * a) % m;
     return k;
}
 long long int mod = 1000000007;
 ll factorial(ll n, ll r){
     if(r==0||r==n) return 1;
 
       dp[n][r]=
     return (factorial (n-1,r,dp)%mod + factorial (n-1,r-1,dp)%mod)%mod;
 
}
 ll kadane( vll &arr, ll n) {
 
    ll max_end = 0;
    ll mx = 0;
 
    for (ll i = 0; i < n; i++) {
        max_end += arr[i];
       if (mx < max_end) {
             mx = max_end;
         }
        if (max_end < 0) {
             max_end = 0;
         }
     }
     return mx;
 }
bool isPrime(ull n, int iter = 5)
 {
     if (n < 4) return n == 2 || n == 3;
    if (n % 2 == 0 || n % 3 == 0) return false;
     for (int i = 0; i < iter; i++)
     {
        ull a = 2 + rand() % (n - 3);
         if (powermod(a, n - 1, n) != 1) return false;
    }
     return true;
}
