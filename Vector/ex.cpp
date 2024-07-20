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
