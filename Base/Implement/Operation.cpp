#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int Binary(int n)
{
    while(n > 0)
    {
        if(n % 2 ==1)
            c++;
        n=n/2;
    }
    return c;
}
int hex(int n)
{
    int x =0, y =0;
    while(n >0)
    {
        x+=(n % 10)*pow(16, y++);
        n = n/2;
    }
    return Binary(x);
}
int main() {
    long long int n;
    cin >> n;
    cout << "\nFactorial of that number is: " << fact(n) ;
    
    cout << "\nTotal digits of that number is: " <<countDigits(n) ;
    cout<<"\nReverse of the number is: "<<rev(n);
    cout<< "\nLuck is: " <<luck(n);
    cout<< "\nImplemented Binary: " << Binary(n);
    cout<< "\nImplemented Hex: " << hex(n);
    return 0;
}
