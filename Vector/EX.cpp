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

//calculates the length of the longest contiguous subarray that excludes the min & max values. 
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

//Determine weither a vector decreasing or not
void Decreasing(){
    vector <int> vec, cev;
    int n, m, k;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> k; 
        vec.push_back(k);
    }
    for(int i = 0; i < m; i++){
        cin >> k; 
        cev.push_back(k);
    }
    sort(cev.begin(), cev.end());
    reverse(cev.begin(), cev.end());
    int cnt = 0, flag = 0;
    for(int i = 0; i < n; i++){
        if(vec[i] == 0){
            if(vec[i] == cev[i])
                cnt++;
        }
    }
    for(int i = 1; i < n; i++){
        if(vec[i] < vec[i - 1])
            flag = 1; break;
    }
    (flag)?cout << "Yes":cout << "No";
}

//find and print the absolute difference between consecutive elements, 
//the absolute difference between each element and the max & min values in the sequence, 
//& finally, the difference between the minimum and maximum values in the sequence.
void AbsoluteDiff(){
    int x = 1e10, y = 1e10;
    x = x * (-1);
    int n, val; cin >> n;
    vector <int> vec;
    for(int i = 0; i < n; i++){
        cin >> val;
        vec.push_back(val);
        x = max(x, val); y = min(y, val);
    }
    cout << abs(vec[0] - vec[1]) << "\n";
    cout << abs(vec[1] - x) << "\n";
    for(int i = 1; i < n -1; i++){
        cout << min(abs(vec[i] - vec[i - 1]), abs(vec[i] - vec[i + 1])) << "\n";
        cout << max(abs(vec[i] - x), abs(vec[i] - y)) << "\n";
    }
    cout << abs(vec[n -1] - vec[n - 2]) << "\n" << y - x;
}

//count sequences of consecutive 'B's in a given string and output 
//the number of such sequences along with their lengths.
void CountConsecutive(){
    int n, cnt = 0; 
    cin >> n;
    string str; cin >> str;
    vector <int> vec;
    for(int i = 0; str[i]; i++){
        if(str[i] == 'B')
            cnt++;
        else {
            if(cnt !=0)
                vec.push_back(cnt);
                cnt = 0;
        }
    }
    if(cnt !=0)
        vec.push_back(cnt);
    cout << vec.size() << " ";
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
}

//counts consecutive zeros and outputs the length of the 
//longest such consecutive zero sequence for each test case
void CountConsecutive(){
    int n, x; cin >> n;
    int cnt = 0;
    vector<int>vec(n);
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 0)
            cnt++;
        else {
            if(cnt > 0){
                vec.push_back(cnt);
                cnt = 0;
            }
        }
    }
    if(cnt > 0)
        vec.push_back(cnt);
    sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}

// Determines whether it is possible to split a given string of digits into 
//two increasing subsequences. If possible, the program outputs a vector indicating which
//subsequence each digit belongs to (1 or 2). If not possible, it outputs "-".
void SplitString() {
    string str, a, b;
    int n; 
    // Read the length of the string and the string itself
    cin >> n;
    cin >> str;
    vector<int> vec;
    int flag, found = 0;
    for (int i = 0; i <= 9; i++) {
        vec.clear();
        a.clear(); b.clear();
        flag = 0;
        bool added = false;
        for (int j = 0; j < n; j++) {
            int cur = str[j] - '0';
            if (cur > i) {
                if (!a.empty() && a.back() > str[j]) {
                    flag = 1;
                    break;
                }
                vec.push_back(2);
                a += str[j];
                added = true;
            } else if (cur < i) {
                if (!b.empty() && b.back() > str[j]) {
                    flag = 1;
                    break;
                }
                vec.push_back(1);
                b += str[j];
            } else {
                if (added) {
                    vec.push_back(1);
                    b += str[j];
                } else {
                    vec.push_back(2);
                    a += str[j];
                    added = true;
                }
            }
        }
        if (flag == 0) {
            found = 1;
            break;
        }
    }
    if (found) {
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    } else 
        cout << "-";
}

void FindMinMax(){
    int x, n;
    int cnt = 0, tmp = 0;
    cin >> n;
    vector <int> vec;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x > 0) {
            if(cnt == 0)
                cnt = x;
            else
                vec.push_back(x);
        }
        else if(x < 0) {
            if(tmp == 0)
                tmp = x;
            else
                vec.push_back(x);
        }
        else
            vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    cout << 1 << cnt << " ";
    if(tmp !=0)
        cout << 1 << tmp << " ";
    else {
        int a =vec[vec.size() - 1];
        int b = vec[vec.size() - 2];
        vec.pop_back();
        vec.pop_back();
        cout << 2 << " " << a << " " << b << "\n";
    }
    cout << vec.size();
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << "\n";
}

//takes three integer inputs and performs some operations to determine
//if it's possible to represent sum of distinct integers from 1 to n excluding the integer x
void ForbiddenInteger(){
    int sum, n, x;
    cin >> sum >> n >> x;
    vector <int> vec(n);
    vector <int> res;
    if(sum < 0 || n < 2 || x < 1 || x > sum){
        cout << "Invalid Input";
        return 0;
    }
    for(int i = 0; i < n; i++)
        vec[i] = i + 1;
    sort(vec.begin(), vec.end());
    for(int j = 0; j < n; j++){
        while(sum >= vec[j] && vec[j] !=x){
            sum -= vec[j];
            res.push_back(vec[j]);
        }
    }
    if(sum == 0){
        cout << "Yes,size is: " << res.size() << "\n";
        for(int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
    }
    else
        cout << "No";
}
