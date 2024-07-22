int Factorial(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * Factorial(n - 1);
}
main(){
    int n; cin >> n;
    cout << Factorial(n);
}

//****//

