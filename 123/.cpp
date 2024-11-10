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
