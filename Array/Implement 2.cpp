#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        int n ;
        cin >> n ;
        int arr[n] ;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr , arr+n , greater<int>());
        if(n==1){
            if(arr[0]>1) cout << "NO" << endl;
            else cout << "YES" << endl;
            t--;
            continue;
        }
        else{
            if(arr[0]-arr[1] <=1 ) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        t--;
    }
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        int arr[n];
        int ans = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            ans = ans | arr[i];
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n, greater<int>());
        if(n == 1){
            if(arr[0] > 1) cout << "NO" << endl;
            else cout << "YES" << endl;
            t--;
            continue;
        }
        if(arr[0] - arr[1] <= 1) cout << "YES" << endl;
        else cout << "NO" << endl;
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
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int j=0; j<n-1; j++){
            int i=j+1;
            int mini = INT_MAX;
            int miniIndex = -1;
            while(i < n){
                if(arr[i] < arr[j] && arr[i] < mini){
                    mini = arr[i];
                    miniIndex = i;
                }
                i++;
            }
            if(mini != INT_MAX){
                reverse(arr+j, arr+miniIndex+1);
                break;
            }
        }
        for(auto i:arr) cout << i << " ";
        cout << endl;
        t--;
    }
    return 0;
}
