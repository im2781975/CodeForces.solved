#include<bits/stdc++.h>
using namespace std;
void solve1(){
    int n ;
    cin >> n ;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int sum = 0 ;
    for(int i=0; i<n; i++)
        sum += (arr[i] - 1);
    
    if(sum % 2 == 0){
        cout << "maomao90" << "\n";
    else
        cout << "errorgorn" << "\n"; 
    return 0;
}

