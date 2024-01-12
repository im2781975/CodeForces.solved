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

