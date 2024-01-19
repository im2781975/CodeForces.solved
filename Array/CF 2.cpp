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
void solve6() {
    int n, p = 0, z = 0, f = 0, k = 0;
    cin >> n;
    char *c = new char[n];
    cin >> c;
    while (z++ < n)
        if (c[z - 1] != '*') p++;

    z = 0, f = 1, k = 20 - p;
    while (z++ < n - p)
        f = f * k--;

    cout << f;
    delete[] c; 
    return 0;
}
void solve7() {
    int x[12];
    int size = 12;
    int y = 0;

    while (y < size)
        cin >> x[y++];

    cin >> y;

    int min = 22, mini = 0, minj = 0, i = 0, j = 0, po = 0;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (x[i] + x[j] > y) {
                po++;
                if ((i + j) < min) {
                    min = i + j;
                    mini = i;
                    minj = j;
                }
            }
        }
    }
    if (po == 0)
        cout << "NULL";
    else
        cout << mini + 1 << " " << minj + 1;

    char str[10];
    int f = 0, z = 0;

    cin >> str;

    while (z++ < 10)
        if (str[z - 1] == 'F')
            f++;

    if (f == 1 || f == 2 || f == 5 || f == 8 || f == 9)
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";
}
void solve8() {
    int x[3], c = 0;
    int y = 0;

    while (y++ < 3) 
        cin >> x[y - 1];

    y = 0;
    int min = 0;

    while (y++ < 3) {
        if (x[min] > x[y]) 
            min = y;
    }

    int ff = 0;
    float ffs = x[min], sds = 10;

    while (ffs > 10) {
        ffs /= 10;
        ff++;
    }

    ffs = pow(sds, ff - 1);
    y = 0;

    while (y++ < 3) 
        x[y - 1] -= ffs;

    while (true) {
        if (x[0] == x[1] && x[0] == x[2]) {
            c = c + x[0];
            break;
        }
        if (x[0] > x[1] && x[0] > x[2]) {
            swap(x[0], x[2]);
            if (x[0] > x[1]) 
                swap(x[0], x[1]);
        }
        if (x[0] > x[1] && x[0] <= x[2]) 
            swap(x[0], x[1]);

        if (x[0] > x[2] && x[0] <= x[1]) {
            swap(x[0], x[2]);
            swap(x[1], x[2]);
        }

        if (x[0] <= x[1] && x[0] <= x[2] && x[1] > x[2]) 
            swap(x[2], x[1]);

        if (x[0] == 0 && x[1] == 0) 
            break;
        if (x[0] + x[1] + x[2] > 3) {
            x[2] -= 2;
            x[1] -= 1;
            c++;
        } else {
            if (x[0] + x[1] + x[2] == 3) {
                c++;
                break;
            } else
                break;
        }
    }
    cout << c + ffs << endl;
}
void solve9() {
    int x;
    cout << "Enter number of programs\n";
    cin >> x;

    float *arr = new float[x];
    float *bur = new float[x];
    float *bur2 = new float[x];
    float *prr = new float[x];
    float *end = new float[x];
    int z = 0, prrr = 0;

    while (z++ < x) {
        cout << "Enter the arrival time of p" << z << endl;
        cin >> arr[z - 1];
        cout << "And its burst time\n";
        cin >> bur[z - 1];
        bur2[z - 1] = bur[z - 1];
        prrr += bur[z - 1];
        cout << "And its priority\n";
        cin >> prr[z - 1];
    }

    arr[x] = 1000000;
    int c = 0, s = 0, min = 0, miny = 0;
    float *fin = new float[x];
    z = 0;
    int max = 0;

    while (s++ < x) {
        end[s - 1] = 0;
    }

    s = 0;
    
    while (c < prrr) {
        s = 0, min = 0;
        
        while (s++ < x) {
            if (arr[s - 1] <= c && end[s - 1] == 0 && prr[s - 1] < prr[min] && bur[s - 1] > 0)
                min = s - 1;
        }

        s = 0;

        if (c >= arr[max]) miny = x;
        else miny = min + 1;

        while (s++ < x) {
            if (arr[miny] >= arr[s - 1] && arr[s - 1] >= 0 && s - 1 != min)
                miny = s - 1;
        }

        bur[min]--;
        c++;

        if (bur[min] == 0) {
            end[min] = 1;
            fin[min] = c;
            prr[min] = 100000;
        }
    }

    z = 0;
    while (z++ < x)
        cout << fin[z - 1] << endl;

    z = 0;
    float suma = 0, sumw = 0;

    while (z++ < x) {
        float t = fin[z - 1] - arr[z - 1];
        float w = t - bur2[z - 1];
        cout << "The T(a) of p" << z << " = " << t << endl << "And its T(w) = " << w << endl;
        suma += t;
        sumw += w;
    }

    cout << "Average T(a) = " << suma / x << "\n and average T(w) = " << sumw / x << endl;

    delete[] arr;
    delete[] bur;
    delete[] bur2;
    delete[] prr;
    delete[] end;
    delete[] fin;

    return 0;
}
