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