void PrimeFactor(){
    int n; cin >> n;
    vector <int> prime;
    if(n % 2 == 0){
        prime.push_back(2);
        while(n % 2 == 0)
            n /= 2;
    }
    for(int i = 3; i * i <= n; i +=2){
        prime.push_back(i);
        while(n % i == 0)
            n/= i;
    }
    if(n > 2)
        prime.push_back(n);
    for(int i = 0; i < prime.size(); i++)
        cout << prime[i] << " ";
}

// checks if the vector is sorted in increasing order. If it is, calculates the minimim diff 
//between consecutive elements and outputs half of this difference plus one. If not sorted, outputs 0.
void ConsecutiveDiff(){
    int n; cin >> n;
    vector <int> vec(n);
    bool flag = true;
    int tmp = INT_MAX;
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 1; i < n; i++){
        if(vec[i] < vec[i-1]){
            flag = false;
            break;
        }
    }
    if(flag){
        for(int i = 1; i < n; i++)
            tmp = min(tmp, vec[i] - vec[i - 1]);
        cout << tmp/2 + 1;
    }
    else
        cout << 0;
}

//determine to finds the shortest  from the point (x, y) to any of the four edges of the grid.
// find and print the minimum distance from a given point (x, y) to any edge of an n x n grid.
int FindMinEdge(int n, int x, int y){
    vector <int> vec(4);
    vec[0] = x;
    vec[1] = y;
    vec[2] = n + 1 - x;
    vec[3] = n + 1 - y;
    sort(vec.begin(), vec.end());
    return vec[0];
}
void MinEdge(){
    int n, x, y;
    cin >> n >> x >> y;
    cout << FindMinEdge(n, x, y);
}

//Display vector Based Other Vector
int BSearch(vector <int> &vec, int low, int high, int key){
    while(low <= high){
        int mid = low + (high - low)/2;
        if(vec[mid] == key)
            return mid;
        else if(vec[mid] > key)
            high = mid -1;
        else if(vec[mid] < key)
            low = mid + 1;
    }
    return -1;
}
void BasedOtherVector(){
    vector <int> a{2, 3, 4};
    vector <int> b{5, 6, 7};
    vector <int> c = a;
    for(int i = 0; i < a.size(); i++){
        int idx = BSearch(a, 0, a.size() - 1, c[i]);
        cout << b[idx] << " ";
    }
}

//Count How many Elements are less than other array
void Count(){
    int a[]{2, 3, 4, 5, 6};
    int b[]{6, 5, 4, 3, 2};
    int n = sizeof(a)/sizeof(a[0]);
    int cnt = 0, ans = 1;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(b[i] < a[j])
                cnt++;
            else
                break;
        }
    }
    ans *= cnt;
    cout << ans;
}

//determine a array where pair diffrence is samw
void PairDiff(){
    int n; cin >> n;
    vector <int> vec(n);
    int a = ceil(double(n) /2);
    for(int i = 0; i < n; i+= 2){
        vec[i] = a; a--;
    }
    int b = n;
    for(int i = 1; i < n; i+= 2){
        vec[i] = b; b--;
    }
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}

//determine How many elements didn't match in the sequence
void CountDismatch(){
    int n; cin >> n;
    vector <int> vec(n), cev(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 0; i < n; i++)
        cin >> cev[i];
    int ans = 0, i = n -1, j = n-1;
    while(i >= 0) {
        int tmp = cev[i];
        if(tmp !=vec[i])
            i--;
        else if(tmp == vec[i]) {
            ans++;
            i--; j--;
        }
    }
    cout << n - ans;
}

//Determine Is the programme palindromic
void IsPalindrome(){
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    int cnt = 0, diff = 0, mini = 1;
    int i = 0, j = n -1;
    while(i <= j){
        if(vec[i] !=vec[j]){
            diff = abs(vec[i] - vec[j]);
            mini = min(vec[i], vec[j]);
            break;
        }
        i++, j--;
    }
    if(diff == 0) {
        cout << 0;
        return 0;
    }
    vector <int> cev(n), tor(n);
    for(int i = 0; i < n; i++){
        cev[i] = vec[i] % diff;
        tor[i] =(mini !=0) ? (vec[i] % mini) : 0;
    }
    
    i = 0, j = n -1;
    bool flag = false, band = false;
    while(i <= j) {
        if(cev[i] !=cev[j])
            flag = true;
        else if(tor[i] !=tor[j])
            band = true;
        i++; j--;
    }
    if(flag && band)
        cout << 1;
    else if(flag)
        cout << mini;
    else if(band)
        cout << diff;
    else {
        for(int i = 0; i < n; i++){
            if(vec[i]% diff != 0)
                cnt++;
        }
        sort(vec.begin(), vec.end());
        (vec[0] == vec[n - 1])? cout << vec[0] : cout << 1;
    }
}

//Distribute deduct among n elememts
void Distribute(){
    int n, sum, deduct, cnt = 1;
    cin >> n >> sum >> deduct;
    int tmp = deduct;
    vector <int> result;
    vector <int> sides{1, 2, 3, 4, 5, 6 };
    for(int i = 0; i < n - 1; i++){
        for(int j = 5; j < 0; j--){
            while(deduct >= sides[j] && sides[j] <= sum - deduct) {
                deduct -= sides[j];
                result.push_back(sides[j]);
                cnt++;
            }
        }
    }
    sort(result.rbegin(), result.rend());
    for(int i = 0; i < n - 2; i++){
        while(result[i] > 1) {
            if(result.size()== n -1)
                break;
            result[i]--;
            result.push_back(1);
        }
    }
    result.push_back(sum - tmp);
    if(result.size() > n){
        result[n - 1] += result.back();
        result.pop_back();
    }
    else 
        result.push_back(1);
    for(int i = 0; i < n; i++)
        cout << result[i] << " ";
} 
