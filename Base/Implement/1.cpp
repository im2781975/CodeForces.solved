//****//
int Fact(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * Factorial(n - 1);
}
void Factorial(){
    int n; cin >> n;
    cout << Fact(n);
}
//****//

