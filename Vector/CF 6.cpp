int olusola(int n, int x, int y) {
    vector<int> v(4);
    v[0] = x;
    v[1] = y;
    v[2] = n + 1 - x;
    v[3] = n + 1 - y;

    sort(v.begin(), v.end());
    return v[0];
}
int main() {
    int n, x, y;
    cout << "Enter the three values: ";
    cin >> n >> x >> y;
    cout << olusola(n, x, y);
}
int binarySearch(vector<int>& arr, int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main() {
    vector<int> a = { 2, 3, 4 };
    vector<int> b = { 5, 6, 7};
    int n = a.size();
    vector<int> c = a;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
        int index = binarySearch(a, 0, n - 1, c[i]);
        cout << b[index] << " ";
    }
    return 0;
}
void solve()
{
    int n, cnt = 0, ans = 1;
    int a[]{2, 3, 4, 5, 6};
     n = sizeof(a) / sizeof(a[0]);
    int b[]{6, 5, 4, 3, 2};
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = i; j < n; j++)
        {
            if (b[i] < a[j])
                cnt++;
            else
                break;
        }
        cout <<cnt << " ";
        ans = ans * cnt;
    }
    cout << ans;
}
void solve1() {
    int cnt = 0;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << "ME" << endl;
    int i = 0, j = n - 1;
    vector<int> v1;

    int diff = 0, diff1 = 1;
    while (i <= j) {
        if (v[i] != v[j]) {
            diff = abs(v[i] - v[j]);
            diff1 = min(v[i], v[j]);
            break;
        }
        i++;
        j--;
    }
    if (diff == 0) {
        cout << 0 << endl;
        return 0;
    }
    vector<int> v2(n);
    vector<int> v3(n);

    for (int i = 0; i < n; i++) {
        v2[i] = v[i] % diff;
        if (diff1 != 0)
            v3[i] = v[i] % diff1;
        else
            v3[i] = 0;
    }
    i = 0;
    j = n - 1;
    bool og1 = false, og2 = false;
    while (i <= j) {
        if (v2[i] != v2[j])
            og1 = true;
        if (v3[i] != v3[j])
            og2 = true;
        i++;
        j--;
    }
    if (og1 && og2) {
        cout << 1 << endl;
        return 0;
    } else if (og1) {
        cout << diff1 << endl;
        return 0;
    } else if (og2) {
        cout << diff << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if ((v[i] % diff) != 0) {
            cnt++;
        }
    }
    sort(v.begin(), v.end());
    if (v[0] == v[v.size() - 1]) {
        cout << v[0] << endl;
        return 0;
    } else {
        cout << 1 << endl;
        return 0;
    }
}
void solve_me()
{
    int n;
    cin >> n;
    vector<int>vec(n);
    int a=ceil(double(n)/2);
    for(int i=0; i<n; i+=2)
    {
        vec[i]=a;
        a--;
    }
    int b=n;
    for(int i=0; i<n; i+=2)
    {
        vec[i]=b;
        b--;
    }
    for(int i=0; i<vec.size(); i++)
        cout << vec[i] <<" ";
}
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 0; i < n; i++) 
        cin >> v1[i];
    int ans = 0;
    int i = n-1, j = n-1;

    while(i >= 0) {
        int temp = v1[j];

        if(temp != v[i])
            i--;
        else if(temp == v1[j]) {
            ans++;
            j--;
            i--;
        }
    }
    cout << n - ans << endl;
}
void solve_tc() {
    int n, k;
    cin >> n >> k;
    vector<int> v1(n);
    for (int i = 0; i < n; i++) 
        cin >> v1[i];

    vector<vector<int>> v;
    v.push_back(v1);

    vector<vector<int>> v3(k + 1, vector<int>(2));

    int ans = 0;
    int k1 = k;
    int cnt1 = 1;
    v3[0][0] = 1;
    v3[0][1] = v1[0];

    while (k1--) {
        cin >> v3[cnt1][0] >> v3[cnt1][1];
        cnt1++;
    }

    int k2 = k + 1;
    int cnt = 0;

    while (cnt < k) {
        v1[(v3[cnt][0]) - 1] = v3[cnt][1];

        int cnt2 = cnt + 1;
        vector<int> v2 = v1;

        while (cnt2 < k2) {
            vector<int> v2 = v1;
            v2[(v3[cnt2][0]) - 1] = v3[cnt2][1];

            set<int> op;

            for(int i=0; i<op.size(); i++)
                op.insert(v1[i]);
            for(int i=0; i<op.size(); i++)
                op.insert(v2[i]);
            ans += op.size();
            cnt2++;
        }
        cnt++;
    }
    cout << ans << endl;
}
int performOperations(const vector<int>& v1, vector<vector<int>>& v3, int k) {
    vector<int> v2 = v1;
    int ans = 0;

    for (int cnt = 0; cnt < v3.size(); cnt++) {
        int pos = v3[cnt][0];
        int value = v3[cnt][1];

        v2[pos - 1] = value;
        v2[(v3[cnt][0]) - 1] = v3[cnt][1];

        for (int i = 0; i < k; i++) {
            for (int j = i + 1; j < k + 1; j++) {
                set<int> op;
                for (int me : v1) {
                    op.insert(me);
                }
                for (int me : v2) {
                    op.insert(me);
                }
                ans += op.size();
            }
        }
    }
    return ans;
}
int main() {
    int pos, value, k;
    vector<int> v1; 
    vector<vector<int>> v3;
    cin >> pos >> value >> k;
    
    vector<vector<int>> v;
    int result = performOperations(v1, v3, k);
    cout << "Result: " << result << endl;

    return 0;
}
void Matching Pair()
{
    //https://codeforces.com/problemset/problem/1788/C
    int n;
    cin >> n;
    if(n%2==0)
        cout << "No";
    else
    {
        cout << "Yes";
        vector<pair<int, int>> ans(n);
        int nxt=2*n;
        for(int i=0; i<n; i++)
        {
            ans[i].second=nxt;
            nxt--;
        }
        nxt = 1;
        for(int i=0; i<=n/2; i++)
        {
            ans[i].first=nxt;
            nxt+=2;
        }
        nxt = 2;
        for(int i=(n/2)+1; i<n; i++)
        {
            ans[i].first=nxt;
            nxt+=2;
        }
        cout << "\n";
        for(auto val:ans)
            cout <<val.first << " " << val.second << "\n";
    }
}
