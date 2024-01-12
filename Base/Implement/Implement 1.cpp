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
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n ;
        cin>>n;
        // 22

        int ans = 0 ; 
        int ld = n%10 - 1 ;
        ans += 10*ld;
    
        // ans = 10 

        int k = n%10 ;
        int cnt = 0 ;
        int ptr = 1 ;
        while(cnt<n){
            cnt = cnt*10 + k ;
            ans+=ptr ;
            ptr++;
        }
        cout<<ans<<endl;

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
        t--;
        int m , n ;
        cin>>m>>n ;
        if(m==1 && n==1){
            cout<<"0"<<endl;
            continue;
        }
        else if(m==1 && n==2 || m==2 && n==1){
            cout<<"1"<<endl;
            continue;
        }
        else if(m==1 && n>2 || m>2 && n==1){
            cout<<"-1"<<endl;
            continue;
        }
        else{
            if(m%2==0 && n%2==0 || m%2==1 && n%2==1){
                cout<<(max(m,n)-1)*2<<endl;
            }
            else{
                cout<<(max(m,n)-1)*2-1<<endl;
            }
        }
    }
    return 0;
}

int n = height.length();
int left = 0, right = n - 1;
int res = 0;
int leftmax = 0, rightmax = 0;

while (left <= right) {
    if (height[left] <= height[right]) {
        if (height[left] >= leftmax) {
            leftmax = height[left];
        } else {
            res += leftmax - height[left];
        }
    } else {
        if (height[right] >= rightmax) {
            rightmax = height[right];
        } else {
            res += rightmax - height[right];
        }
        right--;
    }
}
return res;

    
