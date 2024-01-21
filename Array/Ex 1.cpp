void display(int a)
{
     for(int k=32;k>=0;k--)
    {
        if(a&(1<<k))
            cout<<"1";
        else
            cout<<"0";
    }
    cout<<endl;
 
}
int arr[]={1,2,3,4,3,2,1};
    int a=0;
 
    for(int i=0;i<7;i++)
    {
        a=a^arr[i];
    }
    cout<<a;
 
    int cnt=0;
    while(a)
    {
        cnt++;
        a=a>>1;
    }
    cout<<cnt<<endl;
    cnt--;
    cout<<(1<<cnt)<<endl;
    
    int next=ceil(log2(a));
    cout<<next<<endl;
    next--;
 
    cout<<(1<<next)<<endl;
    int x=132;
    int cnt=0;
    while(x)
    {
        if(x&1)
            cnt+=1;
        x>>=1;
    }
     cout<<cnt<<endl;
     int arr[5]={0};
     int n[5]={2,3,1,5};
     for(int i=0;i<5;i++)
     {
       arr[n[i]-1]=1;
 
     }
     for(int i=0;i<5;i++)
     {
         if(arr[i]==0)
            cout<<i+1;
     }
    display(a);
    a=a<<1;
    cout<<a<<endl;
    display(a);
    cout<<sizeof(int)<<endl;
    cout<<((a<<3)|(a>>(8-3)));
----
  int x=0,arr[3]={0},count = 0,result=0;
    cin>>x;
    for(int j=0 ; j<x ; j++)
    {
        for(int i=0; i<3; i++)
            {
                cin>>arr[i];
                if(arr[i]==1)
                    count++;
            }
            if(count >= 2 )
                result+=1;

            count=0;

    }
    cout<<result;
}
int main()
{
int size=0;
cin>>size;
int arr[size];
for(int i=0; i<size ; i++)
    {
        cin>>arr[i];
    }

sort(arr,arr+size);

    for(int i=0; i<size ; i++)
        cout<<arr[i]<<" ";
}
int main()
{
int s ,ser =0 ,dem =0 , left= 0 ,right ;
bool flag =true ;
  cin>>s ;
    int arr[s];
    right = s ;
  for(int i = 0 ; i < s ; i++ )
        {
            cin>>arr[i];
        }
        if(s == 1){
            cout<<arr[0] <<" " << 0 ;
            return 0 ;
        }
        else {
              for(int i = 0 ; i < s ; i++ )
              {
                  if(flag == true )
                  {
                      if(arr[ right -1 ] >= arr[left]){
                            ser +=arr[right-1];
                            right-=1;
                      }
                      else if(arr[ right -1 ] < arr[left]){
                            ser +=arr[left];
                            left+=1 ;
                          }
                     flag =false ;
                     continue ;
                  }


                  if(flag == false )
                  {
                      if(arr[ right -1 ] >= arr[left]){
                            dem +=arr[right-1];
                            right-=1;
                      }
                      else if(arr[ right -1 ] < arr[left]){
                            dem +=arr[left];
                            left+=1 ;
                          }
                     flag =true ;

                  }
              }
        }
cout<<ser << " " <<dem ;
}
int main()
{
    int x , c = 0 , h=0 ;
    cin >> x ;
    int arr[x];
        for (int i = 0 ; i < x ; i ++ ){
            cin >> arr [i] ;
        }
        for (int i = 0 ; i < x ; i ++ ){
            if(arr [ i ] >= 1)
            {
                h += arr [ i ] ;
                continue ;
            }
            else if(arr [ i ] < 0 && h >= 1 ){
                h-- ;
                continue ;
            }
            else if ( arr[ i ] < 0 && h == 0 )
                c++ ;

        }
cout<< c ;
}
int main()
{
    int x , c = 0 , temp = 0 , s = 0 ;
bool flag = false ;

  cin >> x ;

   for(int  i = 0 ; i < x ; i++){

        cin >> temp ;


            if(temp > 0  ){
                flag = true ;
                s += temp ;
                x-=1 ;
                continue ;
                }
   else if( temp < 0 && flag == false ){
        c++ ;
        cout<<c <<" " ;
        x -= 1 ;
        continue ;
    }
    else if( temp < 0 && flag == true)
      {
          x -= 1 ;
          s -= 1 ;
          if(s == 0 ){
            flag = false ;
            continue ;
          }
      }
   }
cout <<endl <<c ;
}
void sort(int** matrix, int n) {

    int done = 0;

    while(!done) {

        done = 1;

        for(int i = 0; i < n -1; i++) {

            if((float) matrix[i][1] / matrix[i][0] < (float) matrix[i + 1][1] / matrix[i + 1][0]) {

                int aux1 = matrix[i][0];
                int aux2 = matrix[i][1];

                matrix[i][0] = matrix[i + 1][0];
                matrix[i][1] = matrix[i + 1][1];

                matrix[i + 1][0] = aux1;
                matrix[i + 1][1] = aux2;

                done = 0;

            }
        }
    }
}

