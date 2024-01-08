#include<iostream>
#include<vector>
#define INF 1e18;
using namespace std;
 
typedef long long ll;
typedef long double ld;
ll gcd(ll a, ll b) {
	if (a == 0 || b == 0)return a + b;
	if (a > b)return gcd(a%b, b);
	return gcd(a, b%a);
}
int main()
{
    ll n, x;
    cin >> n >>x;
    cout<< gcd(n, x);
}
