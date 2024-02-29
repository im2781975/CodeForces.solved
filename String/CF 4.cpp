#include <bits/stdc++.h>
using namespace std;

int b[26];
char a[100001];
int ans = 0;

int q(int x, int y) {
    int n = 0;
    memset(b, 0, sizeof b);

    for (int i = x; i <= y; i++) {
        b[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (b[i] == 1) n++;
    }
    return n;
}

int main() {
    scanf("%s", a);
    int len = strlen(a);

    for (int i = 0; i < len; i++) {
        ans += q(i, i);
        for (int j = i + 1; j < len; j++) {
            ans += q(i, j);
        }
    }
    cout << ans << endl;
    return 0;
}
void solve()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        a[i] = 2021;

    int k;
    int ans = -1;

    for (int i = 1; i <= 100000; i++)
    {
        int x = i;
        while (x)
        {
            int k = x % 10;
            a[k]--;
            x /= 10;
            if (a[k] == -1)
            {
                ans = i;
                break;
            }
        }
        if (ans != -1)
            break;
    }
    cout << ans - 1 << endl;
}
void solve()
{
    string s[100];
    unsigned int a[100][50];
    for (int i = 0;i<100;i++){
        cin>>s[i];
    }
    for (int i = 0;i<100;i++){
        for (int j = 0;j<50;j++){
            a[i][j] = s[i][j] - '0';
        }
    }

    cout<<endl<<endl;
    for (int i = 0;i<100;i++){
        for (int j = 0;j<50;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    int t = 1;
    int ans[50];
    int prod = 0,carry = 0;;
    for (int i = 49;i>=0;i--){
            prod = 0;
        for (int j = 0;j<100;j++){
            prod += a[j][i];
        }
        prod += carry;
        ans[i] = prod%10;
        carry = prod/10;

        cout<<t<<"-"<<prod<<"-"<<carry<<endl;
        t++;
    }
    cout<<carry;
    for(int i = 0;i<50;i++){
        cout<<ans[i];
    }
}
void solve()
{
    string s;
    cin>>s;
    int a[1000];
    for (int i = 0;i<=999;i++){
        a[i] = s[i] - '0';
    }
    long long int maxi = 1,num = 1;
    for (int i = 0;i<=987;i++){
        num = 1;
        for(int j = i;j<=i+12;j++)
            num *= a[j];
            if (num>maxi)
                maxi = num;
}
cout<<maxi;
//cout<<a[0];
}
void solve()
{
    int main()
{
  code();
 
  // tc
    {
       string s, m[N] ;
       cin>>s;
       int cnt=0  , cnt2=0  , cnt3=0   ;
       for(int i = 0 ; i <s.size() ; i++)
       {
        if(s[i] == '1')
        {
            cnt++;
        }
        else if(s[i] == '2')
        {
           cnt2++;
        }
        else if(s[i] == '3')
        {
           cnt3++;
        }

       }
       int i =0;
       while (cnt--)
       {
       m[i]='1';
       m[i+1]='+';
       i+=2;
     }
     while(cnt2--){
     m[i]='2';
       m[i+1]='+';
       i+=2;
     }
     while(cnt3--){
        m[i]='3';
       m[i+1]='+';
       i+=2;
     }
     for(int j = 0 ; j <s.size() ; j++)
       cout<<m[j];
     }


}
string ToCode(double n)
	{
		if (n == 0)
			return "0";
		string s = "";
		string a = "";
		while (n > 0)
		{
			a = to_string(((int)n % 2 == 0) ? 0 : 1);
			n = floor(n / 2);
			s = a + s;
		}
		return s;
	}

	int ToInt(string s)
	{
		int ans = 0;
		for (int i = s.length() - 1; i >= 0; i--) {
			if (s[i] == '1')
				ans += pow(2, s.length() - i - 1);
		}
		return ans;
	}
string AddTime(string s, int n) {
		string a = "";
		a += s[0];
		a += s[1];
		string b = "";
		b += s[3];
		b += s[4];
		int h = atoi(a.c_str());
		int m = atoi(b.c_str());
		int t = h * 60 + m;
		t += n;
		int hour = t / 60 % 24;
		int min = t % 60;
		string ho = "";
		string mi = "";
		if (hour < 10)
			ho += "0";
		if (min < 10)
			mi += "0";
		ho += to_string(hour);
		mi += to_string(min);
		return ho + ":" + mi;
	}
	bool Divi_on_11(string s)
	{
		long long sum1 = 0;
		long long sum2 = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (i % 2 == 0)
				sum1 += s[i] - '0';
			else
				sum2 += s[i] - '0';
		}
		if (sum1 == sum2)
		{
			return true;
			return 0;
		}
		long long ans = abs(sum1 - sum2);
		if (ans % 11 == 0)
			return true;
		return false;
	}
long long ToDec(string s,int syst)
	{
		int c = 0;
		long long ans = 0;
		for (int i = s.length() - 1; i >= 0;i--)
		{
			ans += pow(syst, c)*(s[i] - '0');
			c++;
		}
		return ans;
	}

	void Bubble_sort(int arr[], int size)
	{
		for (int i = 0; i < size - 1; i++)
			for (int j = 0; j < size - i - 1; j++)		
				if (arr[j] ==0)
					Swap(arr, j, j + 1);
	}

	char Compare(string s1, string s2)
	{
		if (s1.length() < s2.length())
			return '<';
		if (s2.length() < s1.length())
			return '>';
		for (int i = 0; i < s1.length(); i++)
		{
			if (s1[i] > s2[i])
				return '>';
			if (s1[i] < s2[i])
				return '<';
		}
		return '=';
	}
void SortString(string ar[],int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int i = 0; i < n - 1; i++)
				for (int j = 0; j < n - i - 1; j++)
					if (ar[j] > ar[j + 1])
					{
						string temp = ar[j];
						ar[j] = ar[j + 1];
						ar[j + 1] = temp;
					}
		}
	}

	string Sum(string a, string b)
	{
		vector <int> v1;
		vector <int> v2;
		for (int i = 0; i < a.length(); i++)
		{
			v1.push_back((a[i] - '0'));
		}
		for (int i = 0; i < b.length(); i++)
		{
			v2.push_back((b[i] - '0'));
		}
		reverse(v1.begin(), v1.end());
		reverse(v2.begin(), v2.end());
		int lenght;
		if (v1.size() > v2.size())
			lenght = v1.size() + 1;
		else
			lenght = v2.size() + 1;
		v2.reserve(lenght);
		v1.reserve(lenght);
		for (int ix = 0; ix < lenght; ix++)
		{
			v2[ix] += v1[ix]; 
			v2[ix + 1] += (v2[ix] / 10);
			v2[ix] %= 10; 
		}
		if (v2[v2.size() - 1] == 0)
			v2.erase(v2.end() - 1);
		reverse(v2.begin(), v2.end());
		string aa = "";
		for (int i = 0; i < v2.size(); i++)
			aa += to_string(v2[i]);
		return aa;
	}
    int main()
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			if (s.length() <= 10)
				cout << s << endl;
			else
			{
				cout << s[0];
				int cnt = 0;
				for (int j = 1; j < s.length() - 1; j++)
					cnt++;
				cout << cnt;
				cout << s[s.length() - 1] << endl;
			}
		}
		return 0;
	}
