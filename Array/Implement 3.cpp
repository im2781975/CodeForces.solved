#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n ;
        cin>>n;
        int arr[n] ;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxiIndex = 0 ;
        bool check = true;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                check = false;
            }
            if(arr[i]>arr[maxiIndex]){
                maxiIndex = i ;
            }
        }

        if(maxiIndex==0){
            while(arr[maxiIndex+1]==arr[maxiIndex])maxiIndex++;
        }

        if(check)cout<<"-1"<<endl;
        else cout<<maxiIndex+1<<endl;
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
        int n , m ;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n>m){
            cout<<"NO"<<endl;
            continue;
        }
        int count = arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                count+=2*arr[i]-arr[i+1];
            }
        }
        if(count+n <= m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}

