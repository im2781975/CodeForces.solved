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
