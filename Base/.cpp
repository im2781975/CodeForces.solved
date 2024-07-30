// Count production Time
void CountTime(){
    int n = 10000, UMP = 600 / 60;
    //n->Initial Quantity, UMP->units per min
    int TotalTime = 0;
    while(n){
        if(n - 600 < 0){
            TotalTime += n / UMP;
            break;
        }
        else {
            n -= 300;
            TotalTime += 30;
        }
    }
    cout << TotalTime;
}

void CntMin(){
    int cnt = 0;
    for(int i = 1922; i <= 2020; i++){
        if((i % 4 == 0 && i % 100 !=0) || (i % 400 == 0))
            cnt += 366;
        else
            cnt += 365;
    }
    cout << cnt * 24 * 60;
}

//EuclidGCD
int EuclidGCD(int a, int b){
    if(b == 0)
        return a;
    int rem = a % b;
    return EuclidGCD(b, rem);
}
main(){
    int a, b;
    cin >> a >> b;
    cout << EuclidGCD(a, b);
    
}

void BinaryConv(){
    int num; cin >> num;
    for(int i = 31; i >= 0; i--){
        if(num & (1 << i))
            cout << "1";
        else 
            cout << "0";
    }
}

//define is a number prime or not.if prime it will be Intelligeng.else stupid
int check(int num){
    if(num <= 1)
        return 0;
    for(int i = 2; i * i <= num; ++i){
        if(num % i == 0)
            return 0;
    }
    return 1;
}
main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(check(x)){
            (i == x)? cout << "Intelligent":cout << "Intelligent";
        }
        else {
            (i == x)? cout << "Stupid" :cout << "Stupid";
        }
    }
}

//divide an integer n into part parts, each of which should not exceed limit. 
void DivideIntoPart(){
    int n, part, limit;
    cin >> n >> part >> limit;
    for(int i = 0; i < part; i++){
        if(n >= limit){
            n -= limit;
            cout << limit;
        }
        else{
            cout << n;
            n = 0;
        }
        if(i < part -1)
            cout << " ";
    }
}

void AddVal(){
    int ans = 0;
    for(int i = 0; i < 2; i++){
        ans += 4;
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 6; k++)
                ans += 5;
            ans += 7;
        }
        ans += 8;
    }
    ans += 9;
    cout << ans;
}

void compareSQRT(){
    int x, y;
    cin >> x >> y;
    (sqrt(x * x + y * y) == int(sqrt(x * x + y * y)))? cout << "Same" : cout << "Not same";
}
void IsDivisible(){
    int x, y; cin >> x >> y;
    int Ind = x % y;
    (Ind == 0)?cout << "Yes":cout << "No";
}

//find the divisor of 100 that minimizes the expression 
//involving the quotient and the divisor itself. 
void FindDivisor(){
    int ans = 0, sum = INT_MAX;
    for(int i = 1; i <= 100; i++){
        if(100 % i == 0){
            int tmp = 100/i + i;
            if(tmp < sum){
                sum = tmp;
                ans = i;
            }
        }
    }
    cout << ans;
}

void CntRunAvg(){
    int n; cin >> n;
    int score[n + 10], sum = 0;
    int maxi = INT_MIN, mini = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> score[i];
        maxi = max(score[i], maxi);
        mini = min(score[i], mini);
        sum += score[i];
    }
    double avg = double(sum)/double(n);
    cout << "Average is: " << avg << "\nMaximum is: " << maxi << "\nMinimum is: " << mini;
}
