#include <stdio.h>
#include <stdlib.h>


int *findOdds(int *, int, int);


int main(int argc, char *argv[]) {
    int a, b;

    a = atoi(argv[1]);
    b = atoi(argv[2]);

        // store and prints odd numbers between a and b
    int c = 0;
    int *v = findOdds(&c, a, b);
    printf("Odd Numbers between %d and %d are:\n", a, b);
    for(int i = 0; i < c; i++)
        printf("%d\t", v[i]);
    printf("\n");


    jump: return 0;
}



int *findOdds(int *c, int a, int b) {
    if ((a & 1) == 1 && (b & 1) == 1) {
        *c = ((b - a) >> 1) - 1;
    }
    else    *c = (b - a) >> 1;

    int *v = (int *) malloc(sizeof(int) * (*c));
    int k = 0;

    for(int i = a + 1; i < b; i++)
        if((i & 1) == 1)    v[k++] = i;

    return v;
}