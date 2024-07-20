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
