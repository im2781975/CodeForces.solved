ll extended_gcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
ll modinv(ll a, ll m){
    ll x, y;
    ll g = extended_gcd(a, m, x, y);
    if (g != 1) {
        return -1;
    }
    else {
        x = (x % m + m) % m;
        return x;
    }
}
int fact(int n)
 {
     int b = 1;
     while (n > 0)
     {
         b *= n;
        n -= 1;
         if (b >= 998244353)
            b %= 998244353;
     }

    return b;
}
ll exp(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a);
        a=(a*a);
        b>>=1;
    }
    return res;
}
ll modexp(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}
ll sqt(ll x)
{
    ll start =1;
    ll end = x;
    while (end>start)
    {
        end = start+(end-start)/2;
        start = x/end;
    }
    return end;
}
ll inv(ll a)
{
    return modexp(a, mod-2);
}
ll C(ll n, ll r)
{
    ll nume = fact[n];
    ll deno = (inv(fact[n-r]) * inv(fact[r])) % mod;
    return (nume * deno) % mod;
}
ll ceil(ll i, ll j) {
    if (i % j == 0) return i / j;
     return (i / j) + 1;
}
ll min(ll a, ll b, ll c) {
     if (a <= b && a <= c) return a;
     if (b <= c && b <= a) return b;
   return c;
}
 bool val(ll i, ll j, ll n, ll m) {
    if (i < 0 || j < 0 || i >= n || j >= m) return false;
     return true;
}
 bool check(ll x, ll n, ll k) {
 
     ll a = k;
     ll sum = x;
     while (x / a > 0) {
         sum += x / a;
         a *= k;
     }
     if (sum >= n) return true;
     return false;
}
  int t;
    cin>>t;
    while(t--)
    {
        ll row,col;
        cin>>row>>col;
        ll ans;
        if(row>col)
        {
            if(row%2==0)
            {
                ans=(row*row)-col+1;
            }
            else
            {
                ans=((row-1)*(row-1))+col;
            }
        }
        else
        {
            if(col%2==0)
            {
                ans=((col-1)*(col-1))+row;
            }
            else
            {
                ans=(col*col)-row+1;
            }
        }
        cout<<ans<<endl;
 
    }
-------
    ll n;
    cin>>n;
 
    for(ll i=1;i<=n;i++)
    {
      ll k=(i*i);
      ll a=k*(k-1)/2;
 
      if(k>2)
        a=a-4*(i-1)*(i-2);
      cout<<a<<endl;
    }
