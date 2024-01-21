#include <bits/stdc++.h>
using namespace std;
int c = 0, odd = 0;
int req(int x, int y) {
    if (y == 1)
        return x;

    if (x + y + 1 == y)
        return (pow(2, c - 1) + odd);
    if (x + odd == y)
        return pow(2, c);
    if (x == y)
        return (pow(2, c) + odd);
    if (x <= y && odd > y)
        return ((pow(2, c)) + (odd / y) + (odd % y));
    if (x <= y && odd <= y)
        return ((pow(2, c)) + 1);

    if (x % 2 == 0) {
        x /= 2;
        c++;
    } else {
        x = (x + 1) / 2;
        c++;
        odd++;
    }
    return req(x, y);
}
int main() {
    int x, y;
    cin >> x >> y;
    cout << req(x, y);
    // x= 1024 y=5
}
int primeFactors(int n)
{
    int c=0;
    while (n % 2 == 0)
    {
        c++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            c++;
            n = n/i;
        }
    }
    if (n > 2)
    {
        c++;
    }
    return c;
}
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
 
    }
    return gcd(b, a % b);
}
