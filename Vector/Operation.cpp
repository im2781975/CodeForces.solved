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
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        long long int n , a , b ;
        cin>>n>>a>>b ;
        long long int arr[n]; 
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<long long int> prefix (n ,0 );
        prefix[0] = arr[0] ;
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] + arr[i] ;
        }
        long long int ans = prefix[n-1]*b ;
        long long int prev = b*arr[0];
        for(int i=0;i<n;i++){
            ans = min(ans , prev + arr[i]*a + (prefix[n-1]-prefix[i] - (n-i-1)*arr[i])*b); 
            if(i+1!=n){
                prev+=(arr[i+1]-arr[i])*b;
            }
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = INT_MIN ;
    for(auto i:arr){
        maxi = max(maxi , i);
    }
    vector<int> maxelems ;
    for(int i=0;i<n;i++){
        if(arr[i]==maxi){
            maxelems.push_back(i);
        }
    }
    int size = maxelems.size();
    int zero = size/2;
    if(zero!=0){
        int k = -1;
        for(int i=zero-1 ;i>=0;i--){
            
        }
    }
    return 0;
}

