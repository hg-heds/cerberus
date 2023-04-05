#include<stdio.h>
#include <time.h>
#include <stdlib.h> 

int main (int argc, char **argv) {
    srand (time(NULL));
    int a = rand() % 10;
    printf("%d",a);

    return 0;
}