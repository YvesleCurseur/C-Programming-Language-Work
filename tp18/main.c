#include <stdio.h>
#include <stdlib.h>
#define nbretu 4
int main()
{
    int T[850], nbretudajour=0, i, k=1, SOM;
    printf("Entrer la somme verse par les etudiants : \n");
    printf("\n");
        for (i=0; i<nbretu; i++){
            printf("Etudiant %d :", k++);
            scanf("%d", &T[i]);
            if (T[i]>=300000){
            nbretudajour+=1;
            }
        }
        for(SOM=0, i=0; i<nbretu; i++){
            SOM+=T[i];
            }
    printf("\n");
    printf("Somme des versements : %d \n", SOM);
    printf("Les etudiants a jour sont au nombre de %d !",nbretudajour);
    printf("\n");
    return 0;
}
