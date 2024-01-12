#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        int n ;
        cin >> n ;
        int arr[n]; 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int sum = 0 ;
        for(int i=0; i<n; i++){
            sum += (arr[i] - 1);
        }
        if(sum % 2 == 0){
            cout << "maomao90" << endl;
        }
        else{
            cout << "errorgorn" << endl; 
        }
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
        string s;
        cin >> s;
        int n  = s.length();
        bool ans = true;
        if(s[0]=='B' || s[n-1]=='A'){
            ans = false;
        }
        else{
            int a = 1, b = 0; 
            for(int i=1; i<n; i++){
                if(s[i]=='A'){
                    a++;
                }
                else if(s[i]=='B'){
                    b++;
                    if(a < b){
                        ans = false;
                        break;
                    }
                }
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int count = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] == arr[i - 1]){
                count++;
                i++;
            }
        }
        if(count == 0 || count == 1){
            // Code to be added here
        }
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
        long long n ;
        cin >> n;
        long long a[n] ;
        long long b[n] ;

        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }
        for(long long i = 0; i < n; i++){
            cin >> b[i];
        }
        long long sum = 0 ;
        for(long long i=0; i<n; i++){
            if(a[i] > b[i]) swap(a[i], b[i]);
        }
        for(long long i=0; i<n-1; i++){
            sum += abs(a[i+1] - a[i]) + abs(b[i+1] - b[i]);
        }
        cout << sum << endl;

        t--;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , k ;
    cin>>n>>k;
    int arr[n] ;
    int count = 0 ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]!=0)count++;
    }
    cout<<count;
return 0;
}
