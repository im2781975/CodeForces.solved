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

//calculates the length of the longest contiguous subarray that excludes the minimum and maximum values. 
void CalculateLength(){
    int n, val, dist1, dist2;
    cin >> n;
    vector <int> vec;
    for(int i = 0; i < n; i++){
        cin >> val;
        vec.push_back(val);
    }
    sort(vec.begin(), vec.end());
    auto it = upper_bound(vec.begin(), vec.end(), vec[0]);
    dist1 = it - vec.begin();
    it = lower_bound(vec.begin(), vec.end(), vec[vec.size() - 1]);
    //Decrementing this iterator (it--) makes it point to the element before, 
    //which is just before the first occurrence of large value.
    it--;
    dist2 = it - vec.begin();
    int res = 0;
    cout << "Diff between upper & lower bound is: " << max(res, dist2 - dist1 + 1);
}
