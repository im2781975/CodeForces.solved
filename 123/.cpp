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
