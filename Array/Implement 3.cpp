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

