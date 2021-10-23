#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char sexe;

    do{
    printf("Entrer votre sexe (Tapez M ou F): \n");
    scanf("%s", &sexe);}
    while (sexe != 'M' && sexe != 'F');

    do{
    printf("\nEntrer l'age (positif): \n");
    scanf("%d", &age);

    }while (age<0);
        if (age>20 && sexe=='M'){
            printf("\nL'habitant est imposable !\n");
        }else if(age>=18 && age<35 &&  sexe=='F'){
            printf("\nL'habitant est imposable !\n");
        }else{
            printf("\nL'habitant n'est pas imposable !\n");
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