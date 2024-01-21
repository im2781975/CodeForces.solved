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
void findCombination(vector<char> sv,ll dis,ll k,vector<string> &total,string temp,ll count){
    if(count==dis){
        if(temp.size()==k){
            total.push_back(temp);
        }
        return;
    }
    findCombination(sv,dis,k,total,temp,count+1);
    temp+=sv[count];
    findCombination(sv,dis,k,total,temp,count+1);
    return;
}
ll fin(int n,map<vector<vector<int> >,int> &m,vector<vector<int> > a){
     if(m.count(a)==1){
         return m[a];
     }
     if(n==1){
         if(a[0][0]==1){
             m[a]=1;
            return 1;
         }else{
             m[a]=0;
             return 0;
         }
     }
     for(int i=0;i<n;i++){
         int sum=0;
         for(int j=0;j<n;j++){
             sum+=a[i][j];
         }
        if(sum==0){
             m[a]=0;
             return 0;
        }
     }
     for(int i=0;i<n;i++){
         int sum=0;
         for(int j=0;j<n;j++){
             sum+=a[j][i];
        }
        if(sum==0){
             m[a]=0;
            return 0;
         }
     }
}
