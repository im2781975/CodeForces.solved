//calculates the difference between the sum of the max elements
// and the sum of the min elements in each vector.
void MaxDiff(){
    int n; cin >> n;
    int mid = n/2;
    vector <int> vec(mid), cev(mid);
    if(n % 2 == 0){
        for(int i = 0; i < n/2; i++)
            cin >> vec[i];
        for(int i = 0; i < n/2; i++)
            cin >> cev[i];
    }
    else {
        for(int i = 0; i < mid; i++) 
            cin >> vec[i];
        for(int i = 0; i < mid; i++)
            cin >> cev[i];
    }
    sort(vec.begin(), vec.end());
    sort(cev.begin(), cev.end());
    cout << "\nDiffrence is: " <<  (vec[mid -1] + cev[mid - 1]) - (vec[0] + cev[0]);
}
