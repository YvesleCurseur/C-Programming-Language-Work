#include <stdio.h>
#include <stdlib.h>

int main()
{
    double PU, QCOM, MTTC, MHT, PORT, REM, TVA;
    printf("Entrer le prix unitaire: \n");
    scanf("%lf",&PU);
    printf("\nEntrer la quantite commande: \n");
    scanf("%lf",&QCOM);
    MHT=PU*QCOM;
    if(MHT<1000000){
        PORT=MHT*10/100;
    }else if(MHT>=1000000 && MHT<=2500000){
        PORT=MHT*7/100;
    }else if(MHT>2500000 && MHT<=5000000){
        PORT=MHT*5/100;
    }else if(MHT>5000000){
        printf("\nLe port est gratuit!\n");
    }
    if (MHT>=500000 && MHT<=1500000){
        REM=MHT*5/100;
    }else if(MHT>1500000 && MHT<=3000000){
        REM=MHT*10/100;
    }else if(MHT>3000000){
        REM=MHT*15/100;
    }
    TVA=(MHT-REM)*18/100;
    MTTC=MHT+PORT+REM+TVA;

    printf("\nLe montant a payer   est de ----> %0.f Fr \n\n", MTTC);
    printf("Le montant hors taxe est de ----> %0.f Fr\n\n", MHT);
    printf("Le port              est de ----> %0.f Fr\n\n", PORT);
    printf("La remise            est de ----> %0.f Fr\n\n", REM);
    printf("La TVA               est de ----> %0.f Fr\n\n", TVA);
}
