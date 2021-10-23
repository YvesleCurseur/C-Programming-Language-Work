#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salairbrut, nbrheurtrav, retenue, primesupatrois, salairnet, tauxhoraire, enfant, enfantrestant;

    //Salaire Brut
    printf("Entrez le nombre d'heures travailles: \n");
    scanf("%lf", &nbrheurtrav);
    printf("\nEntrez votre taux horaire: \n");
    scanf("%lf", &tauxhoraire);

    salairbrut = nbrheurtrav*tauxhoraire;

    //Retenue
    retenue = salairbrut * 10/100;

    //prime
    printf("\nEntrez votre nombre d'enfants : \n");
    scanf("%lf",&enfant);
    if (enfant<0){
            printf("\n\nVeillez resaisir votre nombre d'enfants!\n\n");
    }else if(enfant==0){
            printf("\n\nVous ne beneficiez d'aucune indemnite!\n");
            salairnet = salairbrut - retenue;
            printf("\nVotre prime        est de ----> 0 Fr\n");
    }else if(enfant==1){
            printf("\n\nVous beneficiez d'une prime de 9000 Fr!\n");
            salairnet = salairbrut + 9000 - retenue;
            printf("\nVotre prime        est de ----> 9000 Fr\n");
    }else if(enfant==2){
            printf("\n\nVous beneficiez d'une prime de 20000 Fr!\n");
            salairnet = salairbrut + 20000 - retenue;
            printf("\nVotre prime        est de ----> 20000 Fr\n");
    }else if(enfant==3){
            printf("\n\nVous beneficiez d'une prime de 35000 Fr!\n");
            salairnet = salairbrut + 35000 - retenue;
            printf("\nVotre prime        est de ----> 35000 Fr\n");
    }else if(enfant>=3){
            printf("\n\nVous beneficiez d'une prime de 18000 Fr par enfant en plus!\n");
            enfantrestant= enfant - 3 ;
            primesupatrois = 35000 +(18000 * enfantrestant);
            salairnet = (salairbrut + primesupatrois)- retenue;
            printf("\nVotre prime        est de ----> %0.f Fr\n", primesupatrois);
        }
    printf("\nVotre salaire brut est de ----> %0.f Fr\n", salairbrut);
    printf("\nVotre retenue      est de ----> %0.f Fr\n", retenue);
    printf("\nVotre salaire net  est de ----> %0.f Fr\n\n",salairnet);
}

/* 
###################################################################################################
#    =    =                                 =                                           ====      #                                                                        
#     =  =                                  =                                         =           #                                                             
#      =                                    =                                         =           #                                                                
#      =            =============           ======          ==============              ====      #                                                                                
################################################################################################### 
*/