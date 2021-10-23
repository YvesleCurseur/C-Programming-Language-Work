#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nbreheuretravail, nbreheurerestant, salaire, salairenet, majoration, tauxhoraire;
    printf("Entrer le nombre d'heures de travaillees:\n");
    scanf("%lf",&nbreheuretravail);
    printf("\nEntrer votre taux horaire:\n");
    scanf("%lf",&tauxhoraire);
    salaire = nbreheuretravail*tauxhoraire;
    if (nbreheuretravail > 160){
        nbreheurerestant = nbreheuretravail-160;
        majoration =(nbreheurerestant*tauxhoraire)*25/100;
        salairenet = majoration+(160*tauxhoraire);
        printf("\nVous avez fait %0.f heures suplementaires!\n",nbreheurerestant);
        printf("\nVous beneficiez d'une majoration de 25 pour cent sur vos heures suplementaires! \n");
        printf("\nVotre majoration est de ----> %0.f Fr \n",majoration);
        printf("\nVotre salaire    est de ----> %0.f Fr \n",salairenet);
    }else{
        printf("\nVous ne beneficiez d'aucune majoration! \n");
        printf("\nVotre majoration est de ----> %0.f Fr\n",majoration);
        printf("\nVotre salaire    est de ----> %0.f Fr\n",salaire);
    }
}

/* 
###################################################################################################
#    =    =                                 =                                           ====      #                                                                        
#     =  =                                  =                                         =           #                                                             
#      =                                    =                                         =           #                                                                
#      =            =============           ======          ==============              ====      #                                                                                
################################################################################################### 
*/