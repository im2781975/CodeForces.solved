#include <iostream>

using namespace std;

int fact(long long int x) {
    if (x == 0 || x == 1)
        return 1;
    return x * fact(x - 1);
}

int countDigits(int x) {
    int c = 0;
    while (x != 0) {
        x = x / 10;
        c++;
    }
    return c;
}

int main() {
    long long int n;
    cin >> n;
    cout << "\nFactorial of that number is: " << fact(n) ;
    
    cout << "\nTotal digits of that number is: " <<countDigits(n) ;
    return 0;
}


