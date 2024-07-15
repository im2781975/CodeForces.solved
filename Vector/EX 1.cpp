#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
// Find the difference between the largest & the 2nd smallest , & 
//the difference between the second largest & the smallest element.
void Minimize(){
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    sort(vec.begin(), vec.end());
    
    if(n < 2){
        cout << "Not enough Elements";
        return;
    }
    int x = min(vec[n -1] - vec[1], vec[n - 2] - vec[0]);
    cout << "Minimum Diff is: " << x;
}
