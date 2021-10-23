#include <stdio.h>
#include <stdlib.h>

int main()

{
    /*printf("Entrer un nombre: ");
    scanf("%d",&nombre);
    while(i<11){
    j=nombre*i;
    printf("%d * %d = %d\n",nombre,i,j);
    i++;
    }*/
    int i=1;
        while(i<=10){
             printf("----TABLE DE %d----\n",i);
             int j=0;
            while(j<=12){
                printf("    %d * %d = %d\n",i,j,i*j);
                j++;
                }
            i++;
            }
}

