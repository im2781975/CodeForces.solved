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

// Convert Binary To Decimal
void BinaryToDeciaml(){
    int n, sum = 0, i = 0;
    cin >> n;
    while(n > 0) {
        sum += (n % 10) * pow(2, i++);
        n /= 10;
    }
    cout << sum;
}

//transform a given string into a palindrome with the minimum number of
//character changes & then output the number of changes
void Transform(){
    int n; cin >> n;
    char *arr = new char[n + 1];
    cin >> arr;
    int i = 0, cnt = 0, last = n -1;
    while(i++ < n /2){
        if(arr[i] != arr[last]){
            cnt++;
            if(arr[i] < arr[last])
                arr[last] = arr[i];
            else
                arr[i] = arr[last];
        }
        i++; last--;
    }
    cout << cnt <<  " " << arr;
    delete []arr;
}

//Subtract n among a & b.in which player n will be zero,He will 
//be win.If neg another player will be win
void Distribute(){
    int a, b, n;
    cin >> a >> b >> n;
    while(true) {
        if(n  >= __gcd(a, n))
            n -= __gcd(a, n);
        else {
            cout << "Second Player wins";
            break;
        }
        if(n == 0) {
            cout << "First Player wins";
            break;
        }
        if(n >= __gcd(b, n))
            n -= __gcd(b, n);
        else {
            cout << "First Player win";
            break;
        }
        if(n == 0) {
            cout << "Second Player Wins";
            break;
        }
    }
    return 0;
}
