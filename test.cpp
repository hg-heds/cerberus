#include<stdio.h>
#include <time.h>
#include <stdlib.h> 

typedef struct node_struct {
    int 
}

int main (int argc, char **argv) {
    int m = 0;
    for (int i=0; i<10;i++){
        m = (m + 1) % 2;
        printf("%d\n",m);
    }

    return 0;
}
