#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t){
        t--;
        long long int n , m ;
        cin>>n>>m;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr , arr+n);
        if(n>m){
            cout<<"NO"<<endl;
            continue;
        }
        long long int count = 0 ; 
        for(long long int i=0;i<n-1;i++){
            count+=max(arr[i] , arr[i+1]);
        }
        count+=max(arr[0] , arr[n-1]);
        count+=n ;
        if(count>m){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

