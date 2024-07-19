//****//
int sum(const vector <int> &vec){
    int res = 0;
    for(int i = 0; i < vec.size(); i++)
        res += vec[i];
    return res;
}
void print(vector <int> &vec){
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}
void Manipulate(){
    int n, k; cin >> n >> k;
    vector <int> vec(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        vec[i] = x;
    }
    int trv = 0, ans = -1;
    int maxi = *max_element(vec.begin(), vec.end());
    int mini = *min_element(vec.begin(), vec.end());
    while(maxi <= k){
        sort(vec.begin(), vec.end());
        vec[1] += vec[0];
        ans+= 1; k--;
    }
    cout << ans ;
    cout << "\nElements of vect are: ";
    print(vec);
    for(int i = 0; i < n; i++){
        if(vec[i] % 2 == 0)
            trv = i;
    }
    cout << "\ntrv: " << trv << "\n";
    sort(vec.begin(), vec.end());
    (mini != 1)?cout << maxi :cout << mini + 1;
    int cnt = 0;
    while(sum(vec) > n){
        cout << "\nElements of vect are: ";
        print(vec);
        cout << "\nSum of the elements are: " << sum(vec);
        for(int i = 0; i < n; i++){
            if(vec[i] > mini)
                vec[i] -= mini;
        }
        cout << "\nElements of vect are: ";
        print(vec);
        cnt += 1;
        break;
    }
    cout << "\ncnt: " << cnt + 1;
}
//****//

//finding the minimum sum of two integers first corresponds to the "01" in the string &
//the other corresponds "10" in the string. If both occurrences are found, 
//it calculates & prints the minimum sum & compare with other string "11". otherwise, it prints -1.
void MinSum() {
    int n, cnt01 = 0, cnt10 = 0, found01 = 0, found10 = 0, cont01 = INT_MAX, cont10 = INT_MAX, tmp2 = INT_MAX, tmp1 = INT_MAX;
    // tmp1 is used to store the minimum integer associated with the string "11".
    // tmp2 will be used to store the min sum of integers associated with "01" and "10"
    cin >> n;
    vector<pair<int, string>> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i].first >> vec[i].second;
        
    for(int i = 0; i < n; i++) {
        if(vec[i].second == "01") {
            cnt01++;
            cont01 = min(cont01, vec[i].first);
            found01 = 1;
        }
        else if(vec[i].second == "10") {
            cnt10++;
            cont10 = min(cont10, vec[i].first);
            found10 = 1;
        }
        else if(vec[i].second == "11") {
            cnt01++; cnt10++;
            tmp1 = min(tmp1, vec[i].first);
        }
    }
    if(found01 > 0 && found10 > 0)
        tmp2 = min(cont01 + cont10, tmp2);
    
    if(tmp1 == INT_MAX && tmp2 == INT_MAX)
        cout << -1;
    else
        cout << min(tmp1, tmp2);
}
