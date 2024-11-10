using namespace std;
void AlyonaAndNumbers(){
    int n, m; cin >> n >> m;
    int arr[5] = {0}, tmp[5] = {0};
    for(int i = 1; i <= n; i++)
        arr[i % 5]++;
    for(int i = 1; i <= m; i++)
        tmp[i % 5]++;
    cout << arr[0] * tmp[0] + arr[1] * tmp[4] + arr[2] * tmp[3] + arr[3] * tmp[2] + arr[4] * tmp[1];
}
using namespace std;
void PenguinAndSegments(){
    int n, k, sum = 0; cin >> n >> k;
    while(n--){
        int l, r; cin >> l >> r;
        sum += r - l + 1;
    }
    if(sum % k == 0)
        cout << "0";
    else
        cout << k - (sum % k);
}
using namespace std;
void LuckyTicket(){
    int n, sum1 = 0, sum2 = 0;
    string str; cin >> n >> str;
    for(int i = 0; i < n / 2; i++){
        if(str[i] == '7' || str[i] == '4')
            sum1 += str[i] - '0';
        else{
            cout << "No";
            return 0;
        }
    }
    for(int i = n - 1; i >= n / 2; i--){
        if(str[i] == '7' || str[i] == '4')
            sum2 += str[i] - '0';
        else{
            cout << "No";
            return 0;
        }
    }
    (sum1 == sum2) ? cout << "Yes" : cout << "No";
}
using namespace std;
void LunchRush(){
    int n, k, mx = INT_MIN;
    cin >> n >> k;
    while(n--){
        int x, y; cin >> x >> y;
        if(y > k) 
            mx = max(mx, x - (y - k));
        else
            mx = max(mx, x);
    }
    cout << mx;
}
using namespace std;
void AmusingJoke(){
    string a, b, c, str = " ";
    cin >> a >> b >> c;
    str = a + b;
    if(str.size() > c.size()){
        cout << "No";
        return 0;
    }
    sort(c.begin(), c.end());
    sort(str.begin(), str.end());
    //(str == c) ? cout << "Yes" : cout << "No";
    int arr[26] = {0}, tmp[26] = {0};
    for(int i = 0; i < str.size(); i++)
        arr[str[i] - 'A']++;
    for(int i = 0; i < c.size(); i++)
        tmp[c[i] - 'A']++;
    for(int i = 0; i < 26; i++){
        if(arr[i] != tmp[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
