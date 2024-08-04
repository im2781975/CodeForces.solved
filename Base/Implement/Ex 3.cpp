int main() {

    int friends, bottles, milliliters, limes, slices, salt, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &friends, &bottles, &milliliters, &limes, &slices, &salt, &nl, &np);

    int allMilliliters = bottles * milliliters / nl / friends;
    int allSalt = salt / np / friends;
    int allLimes = limes * slices / friends;

    int minim = -1;

    minim = (allLimes < allMilliliters) ? allLimes : allMilliliters;
    minim = (minim < allSalt) ? minim : allSalt;

    printf("%d", minim);
    return 0;

}



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int dice1, dice2;
    scanf("%d %d", &dice1, &dice2);

    int dice1Wins = 0;
    int draw = 0;
    int dice2Wins = 0;

    for(int i = 1; i <= 6; i++) {

        if(abs(dice1 - i) > abs(dice2 - i))
            dice2Wins++;
        else if(abs(dice1 - i) < abs(dice2 - i))
            dice1Wins++;
        else
            draw++;

    }

    printf("%d %d %d", dice1Wins, draw, dice2Wins);

    return 0;

}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int cmmdc(int a, int b) {

    int r;

    while(b != 0) {

        r = a % b;
        a = b;
        b = r;

    }

    return a;
}

int main() {

    long int l, r;

    scanf("%ld %ld", &l, &r);
    printf("%d", sizeof(long int));
    if(r - (l += l%2) < 2)
        printf("-1");
    else
        printf("%d %d %d", l, l + 1, l + 2);
    return 0;

}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main() {

    int x, y;
    scanf("%d %d", &x, &y);
    int s = 0;
    if(y>x && x>=-y) {

        printf("a");
        s=-2+y*4;

    }

    if(y<x && x<=-y+1) {

        printf("b");
        s=-y*4;

    }

    if(y<=x && x>-y+1) {

        printf("c");
        s=-3+x*4;

    }

    if(y>=x && x<-y) {

        printf("d");
        s=-1-4*x;

    }

    printf("%d", s);


    return 0;

}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int max(int a, int b) {

    return (a > b) ? a : b;

}

int main() {

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d %d %d", 2-(a==c||b==d), ((a+b)%2==(c+d)%2)*(2-(a-b==c-d||a+b==c+d)), max(abs(c-a),abs(d-b)));
    return 0;

} 
