#include <iostream>
#include <string>
using namespace std;
void CheckFirstLast() {
    //performs sorting on the first n characters of the string in ascending order 
    //& the remaining characters in descending order. After sorting, it checks 
    //if the first and last characters in the string are in non-decreasing order
    //If yes, it prints "YES"; otherwise, it prints "NO".
    int n;
    cin >> n;
    string s;
    cin >> s;
    char ch;
    int i = 0, f = s.size() - 1;
    int b = 0, e = s.size() - 1;
    // Sort the first n characters in ascending order
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (s[j] < s[min])
                min = j;
        ch = s[min];
        s[min] = s[i];
        s[i] = ch;
    }
    // Sort the remaining characters in descending order
    for (int i = n; i < s.size(); i++) {
        int min = i;
        for (int j = i + 1; j < s.size(); j++)
            if (s[j] > s[min]) // Change to descending order
                min = j;
        ch = s[min];
        s[min] = s[i];
        s[i] = ch;
    }
    // Check if the first and last characters are in non-decreasing order
    i = 0;
    while (i < s.size() / 2) {
        if (s[i++] > s[f--]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
void PalindromeAddition() {
    string s, s2;
    cin >> s;
    int i = 0, n = s.size() - 1, c = 0, count = 0;
    char ch;
    
    while (true) {
        c = 0, n = s.size() - 1, i = 0;
        
        while (i < s.size() / 2) {
            if (s[i++] != s[n--]) {
                c++;
                break;
            }
        }
        if (c == 0) break;
        s2 = s;
        i = 0, n = s.size() - 1;
        
        while (i < s.size() / 2) {
            ch = s[i];
            s[i] = s[n];
            s[n] = ch;
            i++;
            n--;
        }
        i = 0;
        int carry = 0;
        
        while (i < s.size()) {
            ch = (s[i] - '0') + (s2[i] - '0') + carry;
            s[i] = (ch % 10) + '0';
            carry = ch / 10;
            i++;
        }
        if (carry > 0) {
            s.push_back(carry + '0');
        }
        count++;
    }
    cout << count << " " << s;
    return 0;
}
void BasedCondition() {
    int n, r, b;
    cin >> n >> r >> b;
    int k = 0;
    string ans = "";
    ans += 'R';
    int cnt = ceil((float)r / (b + 1));
    cout << cnt << endl;

    while (k < n) {
        for (int i = 0; i < cnt && k < n; i++) {
            ans += 'R';
            k++;
        }
        if (k < n) {
            ans += 'B';
            k++;
        }
    }

    int d = r / (b + 1);
    int remm = r % (b + 1);

    ans = "";

    for (int i = 0; i <= b; i++) {
        for (int i = 0; i < d; i++) {
            ans += 'R';
        }
        if (remm) {
            ans += 'R';
            remm--;
        }
        if (i != b) ans += 'B';
    }

    cout << ans << endl;

    return 0;
}
void SubStr() {
    string s;
    cin >> s;
    int index = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s.find(s[i], i + 1) >= s.length()) {
            index = i;
            break;
        }
    }
    cout << s.substr(index) << endl;
    return 0;
}
void ConsecutiveString() {
    //checks if there are consecutive characters in the string. 
    //If there are, it outputs "YES"; otherwise, it outputs "NO".
    string s;
    cin >> s;
    char prev = s[0];
    int ans = 1;
    bool res = true;

    if (s.length() == 1)
        res = false;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == prev) {
            ans++;
        } else {
            if (ans == 1) {
                res = false;
                break;
            } else {
                prev = s[i];
                ans = 1;
            }
        }
    }
    if (res && ans != 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
void BasedCondition()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && (s[i + 1] > '1' && s[i + 1] <= '9'))
        {
            int n = s[i + 1] - '0';
            for (int j = 0; j < n; j++)
                cout << s[i];
            i++;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            cout << s[i];
    }
    return 0;
}
void BasedCondition(){
    string s;
    int x;
    cin >> s;
    cin >> x;
    int z = 0;
    string k = "Final";

    while (z++ < x) {
        if (z == 1) {
            cout << s << endl;
            s += '-';
            continue;
        }
        s += k;
        if (z == x) {
            s += "Wallahy";
        }
        cout << s;
        if (z < x) {
            cout << endl;
        }
    }
    return 0;
}
void BasedCondition() {
    //takes input for the number of fruits (x), the names of the fruits (y), the number of people (f), 
    // & the names and preferences of each person. The output will be the name of the person with the maximum number of preferred fruits.
    int x, z = 0;
    cin >> x;
    string y[x];
    
    while (z++ < x)
        cin >> y[z - 1];

    int f, m;
    cin >> f;
    string name[f], d;
    int scr[f];
    z = 0;
    while (z++ < f)
        scr[z - 1] = 0;

    z = 0;
    
    while (z++ < f) {
        cin >> name[z - 1];
        cin >> m;
        int dd = 0;
        while (dd++ < m) {
            cin >> d;
            int r = 0;

            while (r++ < x)
                if (d == y[r - 1])
                    scr[z - 1]++;
        }
    }
    int max = 0;
    z = 1;
    while (z++ < f) {
        if (scr[z - 1] > scr[max])
            max = z - 1;

        if (scr[z - 1] == scr[max])
            if (name[z - 1] < name[max])
                max = z - 1;
    }
    cout << name[max];
    return 0;
}
