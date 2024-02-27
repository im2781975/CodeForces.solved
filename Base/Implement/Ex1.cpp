void solve()
{
    unsigned long long int m,n,a,N,M;
    cin>>m>>n>>a;
    M = m/a;
    N = n/a;
    if (m%a!=0)
        M++;
    if (n%a!=0)
        N++;
    unsigned long long int ans = M*N;
    cout<<ans;
}
void solve()
{
    int n;
    cin>>n;
    if (n%2==0 && n!=2)
        cout<<"YES";
    if (n%2==1 || n==2)
        cout<<"NO";
}
void solve()
{
    long int s=11;
    cout<<letter_count(911);
    for (int i = 1;i<=999;i++)
        s+= letter_count(i);
    cout<<endl<<s;

}
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
