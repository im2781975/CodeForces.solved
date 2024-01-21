int main() {

    int n, m, a, b;

    scanf("%d %d %d %d", &n, &m, &a, &b);
    int price = 0;

    int c=a*m;
    int d, e, f, g, h, k, l;
    if(c<b||c==b) printf("%d",a*n);
    else if(c>b){
        if(n%m==0) printf("%d", b*(n/m));
        else if(n%m!=0){
            d=n/m+1;
            e=d*b;

            f=n%m;
            g=f*a;
            h=n/m;
            k=h*b;
            l=g+k;
            printf("%d",min(e,l));
        }
    }

    return 0;
}
int main()
{
#include <stdio.h>
#include <stdlib.h>

int main() {

    int sum;
    scanf("%d", &sum);

    if (sum >= 0) {
        printf("%d",sum);
    } else {
        int a = -sum/10%10;
        int b = -sum%10;
        printf("%d",a > b ? sum/100*10-b : sum/10);
    }

    return 0;


}
int main()
{
int x1, y1, x2, y2;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if(abs(x1-x2)==abs(y1-y2))
        printf("%d %d %d %d", x1, y2, x2, y1);
    else if(x1 == x2 || y1 == y2) {

        float l = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        if(x1==x2) {
            printf("%d %d %d %d", x1+(int)l, y1, x1+(int)l, y2);
        } else
            printf("%d %d %d %d", x1, y1+(int)l, x2, y2+(int)l);
    } else
    printf("-1");

    return 0;

}
int main()
{
    int main() {


    int n, m;

    scanf("%d %d", &n, &m);

    int cnt = (n + 1) / 2;
    int ans = (cnt  + m - 1) / m * m;

    if (ans > n) {
        ans = -1;
    }
    printf("%d", ans);

return 0;

}
}
int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    int first = 0;
    int last = 1;
    for(int i = 0; i < n; i++) {

        if(i % 2 == 1)
            if(first == 1) {

                printf("#");
                first = 0;

            }
        for(int j = 0; j < m - i % 2; j++) {

            if(i % 2 == 0) {

                printf("#");

            } else
                printf(".");

        }

        if(i % 2 == 1)
            if(last == 1) {

                first = 1;
                printf("#");
                last = 0;

            }

        if(first == 0)
            last = 1;
        printf("\n");
    }

    return 0;

}
int main()
{
    int n;
    scanf("%d", &n);

    int nr;

    int odd = 0;
    int even = 0;
    int pos1 = -1;
    int pos2 = -1;

    for(int i = 0; i < n; i++) {

        scanf("%d", &nr);
        if(nr % 2 == 0) {

            even++;
            pos1 = i + 1;

        } else {

            odd ++;
            pos2 = i + 1;

        }
    }

    if(odd == 1)
        printf("%d", pos2);
    else
        printf("%d", pos1);
    return 0;
}
