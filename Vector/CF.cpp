
void solve_div4c()
{
    //finding the minimum sum of two integers where one integer corresponds to the
    //first occurrence of "01" in the string and the other integer corresponds to the 
    //first occurrence of "10" in the string. If both occurrences are found, it calculates and prints the minimum sum; otherwise, it prints -1.
    int n, temp1 = 0, temp2 = INT_MAX, a = 0, b = 0, t = 0, t2 = 0, c1 = 0, c2 = 0; 
    cin >> n;
    vector<pair<int, string>> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
        if (vec[i].second == "01" && c1 == 0) 
        {
            a++;
            t = vec[i].first;
            c1++;
        } else if (vec[i].second == "10" && c2 == 0) {
            b++;
            t2 = vec[i].first;
            c2++;
        } else if (vec[i].second == "11") {
            a++;
            b++;
            temp1 = vec[i].first;
        }
    }
    sort(vec.begin(), vec.end());
    if (c1 > 0 && c2 > 0) {
        temp2 = min(t + t2, temp2);
        cout << temp2 << "\n";
    } else {
        cout << -1 << "\n";
    }
}
