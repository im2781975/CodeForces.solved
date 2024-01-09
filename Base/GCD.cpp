#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#define INF 1e18
using namespace std;
 
typedef long long ll;
typedef long double ld;

ll gcd(ll a, ll b) {
    if (a == 0 || b == 0) return a + b;
    if (a > b) return gcd(a % b, b);
    return gcd(a, b % a);
}

ll gcd(ll a, ll b) {
    if (b > a) 
        swap(b, a);
    if (a == b)
        return a;
    for (int i = b; i > 0; i--) {
        if (b % i == 0 && a % i == 0)
            return i;
    }
}

ll lcm(ll a, ll b) {
    for (int i = max(a, b); i <= a * b; i++) {
        if (i % a == 0 && i % b == 0)
            return i;
    }
    return -1;
}

int main() {
    ll n, x;
    cin >> n >> x;
    cout << gcd(n, x) << endl;
    cout << lcm(n, x) << endl;
    return 0;
}

