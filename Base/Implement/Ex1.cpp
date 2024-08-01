
int MultOfNumbers(int n)
	{
		int mult = 1;
		while (n > 0)
		{
			mult *= n % 10;
			n /= 10;
		}
		return mult;
	}

	int SumOfNumbers(int n)
	{
		int sum = 0;
		while (n > 0)
		{
			sum += n % 10;
			n /= 10;
		}
		return sum;
	}

	int AmountOfNumbers(int n)
	{
		int sum = 0;
		while (n > 0)
		{
			sum++;
			n /= 10;
		}
		return sum;
	}


	double min(double a, double b)
	{
		double min = a < b ? a : b;
		return min;
	}

	double max(double a, double b)
	{
		double max = a > b ? a : b;
		return max;
	}

	double mini(double a, double b, double c)
	{
		double min = a < b ? a < c ? a : c : b < c ? b : c;
		return min;
	}
int NOD(long long a, long long b)
	{
		while (a > 0 && b > 0)
			if (a > b)
				a %= b;
			else
				b %= a;
		return a + b;
	}
int AmountOfZero(int n)
	{
		int sum = 0;
		while (n > 0)
		{
			if (n % 10 != 0)
				return sum;
			if (n % 10 == 0)
				sum++;
			n /= 10;
		}
		return sum;
	}
int ReverseNumber(long long num)
	{
		int rev = 0;
		while (num > 0)
		{
			rev += num % 10;
			rev *= 10;
			num /= 10;
		}
		rev /= 10;
		return rev;
	}
long long fac(int n)
	{
		if (n == 1 || n == 0)
			return 1;
		return n * fac(n - 1);
	}
bool HaveNeCh(int n)
	{
		while (n > 0)
		{
			if (n % 2 == 0)
				return false;
			n /= 10;
		}
		return true;
	}
bool IsGood(long long n)
	{
		while (n > 0)
		{
			if ((n % 10) % 2 == 0)
				return false;
			n /= 10;
		}
		return true;
	}
long long Fib(int n)
	{
		if (n == 1)
			return 1;
		if (n == 2)
			return 1;
		return Fib(n -1  ) + Fib(n -2);
	}

	bool Prost(long long n)
	{
		for (long long i = 2; i < n; i++)
		{
			if (n%i == 0)
				return false;
		}
		return true;
	}
unsigned long long fib(int n)
	{
		if (n == 0)
			return 1;
		if (n == 1)
			return 1;
		return fib(n - 1) + fib(n - 2);
	}
void rec(int a, int b)
	{
		if (a < b)
		{
			cout << a << " ";
			return rec(a + 1, b);
		}
		if (a == b)
		{
			cout << a;
			return;
		}
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
void extendgcd(ll a, ll b, ll*v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return ;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;//pass an arry of size1 3
}
void palindrome(int n)
{
    int rev=0,val;
    val = n;
    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if(val==rev)
        cout<<val<<" is a palindrome"<<endl;
    else
        cout<<val<<" is not a palindrome"<<endl;
}
bool isPrime()
{
    int n;
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
bool isEven()
{
    int n;
    return (n % 2 == 0);
}
void check_X0r(ll a, ll b)
{
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
 
}
{
    for(int i=2; i<maxn; i++) isprime[i]=1;
    for(int i=2; i*i<maxn; i++) if(isprime[i])
        {
            for(int j=i*i; j<maxn; j+=i) isprime[j]=0;
        }
}
