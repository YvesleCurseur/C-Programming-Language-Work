#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=0, j=0;
    do {
        j=j+80;
        i=i+1;
    }while (j<440);
    printf("\n");
    printf("Il atteindra le sommet du mur en %dj !",i);
    printf("\n");
    return 0;
}
