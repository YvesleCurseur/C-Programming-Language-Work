#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*char nom [100];
    char prenom [100];
    printf("Entrer votre Nom :\n");
    scanf("%s",nom);
    printf("\n");
    printf("Entrer votre Prenom :\n");
    scanf("%s",prenom);
    strcat(nom, prenom);
    printf("\nVous etes %s !\n", nom);*/

    char mot1 [100];
    char mot2 [100];
    int tmp;
    printf("Entrer votre Mot 1 :\n");
    scanf("%s",mot1);
    printf("\n");
    printf("Entrer votre Mot 2 :\n");
    scanf("%s",mot2);
    tmp=strcmp(mot1, mot2);
    printf("\n");
    if (tmp < 0){
        printf("Le Mot 1 est inferieur au Mot 2");
    }else if (tmp > 0){
        printf("Mot 1 est superieur au Mot 2");
    }else{
        printf("Mot 1 est egale au Mot 2");
    }
    printf("\n");
    /*char ville[100];
    char ville2[100];
    printf("Entrer votre ville de naissance :");
    scanf("%s",ville);
    printf("\n");
    printf("Entrer votre ville de residence :");
    scanf("%s",ville2);
    printf("\n");
    strcpy(ville, ville2);
    printf("Vous etes a %s !",ville);*/
    return 0;
}

/* 
###################################################################################################
#    =    =                                 =                                           ====      #                                                                        
#     =  =                                  =                                         =           #                                                             
#      =                                    =                                         =           #                                                                
#      =            =============           ======          ==============              ====      #                                                                                
################################################################################################### 
*/