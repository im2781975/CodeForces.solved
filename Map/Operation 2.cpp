int main(){
    int t;
    cin >> t;
    while(t){
        long long int n, x; 
        cin >> n >> x;
        long long int arr[n];
        for(long long int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        map<long long int, long long int> m;
        for(long long int i = 0; i < n; i++){
            m[arr[i]]++;
        }
        long long int ans = 0;   
        for(long long int i = 0; i < n; i++){
            if(m[arr[i]]){
                if(m[x * arr[i]]){
                    m[x * arr[i]]--;
                    m[arr[i]]--;
                }
                else{
                    ans++;
                    m[arr[i]]--;
                }
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        map<int, int> m;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            m[arr[i]]++;
        }
        bool ans = false;
        for(auto i: m){
            if(i.second >= 3){
                ans = true;
                cout << i.first << endl;
                break;
            }
        }
        if(!ans) cout << -1 << endl;
        t--;
    }
    return 0;
}

