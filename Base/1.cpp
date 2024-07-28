//calculates the sum of the integers a for which the corresponding string r starts with the character ch and prints this sum.
struct X{
    char r[100], int a;
}
main(){
    int n; cin >> n;
    struct X arr[100];
    //reads a character & integer from the array
    for(int i = 0; i < n; i++)
        cin >> arr[i].r >> arr[i].a;
    char ch; cin >> ch;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i].r[0] == ch)
            cnt += arr[i].a;
    }
    cout << cnt;
}

//Print elements in vector
void Print(){
    const int MAX = 1001;
    int n, x, cnt = 0;
    cin >> n;
    vector <int> vec(MAX, -1);
    for(int i = 0; i < n; i++){
        cin >> x;
        vec[x] = x;
    }
    for(int i = 0; i < MAX; i++){
        if(vec[i] != -1)
            cnt++;
    }
    cout << "\n";
    bool first = true;
    for(int i = 0; i < MAX; i++){
        if(vec[i] != -1){
            if(first){
                cout << vec[i] << " ";
                first = false;
            }
            else
                cout << vec[i] << " ";
        }
    }
    cout << "\n";
}

// check if there is any row or column in n*n grid that is completely filled with the character '*'.
void CheckCondition(){
    char arr[10][10];
    int rowCnt[10] = {0};
    int colCnt[10] = {0};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(arr[i][j] == '*'){
                rowCnt[i]++;
                colCnt[j]++;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        if(rowCnt[i] == 10 || colCnt[i] == 10){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}

// perform a series of arithmetic operations on a sequence of numbers 
//based on given operators, and then output the final result of these operations.
void Operation(){
    int n; cin >> n;
    char *arr = new char[n];
    double *dbl = new double[n + 1];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i <= n; i++)
        cin >> dbl[i];
    for(int i = 0; i < n; ++i){
        switch(arr[i]){
            case '+': dbl[i + 1] = dbl[i] + dbl[i + 1]; break;
            case '-': dbl[i + 1] = dbl[i] - dbl[i + 1]; break;
            case '*': dbl[i + 1] = dbl[i] * dbl[i + 1]; break;
            case '/': 
                if(dbl[i + 1] !=0)
                    dbl[i + 1] = dbl[i] / dbl[i + 1];
                else {
                    cout << "Division By Zero";
                    delete []arr;
                    delete []dbl;
                    return 1;
                }
                break;
            default:
                cout << "Invalid Operator";
                delete []arr;
                delete []dbl;
                return 1;
        }
    }
    cout << dbl[n];
    delete []arr;
    delete []dbl;
    return 0;
}

// counts the occurrences of b among these a integers and records the position of the
//first occurrence. Finally, it outputs the count and the position of the 
//first occurrence of b if found, otherwise, it outputs −1
void CountPos(){
    int a, b, x, cnt = 0, PosCnt = 0, pos;
    while(cin >> a >> b && a > 0 && b > 0){
        for(int i = 0; i < a; i++){
            cin >> x;
            if(x == b) {
                if(cnt == 0)
                    pos = PosCnt;
                cnt++;
            }
            PosCnt++;
        }
    }
    (cnt == 0)?cout << "-1":cout << cnt << " " << pos;
}

//determine whether the parity (even or odd nature) of the input numbers 
//matches the parity of their positions (index) in the sequence
void checkParity(){
    int num, cur, idx = 1 ,cnt = 0; 
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> cur;
        if((cur % 2 == 0 && idx % 2 == 0) || (cur % 2!= 0 && idx % 2 != 0))
            cnt++;
        idx++;
    }
    (cnt == idx)? cout << "Yes":cout << "No";
}

//Find Kth element which is not divisible by n
void kThElement(){
    int n, k;
    cin >> n >> k;
    cout << k + ((k - 1)/(n - 1));
}

//Find Maximum Element
int FindMax(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}
//Is the vector is sorted
bool IsSorted(vector <int> vec){
    for(int i = 1; i < vec.size(); i++){
        if(vec[i - 1] > vec[i])
            return false;
    }
    return true;
}
//determines whether a vector of integers has any local maximum
//A local maximum is an element that is greater than its immediate neighbors
bool LocalMax(vector <int> vec){
    for(int i = 1; i < vec.size(); i++){
        if(i !=vec.size() -1){
            if(vec[i] > vec[i - 1] && vec[i] < vec[i + 1])
                return true;
        }
        return false;
    }
}
//Is the string contain NonZero
bool Check(string str){
    for(int i = 0; i < str.length(); i++){
        if(str[i] != '0')
            return true;
    }
    return false;
}

//count the number of consecutive integers that are divisors of n
//Find the max length of such consecutive divisors and prints this max length.
void CountLength(){
    int n; cin >> n;
    int cnt = 0, maxSize = 0;
    int sqrt_n = sqrt(n);
    for(int i = 1; i <= sqrt_n; i++){
        if(n % i == 0)
            cnt++;
        else {
            maxSize = max(maxSize, cnt);
            cnt = 0;
        }
    }
    maxSize = max(maxSize, cnt);
    cout << maxSize;
}

//count how many times a sequence of input integers is greater than
//or less than the previous integer in the sequence.
void CountGreater(){
    int n, cur, prv;
    int high = 0, low = 0;
    cin >> n;
    if(n <= 1){
        cout << high << " " << low;
        return 0;
    }
    cin >> prv;
    for(int i = 0; i < n; i++){
        cin >> cur;
        if(cur > prv)
            high++;
        else if(cur < prv)
            low++;
        prv = cur;
    }
    cout << high << " " << low;
}
