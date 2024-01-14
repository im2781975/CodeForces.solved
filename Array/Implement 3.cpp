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
int x, y, z;
cin >> x;
while (x-- > 0) {
    cin >> y >> z;
    int *a = new int[z];
    int f = 0, s = 0, c = 0;
    while (s++ < z) cin >> a[s - 1];
    
    for (int j = 0; j < z; j++) {
        int min = j;
        for (int i = j + 1; i < z; i++)
            if (a[i] < a[min]) min = i;
        swap(a[min], a[j]);
    }

    cout << a[0] << " " << a[z - 1] << endl;
    s = 0;
    while (s++ < z) {
        if (f + a[s - 1] <= y) {
            f += a[s - 1];
            c++;
        } else break;
    }
    cout << c << " " << f << endl;
}

