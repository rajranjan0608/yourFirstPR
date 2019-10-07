#include <stdio.h>
#include <stdlib.h>


int checkArgs(int, char **, int *, int *, int *);
int max(int, int);
int findMax(int, int, int);


int main(int argc, char *argv[]) {
    int a, b, c;

        // check validity of arguments and load to a, b, c
    if(!checkArgs(argc, argv, &a, &b, &c)) {
        printf("Invalid Arguments!\n");
        goto jump;
    }

        // store and print max of a, b, c
    int v = findMax(a, b, c);
    printf("Maximum of %d, %d, %d is %d\n", a, b, c, v);


    jump: return 0;
}



int checkArgs(int argc, char *argv[], int *a, int *b, int *c) {
    if(argc < 4)
        return 0;

    *a = atoi(argv[1]);                 // string to integer
    if((*a) == 0 && argv[1][0] != 0)    // atoi returns 0 if invalid characters
        return 0;
    
    *b = atoi(argv[2]);
    if((*b) == 0 && argv[2][0] != 0)
        return 0;

    *c = atoi(argv[3]);
    if((*c) == 0 && argv[3][0] != 0)
        return 0;
    
    return 1;
}


int max(int a, int b) {
    return (a > b) ? a : b;     // returns max of two numbers
}

int findMax(int a, int b, int c) {
    return max(a, max(b, c));
}