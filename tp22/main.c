#include <stdio.h>
#include <stdlib.h>
#define nbremont 1
#define nbrenom 5
int main()
{
    int i,k,Montant[50][50];
    char Nom[50];

    for (i=0;i<nbrenom;i++){
            printf("Nom de l'employe [%d] : \n",i+1);
            scanf("%s",&Nom);
        for(k=0;k<nbremont;k++){
            printf("Son Montant : ");
            scanf("%d", &Montant[i][k]);
        }
    }
    for(i=0;i<nbrenom;i++){
            for (k=0;k<nbremont;k++){
                printf("- EMPLOYE [%s] -",Nom);
            }
    }

    return 0;
}
