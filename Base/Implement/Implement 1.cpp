int main(){
    int t;
    cin >> t;
    while(t){
        int a, b;
        cin >> a >> b;
        int ans = 0;
        if(a == 0) ans = 1;
        else ans = a + 2 * b + 1;
        cout << ans << endl;
        t--;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        long long int n ;
        cin>> n ;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int ans =0 ;
        for(long long int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                if(i+2 != n && arr[i+2]>arr[i]){
                    arr[i+1] = arr[i+2];
                }
                else{
                    arr[i+1] = arr[i];
                }
                ans++;
            }
        }
        cout<<ans<<endl;
        for(auto i:arr)cout<<i<<" ";
        cout<<endl;
        t--;
    }
    return 0;
}

