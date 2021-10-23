#include <stdio.h>
#include <stdlib.h>

int main()
{
    float note1, note2, note3;
    float coef1, coef2, coef3, moyenne;
    printf("Entrer la note 1: ");
    scanf("%f",&note1);
    printf("Coefficient de la Note 1: ");
    scanf("%f",&coef1);
    printf("\nEntrer la note 2: ");
    scanf("%f",&note2);
    printf("Coefficient de la Note 2: ");
    scanf("%f",&coef2);
    printf("\nEntrer la note 3: ");
    scanf("%f",&note3);
    printf("Coefficient de la Note 3: ");
    scanf("%f",&coef3);

    moyenne = (note1*coef1+note2*coef2+note3*coef3) / (coef1+coef2+coef3);

    if (moyenne>=15){
        printf("\nLa moyenne general est de %.2f\n",moyenne);
        printf("\nAdmis avec felicitations\n");
    }else if(moyenne >=12 && moyenne < 15){
        printf("\nLa moyenne general est de %.2f\n",moyenne);
        printf("\nAdmis avec mention bien\n");
    }else if(moyenne >=10 && moyenne < 12){
        printf("\nLa moyenne general est de %.2f\n",moyenne);
        printf("\nAdmis\n");
    }else if(moyenne >=9 && moyenne < 10){
        printf("\nLa moyenne general est de %.2f\n",moyenne);
        printf("\nRedouble\n");
    }else {
        printf("\nLa moyenne general est de %.2f\n",moyenne);
        printf("\nExclu\n");
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
