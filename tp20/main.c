#include <stdio.h>
#include <stdlib.h>
#define numfour 5
#define numois 2
int main()
{
    int l,k,Tabfou[50][50],som,somMo,SomMo[50],Som[50];
    float Moy[50],MoyMe[50],Moytotal=0,MoyGetotal;

    for (l=0; l<numfour; l++){
        printf("Fournisseur n~%d : \n",l+115);
        for (k=0; k<numois; k++){
            printf("Entrer le montant du mois %d : ",k+1);
            scanf("%d",&Tabfou[l][k]);
            som=som+Tabfou[l][k];
        }
        Som[l]=som;
        Moy[l]=(float)Som[l]/numois;
        Moytotal=Moytotal+Moy[l];
        printf("\n");
        som=0;
    }

    printf("\n");
    for (l=0; l<numfour; l++){
        printf("Le fournisseur n~%d : \n",l+115);
        for (k=0; k<numois; k++){
        printf(" -Mois %d : [%d]- ",k+1,Tabfou[l][k]);
        }
        printf("\n");
        printf("Le montant total du fournisseur %d : %d \n",l+115,Som[l]);
        printf("Sa moyenne mensuel est de %f !\n",Moy[l]);
        printf("\n");
    }
    MoyGetotal=Moytotal/numfour;
    printf("La moyenne total mensuel de tous les fournisseurs est [%f] \n",Moytotal);
    printf("La moyenne generale de tous les fournisseurs est [%f] ",MoyGetotal);
    for (k=0; k<numois; k++){
            for (l=0; l<numfour; l++){
                somMo=somMo+Tabfou[l][k];
            }
        //SomMo[k]=somMo;
        //MoyMe[k]=(float)SomMo[k]/numfour;
        //printf("Moyenne Mensuel [%f] ",MoyMe[k]);
        somMo=0;
     }
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