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

//****//
//recursively checks subgrids by removing rows and columns that contain 1s and counts how many valid configurations exist.
int Combinatorial(int n, vector <vector <int> >&vec, map<vector <vector<int>>, int>&mp){
    //Checks if the current grid configuration a is already in the memoization map m.
    if(mp.count(vec) == 1)
        return mp[vec];
    //if 1*1 matrix
    if(n == 1){
        mp[vec] = (vec[0][0] == 1)? 1: 0;
        return mp[vec];
    }
    for(int i = 0; i < n; i++){
        int rowSum = 0;
        for(int j = 0; j < n; j++)
            rowSum += vec[i][j];
        if(rowSum == 0) {
            mp[vec] = 0;
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        int colSum = 0;
        for(int j = 0; j < n; j++)
            colSum += vec[j][i];
        if(colSum == 0){
            mp[vec] = 0;
            return 0;
        }
    }
    int x = -1, y = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vec[i][j] == 1){
                x = i; y = j;
                break;
            }
        }
    }
    cout << "\nCo-ordinates which contain 1 is: " << x << "," << y << "\n";
    //construct a new grid from the original grid excluding the row & column
    vector<vector<int> >remain(n-1, vector <int> (n-1));
    //remain is the row index for the new grid
    for(int i = 0, bi = 0; i < n; i++) {
        if(i == x)
            continue;
        for(int j = 0, bj = 0; j < n; j++){
            if(j == y)
                continue;
            remain[bi][bj++] = vec[i][j];
        }
        bi++;
    }
    // Sets the element at position (x, y) in the original grid to 0.
    vec[x][y] = 0;
//Calls the function recursively with the modified grid where the element 
//at (x, y) is set to 0.ans1 stores the result of this recursive call, which represents the 
//number of ways to process the grid a with the specific 1 at (x, y) removed.
    int ans1 = Combinatorial(n, vec, mp);
//Restores the original grid a by setting the element at position (x, y) back to 1.
    vec[x][y] = 1;
//Calls the remain function recursively with the smaller grid
//ans2 stores the result of this recursive call, representing the number of ways to process the smaller grid.
    int ans2 = Combinatorial(n - 1, remain, mp);
   // vec[x][y] = 1;
    mp[vec] = ans1 + ans2;
    return mp[vec];
}
void CountConfigur(){
    int n; cin >> n;
    vector<vector <int> >vec(n, vector <int> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> vec[i][j];
    }
    map<vector <vector<int>>, int> mp;
    cout << Combinatorial(n, vec, mp);
}

//This portion of the code defines and uses a function to search for 
//a path in a grid from a starting point to a destination marked by the character 'B'. 
void FindPath(int x, int y, int row, int col, vector <vector<char>>&cev, vector <vector <int> > &vec, int cnt, string str, string *res){
    if(x < 0 || y < 0 || x >= row || y >= col)
        return;
    //cnt: Counter for the steps taken so far.
    //str: Current path as a string of directions.
    //res: Pointer to the result string that stores the final path.
    if(vec[x][y] <= cnt && vec[x][y] != -1)
        return;
    if(cev[x][y] == '#'){
        vec[x][y] = -1;
        return;
    }
    vec[x][y] = cnt;
    if(cev[x][y] == 'B'){
        *res = str;
        return;
    }
    FindPath(x + 1, y, row, col, cev, vec, cnt + 1, str + "D", res);
    FindPath(x - 1, y, row, col, cev, vec, cnt + 1, str + "U", res);
    FindPath(x , y + 1, row, col, cev, vec, cnt + 1, str + "R", res);
    FindPath(x , y - 1, row, col, cev, vec, cnt + 1, str + "L", res);
}
void SearchPath(){
    int row, col;
    cin >> row >> col;
    vector <vector <char> >cev(row, vector<char> (col));
    vector <vector <int> >vec(row, vector <int>(col, INT_MAX));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cin >> cev[i][j];
    }
    //starting position
    int x, y;
    cin >> x >> y;
    string res;
    FindPath(x, y, row, col, cev, vec, 0, "", &res);
    if (res.empty())
        cout << "No path found to the destination 'B'.\n";
    else 
        cout << "Path to destination 'B': " << res << "\n";
}
