#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);
    int* array = (int*)malloc(n * 4);
    int minimum = (1 << 28);
    int pos;
    for(int i = 0; i < n; i++) {

        scanf("%d", &array[i]);

        if(i > 1) {

            if(array[i] - array[i - 2] < minimum) {

                minimum = array[i] - array[i - 2];
                pos = i - 1;

            }
        }
    }

    minimum = -999999;
    for(int i = 0 ; i < n - 1; i++) {

        if(i + 1 == pos) {
            if(array[i + 2] - array[i] > minimum) {

                minimum = array[i + 2] - array[i];
                i++;

            }
        } else {

            if(array[i + 1] - array[i] > minimum) {

                minimum = array[i + 1] - array[i];


            }

        }
    }

    printf("%d", minimum);
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {


    int n;
    scanf("%d", &n);
    int* exercises = (int*)malloc(sizeof(int) * (n + 1));

    int chest = 0;
    int biceps = 0;
    int back = 0;

    for(int i = 0; i < n; i++) {

        scanf("%d", &exercises[i]);

        switch(i % 3){

        case 0:
            chest += exercises[i];
            break;

        case 1:
            biceps += exercises[i];
            break;

        case 2:
            back += exercises[i];
            break;


        }
    }

    if(chest > back && chest > biceps)
        printf("chest");
    else if(back > chest && back > biceps)
        printf("back");
    else
        printf("biceps");
    return 0;

}

