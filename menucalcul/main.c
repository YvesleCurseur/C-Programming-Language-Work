#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    int choix;
    printf("----------------------------\n");
    printf("------      MENU      ------\n");
    printf("      1-  Addition\n");
    printf("      2-  Soustraction\n");
    printf("      3-  Division\n");
    printf("      4-  Multiplication\n");
    printf("----------------------------\n");
    printf("----------------------------\n");
    printf("Entrer le numero de votre operation: ");
    scanf("%d",&choix);
    printf("Entrer une premiere valeur: ");
    scanf("%f",&a);
    printf("Entrer une seconde valeur: ");
    scanf("%f",&b);
    switch(choix){
        case 1:
            printf("%f + %f = %f",a,b,a+b);
            break;
        case 2:
            printf("%f - %f = %f",a,b,a-b);
            break;
        case 3:
            if (b==0){
                printf("Division Impossible!");
            } else{
                printf("%f / %f = %f",a,b,a/b);
            }
            break;
        case 4:
            printf("%f * %f = %f",a,b,a*b);
            break;
        default:
            printf("Choix invalide!");
            break;
    }
}
