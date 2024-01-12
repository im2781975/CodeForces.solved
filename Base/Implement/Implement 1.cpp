int main(){
    int t;
    cin >> t;
    while(t){
        int a, b;
        cin >> a >> b;
        int ans = 0;
        if(a == 0) ans = 1;
        else ans = a + 2 * b + 1;
        cout << ans << endl;
        t--;
    }
    return 0;
}

