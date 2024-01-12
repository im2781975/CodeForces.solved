#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<long long int> fact(1001);
    fact[0] = 1;
    long long int mod = 998244353;
    
    for(int i = 1; i <= 1000; i++){
        fact[i] = (fact[i-1] * i) % mod;
    }
    
    while(t){
        int n;
        cin >> n; 
        
        if(n % 2 == 1) cout << 0 << endl;
        else{
            cout << (fact[n/2] * fact[n/2]) % mod << endl;
        }
        t--;
    }
    
    return 0;
}
