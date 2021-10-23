#include <stdio.h>
#include <stdlib.h>
#define quant 1
#define group 5
int main()
{
    int i, k, sub, totprod=0, production[50][50];

    for (i=0;i<group;i++){
            printf("Groupement N~%d : \n",i+1);
        for(k=0;k<quant;k++){
                printf("Quantite de coton produite (Tonnes): ");
                scanf("%d",&production[i][k]);
                if (production[i][k]>=10){
                sub +=  1;
                }
        }
    }

    printf("\n");

    for (i=0;i<group;i++){
            printf("Groupement N~%d : ",i+1);
        for(k=0;k<quant;k++){
                printf("- Quantite [%d] -",production[i][k]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Le nombre total de subventions octroyees est de %d !\n",sub);

    for (k=0;k<quant;k++){
        for (i=0;i<group;i++) {
            totprod += production[i][k];
        }
    }
    printf("La quantite total de coton produits : %d !", totprod);
    printf("\n");
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