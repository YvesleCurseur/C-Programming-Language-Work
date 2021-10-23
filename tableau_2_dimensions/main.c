#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k, som=0;
    int Note[4][2],SOM[4];
    float MOY[4];
    for (i=0;i<4;i++){
        printf("Entrer les 2 notes de l'etudiant %d :\n",i+1);
        for (k=0;k<2;k++){
            printf("Entrer la Note [%d][%d] : \n",i+1,k+1);
            scanf("%d",&Note[i][k]);
            som=som+Note[i][k];
        }
        SOM[i] = som;
        MOY[i] = (float) SOM[i]/2;
        som=0;
    }
        printf("\n");
     for (i=0;i<4;i++){

        printf("Etudiant N=%d \n",i+1);
        for (k=0;k<2;k++){
            printf("  Note [%d] \n",Note[i][k]);
        }
        printf("La somme des 2 notes de l'etudiant %d = %d !\n",i+1,SOM[i]);
        printf("La moyenne des 2 notes de l'etudiant %d = %f !\n",i+1,MOY[i]);
        printf("\n");
    }
    printf("\n");
    printf("Les moyennes sont : ");
    for (i=0;i<4;i++){
        printf(" [%f] ",MOY[i]);
    }
    printf("\n");
    return 0;
}
