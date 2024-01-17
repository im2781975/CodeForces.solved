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
