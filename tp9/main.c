#include <stdio.h>
#include <stdlib.h>

int main()
{
    double chiffreaffaire, salairemensuel, salairedebase;
    printf("Entrer votre salaire de base: \n");
    scanf("%lf",&salairedebase);
    printf("\nEntrer votre chiffre d'affaire mensuel: \n");
    scanf("%lf",&chiffreaffaire);

    if (chiffreaffaire==5000000){

        salairemensuel=salairedebase+200000;
        printf("\nVous etes un agent commercial.\nVous beneficiez d'une prime de rendement de 200000 Fr !\n");

    }else if (chiffreaffaire>=5000001 && chiffreaffaire<=10000000){

        salairemensuel=salairedebase+350000;
        printf("\nVous etes un agent commercial.\nVous beneficiez donc d'une prime de rendement de 350000 Fr !\n");

    }else if (chiffreaffaire>10000001){

        salairemensuel=salairedebase+500000;
        printf("\nVous etes un agent commercial.\nVous beneficiez donc d'une prime de rendement de 500000 Fr !\n");

    }else{

        salairemensuel=salairedebase;
        printf("\nVous etes un agent non commercial.\nVous ne beneficiez d'aucune prime !\n");

        }

    printf("\nVotre salaire mensuel est de %0.f Fr !\n", salairemensuel);
}

/* 
###################################################################################################
#    =    =                                 =                                           ====      #                                                                        
#     =  =                                  =                                         =           #                                                             
#      =                                    =                                         =           #                                                                
#      =            =============           ======          ==============              ====      #                                                                                
################################################################################################### 
*/