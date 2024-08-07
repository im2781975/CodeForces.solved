// calculate and display the number of letters in the English word represent of a given number between 1 and 999
int d1[10] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4}; // 1-9
int d2[10] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8}; // 10-19
int d3[10] = {0, 3, 6, 6, 6, 5, 5, 7, 6, 6}; // 20 - 90
int d4[10] = {0, 10, 10, 12, 11, 11, 10, 12, 12, 11}; // 100 - 900
int letter_count(int n) {
    if (n == 0) 
        return 0;
    if (n <= 9)
        return d1[n];
    if (n >= 10 && n <= 19)
        return d2[n % 10];
    if (n >= 20 && n <= 99)
        return d1[n % 10] + d3[n / 10]; // Tens and units
    if (n % 100 == 0)
        return d4[n / 100]; // Exact hundreds
    if (n % 100 >= 10 && n % 100 <= 19)
        return d4[n / 100] + 3 + d2[n % 10]; // Hundreds and teen numbers
    
    if (n > 100 && n % 100 <= 9)
        return d4[n / 100] + 3 + d1[n % 10]; // Hundreds and single digit
    if (n % 100 > 19 && n % 100 <= 99)
        return d4[n / 100] + 3 + d3[(n % 100) / 10] + d1[n % 10]; // Hundreds, tens, and units
    return 0; // For any unhandled case (though there shouldn't be any)
}
__main() {
    int number;
    cout << "Enter a number between 1 and 999: ";
    cin >> number;
    if (number < 1 || number > 999)
        cout << "Number out of range. Please enter a number between 1 and 999." << "\n";
     else{
        int count = letter_count(number);
        cout << "The number of letters in the word representation of " << number << " is: " << count << "\n";
    }
}

// calculate and display 2^exponent (2 raised to the power of the given exponent)
//and to find the sum of the digits of the resulting number. 
int multiply(int digits[], int num_digits) {
    int carry = 0;
    for (int i = 0; i < num_digits; i++) {
        int product = digits[i] * 2 + carry;
        digits[i] = product % 10;
        carry = product / 10;
    }
    while (carry) {
        digits[num_digits] = carry % 10;
        carry /= 10;
        num_digits++;
    }
    return num_digits;
}
void power2(int exponent) {
    int digits[500], num_digits = 1, digit_sum = 0;
    digits[0] = 1;
    for (int i = 1; i <= exponent; i++) {
        num_digits = multiply(digits, num_digits);
    }
    for (int i = num_digits - 1; i >= 0; i--) {
        cout << digits[i];
        digit_sum += digits[i];
    }
    cout << endl << digit_sum << endl;
}
__main() {
    int exponent;
    cout << "Enter the power: ";
    cin >> exponent;
    power2(exponent);
    return 0;
}
//0/1 knapsack
const int N = 1010;
int w, n;
int weight[N], item[N];
int dp[N][N];
void Knapsack(){
    cin >> w >> n;
    for(int i = 1; i <= n; i++)
        cin >> weight[i] << item[i];
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= w; j++){
            dp[i][j] = dp[i - 1][j];
            if(j >= weight[j])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - weight[i] + item[i]]);
        }
    }
    cout << dp[n][w];
}

//Print & sum the prime number
const int N = 1e7;
bool mark[N];
int prime[N/10], cnt = 0;
void printPrime(){
    mark[0] = mark[1] = false;
    for(int i = 2; i < N; i++)
        mark[i] = true;
    //fill(mark, mark + N, true)
    for(int i = 2; i < N; i++){
        if(mark[i] == true){
            prime[++cnt] = i;
            for(int j = i*2; j < N; j+= i)
                mark[j] = false;
        }
    }
    int sum = 0;
    for(int i = 0; i < 25; i++){
        cout << prime[i] << " ";
        sum += prime[i];
    }
    cout << "\nSum of the prime is: " << sum;
}
void ExecuteString(){
    int n; cin >> n;
    string word;
    for(int i = 0; i < n; i++){
        cin >> word;
        if(word.size() > 10)
            cout << word[0] << " " << word.size() - 2 << " " << word[word.size() - 1];
        else
             cout << word;
    }
}

