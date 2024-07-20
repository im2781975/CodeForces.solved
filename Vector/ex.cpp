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
