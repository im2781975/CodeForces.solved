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
        bool ans = true ;
        int first = 0  , second = 0 ; 
        if(n==1){
            t--;
            cout<<"YES"<<endl;
            continue;
        }
        else{
            for(int i=1;i<n;i++){
                if(arr[i]!=(arr[i-1]+1)){
                    if(first == 0){
                        first = i ;
                    }
                    else if(second == 0){
                        second = i ;
                    }
                    else{
                        ans = false;
                        break;
                    }
                }
            }
        }
        // cout<<first<<second<<endl;
        if(ans){
            if(first != 0  && second == 0){
                if(arr[first]-arr[first-1] > 3){
                    ans = false;
                }
            }
            else if(first != 0  && second != 0){
                if(arr[first]-arr[first-1] > 3)ans = false;
                else if(arr[first]-arr[first-1] == 3 && arr[second]-arr[second-1] >= 1)ans = false;
                else if(arr[first]-arr[first-1] == 2 && arr[second]-arr[second-1] >= 2)ans = false;
                else if(arr[first]-arr[first-1] == 1 &&  arr[second]-arr[second-1] >= 3) ans = false;
            }
             if(ans)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
return 0;
}