//find and print the 1-based index of the unique element in
void uniqueIdx(){
    int k; cin >> k;
    int tmp = k;
    int res[k];
    for(int t = 0; t < k; t++){
        int n; cin >> n;
        int cnt = 0;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int uniqueIdx = -1;
        if(arr[0] != arr[1]){
            if(arr[1] == arr[2])
                uniqueIdx = 1;
                //First element is unique
            else
                uniqueIdx = 0;
                //second element is unique
        }
        else {
            for(int i = 0; i < n - 1; i++){
                if(arr[i]!= arr[i + 1]){
                    uniqueIdx = i + 1;
                    break;
                }
            }
        }
        res[t] = uniqueIdx + 1;
        //1 based idx
    }
    for(int i = 0; i < tmp; i++)
        cout << res[i] << " ";
}

//find the first occurrence where adjacent elements are different
void SpyDetect(){
    int k; cin >> k;
    int tmp = k;
    int result[k];
        while(k--){
        int n; cin >> n;
        int arr[n], cnt = -1;
            for(int i = 0; i < n; i++)
                cin >> arr[i];
        for(int i = 0; i < n - 1; i++){
            if(arr[i]!= arr[i + 1]){
                cnt = (i == 0 || i == 1) ? i : i + 1;
                break;
            }
        }
        result[k--] = cnt;
    }
    for(int i = 0; i < tmp; i++)
        cout << result[i] << " ";
}
// determine the minimum number of steps required to make two integers equal. 
void CountStep(){
    int n; cin >> n;
    vector <int> result(n);
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        int step = 0;
        if(a > b){
            int diff = a - b;
            (diff % 2 == 0)?step = 1: step = 2;
        }
        else if(a < b){
            int diff = b - a;
            (diff % 2 == 0)?step = 2: step = 1;
        }
        else
            step = 0;
        result[i] = step;
    }
    for(int i = 0; i < n; i++)
        cout << result[i] << " ";
}
//Sum consecutive integer Diffrence
void SumDiff(){
    int arr[3];
    for(int i = 0; i < 3; i++)
        cin >> arr[i];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for(int i = 0; i < 3; i++)
        arr[i] = abs(arr[i]);
    int x = abs(arr[1] - arr[0]);
    int y = abs(arr[2] - arr[1]);
    cout << x + y;
}
// find the smallest number greater than or equal to a given integer n 
// that consists of distinct digits in the range of 1000 to 9000
bool IsDistinct(int num){
    int w = num % 10; num /= 10;
    int x = num % 10; num /= 10;
    int y = num % 10; num /= 10;
    int z = num % 10;
    return (w != x && w != y && w != z && x != y && x != z && y != z);
}
__main(){
    int n; cin >> n;
    for(int i = n; i <= 9000; i++){
        if(IsDistinct(i)){
            cout << i;
            break;
        }
    }
}
// determine if all the levels from 1 to n are covered by the unique elements present in two given arrays. 
int RemoveDup(int *arr, int n){
    if(n == 0 || n == 1)
        return n;
    int tmp[n], j = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] != arr[i + 1])
            tmp[j++] = arr[i];
    }
    tmp[j++] = arr[n - 1];
    for(int i = 0; i < n; i++)
        arr[i] = tmp[i];
    return j;
}
__main(){
    int n; cin >> n;
    int a, b; cin >> a;
    int arr[a];
    for(int i = 0; i < a; i++)
        cin >> arr[i];
    a = RemoveDup(arr, a);
    cin >> b; int tmp[b];
    for(int i = 0; i < b; i++)
        cin >> tmp[i];
    b = RemoveDup(tmp, b);
    /*
    bool level[n + 1];
    for(int i = 0; i < a; i++)
        level[arr[i]] = true;
    for(int i = 0; i < b; i++)
        level[tmp[i]] = true;
    for(int i = 1; i <= n; i++){
        if(level[i] == false)
            return 0;
    }
    cout << "Here i am";
    */
    int cnt = n;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] == j)
                cnt--;
        }
    }
    for(int i = 0; i < b; i++){
        for(int j = 0; j < n; j++){
            if(tmp[i] == j)
                cnt--;
        }
    }
    (cnt == 0)?cout << "Become the Guy" : cout << "No one";
}
