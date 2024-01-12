#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n , r , b ;
        cin>>n>>r>>b; 
        int k=0 ;
        string ans = "";
        ans+='R';
        int cnt = ceil((float)r / (b+1));
        // cout<<cnt<<endl;
        while(k<n){
            for(int i=0;i<cnt && k<n;i++){
                ans+='R';
                k++;
            }
            if(k<n){
                ans+='B';
                k++;
            }
        }

        // int d = r / (b+1) ;
        // int remm = r%(b+1) ;

        // string ans ="";

        // for(int i=0;i<=b;i++){
        //     for(int i=0;i<d;i++){
        //         ans += 'R';
        //     }
        //     if(remm){
        //         ans+='R';
        //         remm--;
        //     }
        //     if(i!=b)ans+='B';
        // }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}

