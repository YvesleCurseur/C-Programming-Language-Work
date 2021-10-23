#include <stdio.h>
#include <stdlib.h>

int main()
{

    float KWh, Montantabonnement, Montantotal, Montantfacture;
    float TVA, MTTC, PU, DT, TT;

        printf("Entrer le prix unitaire de la premiere tranche: \n");
        scanf("%f",&PU);
        while (PU<0){
            printf("Donnees mal saisies! \n");
            printf("Veillez ressaisir la premiere tranche(Elle doit etre superieure a 0): \n");
            scanf("%f",&PU);
        }

        printf("Entrer le nombre total de KWh: \n");
        scanf("%f",&KWh);
        while (KWh<0){
            printf("Donnees mal saisies! \n");
            printf("Veillez ressaisir le nombre total de KWh (Elle doit etre superieure a 0): \n");
            scanf("%f",&KWh);
        }

        printf("Entrer le montant de l'abonnement: \n");
        scanf("%f",&Montantabonnement);
        while (Montantabonnement<0){
            printf("Donnees mal saisies! \n");
            printf("Veillez ressaisir le Montant de l'abonnement (Elle doit etre supérieure a 0): \n");
            scanf("%f",&Montantabonnement);
        }
    if ( KWh>=0 && KWh <=100 ){

        Montantotal=PU*KWh;

    }else if(KWh>100 && KWh<=400){

        DT=PU*2;
        Montantotal=(PU*100)+(DT*(KWh-100));

    }else if(KWh>400){
        DT=PU*2;
        TT=((PU*2)*3);
        Montantotal=PU*100+DT*(400-100)+TT*(KWh-400);
    }else{
        printf("Donnees mal saisies !");
        }

    TVA=Montantotal*18/100;
    MTTC=Montantotal+TVA;
    Montantfacture=Montantabonnement+MTTC;

    printf("\nLa TVA est de %0.f Fr\n",TVA);
    //printf("Le MTTC est de %0.f Fr\n",MTTC);
    printf("\nLe MHT est de %0.f Fr\n",Montantotal);
    printf("\nLe montant de la facture est de %0.f Fr\n",Montantfacture);

}
