#include <bits/stdc++.h>
#include<string>
#include<string.h>
#define ll long long
using namespace std;
vector<ll> primeFactors(ll n)
{
    vector<ll> v;
    int counter=0;
    while (n % 2 == 0)
    {
        if(counter==0){
            v.push_back(2);
        }
        // cout << 2 << " ";
        n = n/2;
        counter=1;
    }
 
    for (ll i = 3; i <= sqrtl(n); i = i + 2)
    {
        counter=0;
        while (n % i == 0)
        {
            if(counter==0){
                v.push_back(i);
            }
            counter=1;
            n = n/i;
        }
    }
 
    if (n > 2)
        v.push_back(n);
    return v;
}
