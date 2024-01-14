#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n , k ;
        cin>>n>>k;
        string s ;
        cin>>s;
        if(k==0){
            cout<<1<<endl;
        }
        else{
            bool ans = true ;
            for(int i=0;i<n/2;i++){
                if(s[i]!=s[n-i-1]){
                    ans = false; break;
                }
            }
            if(ans || n==1)cout<<1<<endl;
            else cout<<2<<endl;
        }
        t--;
    }
    return 0;
}
char c;
int x, y;
while (cin >> c >> x >> y) {
    if (x < y) swap(&x, &y);
    switch (c) {
        case ('R'): {
            for (int i = 0; i < y; i++) {
                for (int j = 0; j < x; j++)
                    cout << "*";
                cout << endl;
            }
            break;
        }
        case ('S'): {
            for (int i = 0; i < y; i++) {
                for (int j = 0; j < x; j++)
                    cout << "*";
                cout << endl;
            }
            break;
        }
        case ('T'): {
            for (int i = 0; i < x; i++) {
                for (int j = 0; j <= i; j++)
                    cout << "*";
                cout << endl;
            }
            break;
        }
    }
}

