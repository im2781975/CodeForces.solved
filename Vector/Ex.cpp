//finding the maximum product of four consecutive numbers in a grid
void MaxProduct(){
    int H, W;
    //Height & Weidth of the grid
    cin >> H >> W;
    int arr[20][20];
    vector <vector <int> > mp(H, vector <int> (W));
   /* mp.resize(H);
    for(int i = 0; i < H; ++i)
        mp.resize(W);*/
        
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++)
            cin >> mp[i][j];
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cout << mp[i][j] << " ";
            arr[i][j] = mp[i][j];
        }
        cout << "\n";
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    int maxi = INT_MIN, Hp = 1, Vp = 1, LDp = 1, RDp = 1;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(j + 3 < W) {
                Hp= mp[i][j] * mp[i][j+1] * mp[i][j+2] * mp[i][j+3];
                maxi = max(maxi, Hp);
            }
            if(i + 3 < H) {
                Vp = mp[i][j] * mp[i+1][j] * mp[i+2][j] * mp[i+3][j];
                maxi = max(maxi, Vp);
            }
            //top-left to bottom-right)
            if(i + 3 < H && j + 3 < W) {
                LDp= mp[i][j] * mp[i+1][j+1] * mp[i+2][j+2] * mp[i+3][j+3];
                maxi = max(maxi, LDp);
            }
            // (top-right to bottom-left)
            if(i + 3 < H && j - 3 >= 0) {
                RDp= mp[i][j] * mp[i+1][j-1] * mp[i+2][j-2] * mp[i+3][j-3];
                maxi = max(maxi, RDp);
            }
        }
    }
    cout << maxi;
}

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

//****//
//Determine combination
 FindComb(vector <char> &vec, string tmp, vector <string> &res, int k, int cnt, int n){
    if(cnt == n){
        if(tmp.size() == k)
            res.push_back(tmp);
        return;
    }
    FindComb(vec, tmp, res, k, cnt + 1, n);
    tmp += vec[cnt];
    FindComb(vec, tmp, res, k, cnt + 1, n);
    return;
}
void DetermineCombination(){
    vector <char> vec{'a', 'b', 'c'};
    int k = 2, cnt = 0;
    int n = vec.size();
    string tmp = "";
    vector <string> res;
    FindComb(vec, tmp, res, k, cnt, n);
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
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
