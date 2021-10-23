#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nbrheurtrav, tauhorair=1450, salairbrut;
    double anci, enfant, totalanci, totalenfant;
    double retenue, retenuecss, retenueimpots;
    double primancien=16200,allfam=20000, indemnites;
    double salairenet;

    //1-Salaire Brut
    printf("Entrer le nombre d'heures travaillees: ");
    scanf ("%lf", &nbrheurtrav);
    salairbrut = nbrheurtrav*tauhorair;

    printf("Entrer votre nombre d'annnees d'anciennnete: ");
    scanf("%lf",&anci);
    totalanci = anci*primancien;

    printf("Entrer le nombre d'enfants: ");
    scanf("%lf",&enfant);
    totalenfant = enfant*allfam;

    printf("\nLe salaire brut est: %0.f Fr\n\n", salairbrut);

    //2-Retenues
    retenuecss = salairbrut*4.1/100;
    retenueimpots = salairbrut*3.9/100;
    retenue = retenuecss+retenueimpots;
    printf("Les retenues sont de: %0.f Fr\n\n",retenue);

    //3-Indemnit�s
    indemnites=totalenfant+totalanci;
    printf("Les indemnites sont de: %0.f Fr\n\n",indemnites);

    //4-Salaire Net
    salairenet=(salairbrut+indemnites)-retenue;
    printf("Votre salaire net est de: %0.lf Fr\n",salairenet);
}

/* 
###################################################################################################
#    =    =                                 =                                           ====      #                                                                        
#     =  =                                  =                                         =           #                                                             
#      =                                    =                                         =           #                                                                
#      =            =============           ======          ==============              ====      #                                                                                
################################################################################################### 
*/