int main() {

    int n, strength;

    scanf("%d %d", &strength, &n);

    int** matrix = (int**)malloc(sizeof(int*) * n);

    for(int i = 0; i < n; i++)
        matrix[i] = (int*)malloc(4 * 2);

    for(int i = 0; i < n; i++)
        scanf("%d %d", &matrix[i][0], &matrix[i][1]);

    sort(matrix, n);

    for(int j = 0; j < n; j++)
        for(int i = 0; i < n; i++) {

            if(strength > matrix[i][0] && matrix[i][0] != -1) {

                strength += matrix[i][1];
                matrix[i][0] = -1;

            }
        }

    int finish = 0;


    for(int i = 0; i < n; i++)
        if(matrix[i][0] != -1)
            finish = 1;

    if(!finish)
        printf("YES");
    else
        printf("NO");
    return 0;

}
int main()
{
    int min(int a, int b) {

    return (a > b) ? b : a;

}

int main() {

    int n;
    scanf("%d", &n);

    int array[n + 1];

    int m1 = 0, m2 = 0, m3 = 0;

    for(int i = 1; i <= n; i++) {

        scanf("%d", &array[i]);

        switch(array[i]) {

        case 1:
            m1++;
            break;

        case 2:
            m2++;
            break;

        case 3:
            m3++;
            break;

        }
    }
    int minim = min(m1, m2);
    minim = min(minim, m3);

    int aux[4];
    int k = 0;

    printf("%d\n", minim);

    for(int i = 0; i < minim; i++) {

        k=1;

        for(int j = 1; k < 4; j++) {

            if(j == n + 1)
                j = 1;

            if(array[j] == k) {

                aux[k++] = j;
                array[j] = -1;

            }
        }

        for(int j = 1; j < k; j++)
            printf("%d ", aux[j]);
        printf("\n");


    }
    return 0;
}
}
int main()
{
void sort(int n, int array[n]) {

    int done = 0;

    while(!done) {

        done = 1;

        for(int i = 0; i < n - 1; i++) {

            if(array[i] > array[i + 1]) {

                int aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                done = 0;

            }
        }
    }
}
int main() {

    int n, d;
    scanf("%d %d", &n, &d);

    int array[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {

        scanf("%d", &array[i]);
        sum += array[i];

    }

    sum += 10 * (n - 1);

    if(sum > d)
        printf("-1");
    else {

        //sort(n, array);

        int ct = 2 * (n - 1);
        while(sum + 5 <= d) {

            ct++;
            sum+=5;

        }
        printf("%d", ct);

    }


    return 0;
}
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sort(int* array, int size) {

    int done = 0;

    while(!done) {

        done = 1;
        for(int i = 0; i < size - 1; i++)
            if(array[i] > array[i + 1]) {

                int aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                done = 0;

            }
    }
}

int main() {


    int n, v;
    scanf("%d %d", &n, &v);

    int* array = (int*)malloc(sizeof(int) * 50);
    int k;
    int* deals = (int*)malloc(sizeof(int) * 50);
    int sizeDeals = 0;
    int done;
    for(int i = 0; i < n; i++) {

        scanf("%d", &k);
        done = 0;
        for(int j = 0; j < k; j++) {

            scanf("%d", &array[j]);
            if(array[j] < v)
                done = 1;

        }

        if(done)
            deals[sizeDeals++] = i + 1;
        done = 0;

    }

    if(sizeDeals != 0) {


        sort(deals, sizeDeals);
        printf("%d\n", sizeDeals);
        for(int i = 0; i < sizeDeals; i++)
            printf("%d ", deals[i]);

    } else
        printf("0");
    return 0;

}
