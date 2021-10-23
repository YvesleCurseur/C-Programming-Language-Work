#include <stdio.h>
#include <stdlib.h>

int main()
{

    int   i,coeff,Som,SomCoeff;
    float n,moy,Somnocoeef,nocoeef;

    for (i=1 ; i<=2; i++){
        printf("Note %d :\n",i);
        scanf("%f",&n);
        Som=Som+n;
        printf("Coeff %d:\n",i);
        scanf("%d",&coeff);
        SomCoeff=SomCoeff+coeff;
        nocoeef=n*coeff;
        Somnocoeef=Somnocoeef+nocoeef;
        }
        moy=Somnocoeef/SomCoeff;
     printf("La somme des notes est : %f ",Somnocoeef);
     printf("\nLa moyenne est : %f ",moy);

}

/* 
###################################################################################################
#    =    =                                 =                                           ====      #                                                                        
#     =  =                                  =                                         =           #                                                             
#      =                                    =                                         =           #                                                                
#      =            =============           ======          ==============              ====      #                                                                                
################################################################################################### 
*/