#include<bits/stdc++.h>
using namespace std;
char MoveToAnother(int n, char a, char b, char c)
{
    if(n>0)
    {
        MoveToAnother(n-1, a, c, b);
        cout<< "Move from " << a << " to "<< b << " use " << c <<"\n";
        MoveToAnother(n-1, c, b, a);
    }
}
int main()
{
    int n;
    cin >>n;
    char a, b, c;
    cin >>a >>b >>c;
    MoveToAnother(n, a, b, c);
}
