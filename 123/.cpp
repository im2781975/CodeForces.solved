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
using namespace std;
void SystemEquation(){
    int n, m, cnt = 0; cin >> n >> m;
    for(int i = 0; i <= mac(m, n); i++){
        for(int j = 0; j <= max(m, n); j++){
            if((i * i + j == n) && (j * j + i == m))
                cnt++;
        }
    }
    cout << cnt;
}
using namespace std;
void CandyBags(){
    int n; cin >> n;
    for(int i = 1, j = n * n; i <= j; i++, j--)
        cout << i << " " << j << "\n";
}
using namespace std;
void LLPS(){
    string str; cin >> str;
    int freq[26] = {0};
    for(int i = 0; i < str.size(); i++)
        freq[str[i] - 'a']++;
    while(freq[str[str.size() - 1] - 'a']--)
        cout << str[str.size() - 1];
}
using namespace std;
void ChewbaсcaAndNumber(){
    string str; cin >> str;
    if(str[0] != '9' && str[0] >= 5)
        str[0] = '9' - str[0] + '0';
    cout << str[0];
    for(int i = 1; i < str.size(); i++){
        if(str[i] >= 5)
            str[i] = '9' - str[i] + '0';
        cout << str[i];
    }
}
void ChewbaсcaAndNumber(){
    string str; cin >> str;
    if(str[0] == '9')
        cout << str[0];
    else
        cout << (str[0] < '5' ? str[0] : '9' - (str[0] - '0'));
    for(int i = 1; i < str.size(); i++)
        cout << (str[i] < '5' ? str[i] : '9' - (str[i] - '0'));
}
using namespace std;
void BoredLife(){
    int a, b, fact = 1; cin >> a >> b;
    for(int i = 1; i <= min(a, b); i++)
        fact *= i;
    cout << fact;
}
using namespace std;
void NextRound(){
    int n, k, cnt = 0; cin >> n >> k;
    k--;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 0; i < n; i++){
        if(vec[i] && vec[i] >= vec[k])
            cnt++;
    }
    cout << cnt;
}
using namespace std;
void LongestUncommonSubsequence(){
    string a, b; cin >> a >> b;
    if(a == b)
        cout << "-1";
    else
        cout << max(a.size(), b.size());
}
using namespace std;
//1450B
void BallsOfSteel(){
    int n, k; cin >> n >> k;
    int x[n], y[n];
    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    bool found = false;
    for(int i = 0; i < n; i++){
        bool withDist = true;
        for(int j = 0; j < n; j++){
            if(i != j){
                long long dist = abs(x[i] - x[j]) + abs(y[i] - y[j]);
                if(d > k){
                    withDist = false;
                    break;
                }
            }
        }
        if(withDist){
            found = true;
            break;
        }
    }
    if(found)
        cout << 1;
    else
        cout << -1;
}
using namespace std;
//1453A
void CancelTheTrain(){
    int m, n, cnt = 0; cin >> m >> n;
    int bottom[n], left[m];
    for(int i = 0; i < n; i++)
        cin >> bottom[i];
    for(int i = 0; i < m; i++)
        cin >> left[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(bottom[i] == left[j])
                cnt++;
        }
    }
    cout << cnt;
}
