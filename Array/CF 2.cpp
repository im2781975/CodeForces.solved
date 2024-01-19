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
void solve2() {
    string s;
    cin >> s;
    int n = s.length();
    bool ans = true;

    if (s[0] == 'B' || s[n - 1] == 'A') {
        ans = false;
    } else {
        int a = 1, b = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] == 'A') {
                a++;
            } else if (s[i] == 'B') {
                b++;
                if (a < b) {
                    ans = false;
                    break;
                }
            }
        }
    }

    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
void solve3(){
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
            // Add your logic here for cases where count is 0 or 1
            // For example, you can print a message or perform some operation
            // based on the specific requirement.
            cout << "Special case: Count is either 0 or 1." << endl;
        }
        else {
            // Add your logic here for cases where count is not 0 or 1
            // For example, you can continue with the existing code or modify it accordingly.
            // It depends on your specific task.
        }
        t--;
    }
    return 0;
}
void solve4() {
    int n;
    cin >> n;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i])
            swap(a[i], b[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        sum += abs(a[i + 1] - a[i]) + abs(b[i + 1] - b[i]);
    }
    cout << sum << endl;
}
#include <iostream>
using namespace std;
void solve5() {
    int x;
    cin >> x;
    char *y = new char[x];
    int *s = new int[x];
    int *r = new int[x];
    int z = 0, i = 0, h = 26;
    char a[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    while (z < x)
        cin >> y[z++];

    for (z = 0; z < x; z++)
        for (i = 0; i < h; i++)
            if (y[z] == a[i])
                s[z] = i + 1;

    i = x;

    for (z = 0; z < x; z++) {
        int max = 0;
        for (h = 0; h < x; h++)
            if (s[h] >= s[max])
                max = h;

        r[max] = i--;
        s[max] = 0;
    }

    z = 1;
    cout << r[0];

    while (z < x)
        cout << " " << r[z++];

    cout << "\n";

    delete[] y;
    delete[] s;
    delete[] r;
    return 0;
}
