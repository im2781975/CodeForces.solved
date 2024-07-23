int Factorial(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * Factorial(n - 1);
}
main(){
    int n; cin >> n;
    cout << Factorial(n);
}

void CountDigit(){
    int n; cin >> n;
    int cnt = 0;
    while(n !='\0'){
        n /= 10; cnt++;
    }
    cout << cnt;
}

void Lucky(){
    int x; cin >> x;
    int arr[]{4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777};
    bool flag = false;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n && arr[i] <= x; i++){
        if(x % arr[i] == 0){
            flag = true;
            break;
        }
    }
    (flag)?cout << "Yes":cout << "No";
}

void Reverse(){
    int n; cin >> n;
    int rev = 0;
    while(n!='\0'){
        rev = rev * 10 + (n% 10);
        n/= 10;
    }
    cout << rev;
}

//Count 1's in Binary
int Binary(int x) {
    int cnt = 0;
    while(x > 0){
        if(x % 2 == 1)
            cnt++;
        x /= 2;
    }
    return cnt;
}
int hex(int n){
    int x = 0, cnt = 0;
    while(n > 0){
        x += (n % 10) * pow(16 ,  cnt++);
        n /= 10;
    }
    return Binary(x);
}
main(){
    int n; cin >> n;
    cout << "Total 1s is: " << hex(n);
}

//determine maximum, minimum & subarray sum
void SubArraySum(){
    int n; cin >> n;
    int arr[n + 2];
    int i = 1;
    while(i++ < n)
        cin >> arr[i -1];
    int query; cin >> query;
    while(query--){
        int x, y, sum = 0;
        cin >> x >> y;
        if(x > y)
            swap(x, y);
        int first = x - 1;
        int last = y - 1;
        int maxi = first, mini = first;
        for(int i = first; i <= last; i++) {
            sum += arr[i];
            if(arr[i] > arr[maxi])
                maxi = i;
            if(arr[i] < arr[mini])
                mini = i;
        }
        cout << arr[maxi] <<  " " << arr[mini] << " " << sum;
    }
}
