#include<iostream>
#include<string>
using namespace std;
string caps(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        else if(s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
    }
    return s;
}
void MakeCapital(string s)
{
    if(s[0] >= 97 && s[0] <= 122)
    {
        int z = 1;
        while(z < s.size())
        {
            if(s[z] >= 97 && s[z] <= 122)
            {
                cout << caps(s);
                return;
            }
            z++;
        }
        cout << caps(s);
    }
    else
    {
        int z = 1;
        while(z < s.size())
        {
            if(s[z] >= 97 && s[z] <= 122)
            {
                cout << caps(s);
                return;
            }
            z++;
        }
        cout << caps(s);
    }
}
void BasedCondition() {
    int n, k;
    cin >> n >> k;
    int total = k;
    string s;
    cin >> s;
    string temp = s;
    vector<int> ans(n, 0);
    int flip = 0; 
    for(int i = 0; i < n; i++) {
        if(k == 0) break;
        int bitt = s[i] - '0';
        if((bitt == 0 && flip % 2 == 0) || (bitt == 1 && flip % 2 == 1)) {
            if(k % 2 == 0) {
                // even 
                ans[i]++;
                flip++;
                k--;
                if(k == 0) break;
            }
        } else {
            if(k % 2 != 0) {
                // odd
                ans[i]++;
                flip++;
                k--;
                if(k == 0) break;
            }
        }
    }
    if(k) {
        ans[n - 1] += k;
    }
    for(int i = 0; i < n; i++) {
        if((total - ans[i]) % 2 == 1) {
            if(temp[i] == '0') {
                temp[i] = '1';
            } else {
                temp[i] = '0';
            }
        }
    }
    cout << temp << endl;
    for(auto i : ans) {
        cout << i << " ";
    }
    cout << endl;
}
void BasedCondition(){
    int t;
    cin >> t;
    
    while(t){
        int n, a, b;
        cin >> n >> a >> b;
        
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        vector<int> prefix(n, 0);
        prefix[0] = arr[0];

        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i - 1] + arr[i];
        }

        int ans = prefix[n - 1] * b;
        int prev = b * arr[0];

        for(int i = 0; i < n; i++){
            ans = min(ans, prev + arr[i] * a + (prefix[n - 1] - prefix[i] - (n - i - 1) * arr[i]) * b);
            if(i + 1 != n){
                prev += (arr[i + 1] - arr[i]) * b;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
void BasedCondition(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = INT_MIN ;
    for(auto i:arr){
        maxi = max(maxi , i);
    }
    vector<int> maxelems ;
    for(int i=0;i<n;i++){
        if(arr[i]==maxi){
            maxelems.push_back(i);
        }
    }
    int size = maxelems.size();
    int zero = size/2;
    if(zero!=0){
        int k = -1;
        for(int i=zero-1 ;i>=0;i--){
            k = maxelems[i];
            arr[k] = 0;
        }
    }
    return 0;
}
void BasedCondition(){
    // https://codeforces.com/contest/1859/problem/A
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = 0;
    bool f = false;
    vector<int> b, c;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    for(int i = 0; i < n; i++) {
        if(v[i] == mx) c.push_back(v[i]);
        else b.push_back(v[i]);
    }

    if(b.size() == 0 || c.size() == 0) {
        cout << -1 << "\n";
        return 0;
    }

    cout << b.size() << " " << c.size() << "\n";
    for(auto i : b) cout << i << " ";
    cout << "\n";
    for(auto i : c) cout << i << " ";
    cout << "\n";

    return 0;
}
void solve_ballonIcpc()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int tmp = 0;
    char arr[50] = {0};
    for (int i = 0; i < n; i++)
    {
        if (arr[s[i]] == 0)
            tmp += 2;
        else
            tmp += 1;
        arr[s[i]]++;
    }
  cout << tmp << "\n";
}
void solveContest1790ProblemA()
{
    string s = "314159265358979323846264338327";
    string ns;
    cin >> ns;
    int temp = 0;
    for (int i = 0; i < ns.length(); i++)
    {
        if (ns[i] == s[i])
            temp++;
        else
            break;
    }
    cout << temp << "\n";
}
int main()
{
    string s;
    cin >> s;
    MakeCapital(s);
    cout<<caps(s);
    return 0;
}
