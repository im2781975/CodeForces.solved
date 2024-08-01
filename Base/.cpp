//computes and prints the number of ways to place two knights on an i x i chessboard 
//such that they do not attack each other.A knight can attack total 8 position in L shape.
//(i - 1) or (i - 2). (i−1)×(i−2) horizontally & (i - 2)*(i - 1) vertically.total ways 4*(i - 1)*(i - 2)
void knightAttack(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        //knight move
        int k = i * i;
        //knight can attach
        int a = k *(k - 1)/2;
        if(k > 2)
            a = a - 4*(i - 1)(i - 2);
        cout << a << " ";
    }
}

//construct a binary tree from user input
vector<int>vec(100, 0);
int create(int i){
    int x; cin >> x;
        if(x == 0)
            return 0;
    vec[i] = x;
    create(2 * i);
    create(2 * i + 1);
    return x;
}
void func(int i){
    if(i >= vec.size() || vec[i] == 0 )
        return;
    func(i * 2);
    cout << vec[i] << " ";
    func(i * 2 + 1);
}
main(){
    create(1);
    func(1);
    string str(1, char(127));
    cout << str;
}
int power(int nume, int denom, int mod){
    nume = nume % mod;
    if(denom == 0)
        return 1;
    if(denom % 2 == 0){
        int half = power(nume, denom / 2, mod);
        return (half * half) % mod;
    }
    else
        return (nume * power(nume, denom - 1, mod)) % mod;
}
void CalculateBitwise(){
    const int M = 1e9;
    int n; cin >> n;
    if(n < 31)
        cout << (1 << n) % M << "\n";
    else
        cout << "value to large";
    int x = 1;
    for(int i = 0; i < n; i++)
        x = 2 * x % M;
    cout << x;
}
//Access elements from spiral
void Spiral(){
    int row, col, ans;
    cin >> row >> col;
    if(row > col){
        if(row % 2 == 0)
            ans = (row * row) - col +1;
        else 
            ans = (row - 1)*(row - 1) + col;
    }
    else {
        if(col % 2 == 0)
            ans = (col - 1)*(col - 1) + row;
        else
            ans = (col * col) - row + 1;
    }
    cout << ans;
}
void checkPalindrome(){
    int n; cin >> n;
    if(n < 0)
        return 0;
    if(n == 0 || n == 1){
        cout << "palindrome";
        return 0;
    }
    int arr[n];
    int cnt = 0;
    while(n != 0){
        arr[cnt] = n % 10;
        cnt++;
        n /= 10;
    }
    int i = 0, j = cnt -1;
    while(i < j){
        if(arr[i] !=arr[j]){
            cout << "Not Plaindrome";
            return 0;
        }
        i++; j--;
    }
    cout << "palindrome";
    return 0;
}

//check is number contain all unique int
void IsUnique(){
    int n; cin >> n;
    if(n < 1000 && n > 9999){
        cout << "Invalid";
        return 0;
    }
    int digit[4];
    for(int i = 0; i < 4; i++)
        digit[i] = (n/static_cast<int>(pow(10, i))) % 10;
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(digit[i] == digit[j])
                cout << "Not unique";
        }
    }
    cout << "Unique";
}

//Identify if a number power of 2 or not
void IsPowered(){
    int n; cin >> n;
    /*for(int i = 0; i <= n; i++){
        if (pow(2, i) == n){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";*/
    if(n > 0 && (n & (n - 1)) == 0)
        cout << "Yes";
    else
        cout << "No";
}
void verify(){
    int n, x; cin >> n;
    (n == 2)? x = 2: x = 2*n - 4;
    cout << x;
}

//determine if the count of 'lucky' digits (4 and 7) in a given number n is exactly 4 or exactly 7. 
void Lucky(){
    int n; cin >> n;
    int cnt = 0;
    while(n !=0){
        int r = n % 10;
        n /= 10;
        if(r == 4 || r == 7)
            cnt++;
    }
    (cnt == 4 || cnt == 7)?cout << "Yes":cout << "No";
}

void WrongSubtraction(){
    int n, k; cin >> n >> k;
    for(int i = 0; i < k; i++){
        if(n % 10 == 0)
            n /= 10;
        else if(n % 10 !=0)
            n--;
    }
    cout << n;
}
//Find Minimum & diffrence between sum of these number & twice of minimum
void FindDiff(){
    int a, b, c;
    cin >> a >> b;
    if(a <= b)
        c = a;
    else
        c = b;
    cout << "Minimun is: " << c << "\nexpression is: " << (a + b - 2 * c);
}
//determine how many iterations it will take for the value of a to become greater than or
//equal to the value of b when a is tripled and b is doubled in each iteration.
void CountIteration(){
    int a, b, cnt = 0;
    cin >> a >> b;
    while(a < b){
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt;
}
void verifyCond(){
    int x, y;
    cin >> x >> y;
    if((2 *x - y) >= 0 && (2 *x - y) % 3 == 0 && (2 *y - x) >= 0 && (2 *y - x) % 3 == 0 )
        cout << "Yes";
    else
        cout << "No";
}

//determines if it is possible to reduce both a and b to zero by repeatedly performing 
//one of two operations: reducing a by 2 & b by 1, or reducing a by 1 & b by 2. 
// key observation here is that the sum of a & b must be divisible by 3, and
//neither a nor b can exceed twice the value of the other at any point.
void PairSame(){
    /*int a, b; cin >> a >> b;
    if((a + b) % 3 != 0){
        cout << "No";
        continue;
    }
    if(a > 2*b || b > 2*a){
        cout << "No";
        continue;
    }
    cout << "Yes";*/
    int a, b; cin >> a >> b;
    while(true){
        if(a == 0 || b == 0)
             break;
        else if((a + b) % 3 !=0)
            break;
        if((a % 3 == 0) && (b % 3 == 0)){
            a = 0; b = 0;
            break;
        }
        else {
            if(a > b){
                a -= 2; b -= 1;
            }
            else {
                a -= 1; b -= 2;
            }
        }
    }
    (a == 0 && b == 0)?cout << "Yes":cout << "NO";
}
