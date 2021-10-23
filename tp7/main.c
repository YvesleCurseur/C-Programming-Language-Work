#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salaire,salairedebase,prime,salairenet,salairerevisite,indice,anciennete;
    printf("Entrer votre salaire de base: \n");
    scanf("%lf",&salaire);
    printf("Entrer votre indiice de renumeration: \n");
    scanf("%lf",&indice);
    printf("Entrer votre nombre d'annees d'ancinennete: \n");
    scanf("%lf",&anciennete);
    if(salairedebase<=45000 && indice<500 && anciennete>=3){
        printf("Vous beneficiez d'une augmentation de 5,5 pour cent !\n");
        salairerevisite=salaire*5,5/100;
        printf("Vous beneficiez d'une prime de 10000 Fr !\n");
        prime=10000;
    }else{
        printf("Vous beneficiez d'une augmentation de 4,5 pour cent !\n");
        salairerevisite=salaire*4,5/100;
        printf("Vous ne beneficiez d'aucune prime !\n");
        prime=0;
    }
    salairedebase=salaire+salairerevisite;
    salairenet=salairedebase+prime;

    printf("Votre salaire de base est de %f Fr\n", salairedebase);
    printf("La prime est de %f Fr\n", prime);
    printf("Le salaire net est de %f Fr\n",salairenet);

}
