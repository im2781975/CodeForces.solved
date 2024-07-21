
void solve_tc() {
    int n, k;
    k = number of updates
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
