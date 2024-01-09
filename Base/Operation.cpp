#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int c=0;
int fact(long long int x) {
    if (x == 0 || x == 1)
        return 1;
    return x * fact(x - 1);
}
int countDigits(int x) {
    while (x != 0) {
        x = x / 10;
        c++;
    }
    return c;
}
int rev(int n)
{
    int odd;
    if( n==0)
        return odd;
    odd=(n/10)+(n%10)*pow(10, c++);
}
int main() {
    long long int n;
    cin >> n;
    cout << "\nFactorial of that number is: " << fact(n) ;
    
    cout << "\nTotal digits of that number is: " <<countDigits(n) ;
    cout<<"\nReverse of the number is: "<<rev(n);
    return 0;
}


