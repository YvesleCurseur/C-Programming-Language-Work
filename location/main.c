#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrkm, tardi, taress, nbrj;
    printf("Entrer la duree de votre location (Nombre de jours) :\n");
    scanf("%d",&nbrj);
    printf("Entrer le nombre de kilometres a parcourir :\n");
    scanf("%d",&nbrkm);
    tardi=(nbrkm*60)+(25000*nbrj);
    taress=(nbrkm*90)+(20000*nbrj);
    printf("\n");
    if (tardi<taress){
        printf("Une location par tarif diesel couterait %d F\n",tardi);
        printf("Une location par tarif essence couterait %d F\n",taress);
        printf("\n");
        printf("Votre meilleur choix serait de prendre un tarif diesel ! ");
    }else{
        printf("Une location par tarif diesel couterait %d F\n",tardi);
        printf("Une location par tarif essence couterait %d F\n",taress);
        printf("Votre meilleur choix serait de prendre un tarif essence !");
    }
    return 0;

}
