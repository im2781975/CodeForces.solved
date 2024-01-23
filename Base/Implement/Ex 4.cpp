int main()
{
    ll a,b,c,d,x=0,y=0;
        cin>>a>>b>>c>>d;
        if(c!=1)
        x++;
        if(d!=a)
        x++;
        if(c!=1 && d!=a)
        x+=abs(c-d);
        if(c==1 && d!=a)
        x+=abs(d-b);
        else if(d==a && c!=1)
        x+=abs(c-b);
        else if(c!=1 && d!=a)
        x+=min(abs(b-c),abs(b-d));
        cout<<x<<endl;
}
int main()
{

        ll a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        a+=b+c+d+e;
        if(a%5==0 && a/5!=0)
        cout<<a/5<<endl;
        else
        cout<<-1<<endl;
}
int main()
{
    ll a,b,c;
        cin>>a>>b>>c;
        while(c!=0)
        {
                if(c<0)
                {
                        c+=1;
                        b-=1;
                        if(b==0)
                        b=a;
                }
                else
                {
                        c-=1;
                        b+=1;
                        if(b>a)
                        b=1;
                }
       }
       cout<<b<<endl;    
}
int main()
{
    ll a,b,c,d,e;
       cin>>a>>b>>c>>d>>e;
       b*=a;
       b+=2*d;
       c*=a;
       c+=2*e;
       if(b>c)
       cout<<"Second"<<endl;
       else if(c>b)
       cout<<"First"<<endl;
       else
       cout<<"Friendship"<<endl;
}
