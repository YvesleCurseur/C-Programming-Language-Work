#include <stdio.h>
#include <stdlib.h>
#define nbrend 4
int main()
{
    int TABVAL[350],i,VAL;
    printf("Entrer le rendement des salairies : \n");
    printf("\n");
    for (i=0; i<nbrend; i++){
        printf("Rendement salarie %d : ", i+1);
        scanf("%d",&TABVAL[i]);
        if (TABVAL[i]>VAL){
            VAL=TABVAL[i];
        }
    }
    printf("\n");
    printf("Le plus grand rendement est %d !", VAL);
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