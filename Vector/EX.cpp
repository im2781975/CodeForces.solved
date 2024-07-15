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

//determines the minimum number of largest elements needed such that 
//their sum is greater than the sum of the remaining elements in the vector.
void MinimumLargest(){
    int n, val, sum = 0, cnt = 0, tmp = 0;
    cin >> n;
    vector <int> vec;
    for(int i = 0; i < n; i++){
        cin >> val;
        vec.push_back(val);
        sum += val;
    }
    sort(vec.begin(), vec.end());
    for(int i = n - 1; i >= 0; i--){
        tmp += vec[i]; cnt++;
        if(tmp > (sum - tmp))
            break;
    }
    cout << "\nCount Elements are: " << cnt;
}
