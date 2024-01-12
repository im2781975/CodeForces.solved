#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        int n, k;
        cin >> n >> k;
        int total = k;
        string s;
        cin >> s;
        string temp = s;
        vector<int> ans(n, 0);
        int flip = 0; 
        for(int i=0; i<n; i++){
            if(k == 0) break;
            int bitt = s[i]-'0';
            if((bitt == 0 && flip % 2 == 0) || (bitt == 1 && flip % 2 == 1)){
                if(k % 2 == 0){
                    // even 
                    ans[i]++;
                    flip++;
                    k--;
                    if(k == 0) break;
                }
            }
            else{
                if(k % 2 != 0){
                    // odd
                    ans[i]++;
                    flip++;
                    k--;
                    if(k == 0) break;
                }
            }
        }
        if(k){
            ans[n-1] += k;
        }
        for(int i=0; i<n; i++){
            if((total - ans[i]) % 2 == 1){
                if(temp[i] == '0'){
                    temp[i] = '1';
                }
                else{
                    temp[i] = '0';
                }
            }
        }
        cout << temp << endl;
        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}

