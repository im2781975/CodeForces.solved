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
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);

    char matrix[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%c", &matrix[i][j]);

    char diagonal = matrix[0][0];

    for(int i = 0; i < n; i++)
        if(matrix[i][i] != diagonal) {

            printf("NO");
            return 0;

        }
    printf("aaa");
    for(int i = n; i >= 0; i--)
        if(matrix[i][n - i] != diagonal) {

            printf("NO");
            return 0;

        }
    printf("aaa");

    char notDiag = matrix[0][1];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {

            if(i == j || i + j == n -1)
                j++;
            else {

                if(matrix[i][j] != notDiag) {

                    printf("NO");
                    return 0;

                }
            }
        }

    printf("YES");
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    char** matrix = (char**)malloc(sizeof(char*) * n);
    for(int i = 0; i < n; i++)
        matrix[i] = malloc(m);

    getchar();

    for(int i = 0; i < n; i++) {

        gets(matrix[i]);
        for(int j = 0; j < m; j++)
            if(matrix[i][j] == '.') {
                if((i + j) % 2 == 0)
                    matrix[i][j] = 'B';
                else
                    matrix[i][j] = 'W';

            }

    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            printf("%c", matrix[i][j]);
        printf("\n");


    }
    return 0;

}

void merge(int left, int right, int* array, int n) {

    int mid;

    if(left < right) {

        mid = (left + right) / 2;
        merge(left, mid, array, n);
        merge(mid + 1, right, array, n);
        mergeSort(left, mid, right, array, n);

    }
}

int main() {

    int devices, sockets, supply;

    scanf("%d %d %d", &supply, &devices, &sockets);
    int array[supply];

    for(int i = 0; i < supply; i++)
        scanf("%d", &array[i]);

    merge(0, supply - 1, array, supply);

    if(devices <= sockets)
        printf("0");
    else {

        int i = 0;
        while(sockets < devices && i < supply) {

            sockets += array[i] - 1;
            i++;

        }

        if(i != supply)
            printf("%d", i);
        else if(sockets >= devices)
            printf("%d", i);
        else
            printf("-1");
    }
    return 0;

}
