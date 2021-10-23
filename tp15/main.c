#include <stdio.h>
#include <stdlib.h>

int main()
{
    int     num, an, i, nbrheur, nbrheursuppl, nbranc=0;
    float   prime, salvac, salbape, salbavac, salper, globalv=0, globalp=0;
    char    type;

    printf("Entrez le numero du professeur : \n");
    scanf("%d", &num);
    for (i=1; i<=4 ;i++){
    do{
    printf("Veuillez entrez 'V' si vous etes vacataire et 'P' si vous etes permanent: \n");
    scanf("%s", &type);
    }while(type !='V' && type != 'P');
    switch (type){
        case 'V' :
            printf("Entrez le nombre d'heures normal effectuees : \n");
            scanf("%d", &nbrheur);
            printf("Entrez le nombre d'heures supplementaires : \n");
            scanf("%d", &nbrheursuppl);
            salvac=nbrheur*8000;
            if (nbrheursuppl>=0 && nbrheursuppl<=5){
                 salbavac = (nbrheursuppl*8000)+ salvac;
                }else  if (nbrheursuppl>5 && nbrheursuppl<=10){
                    salbavac = (nbrheursuppl-5)*9000 + (10-5)*8000 + salvac;
                }else if(nbrheursuppl>10){
                    salbavac = (nbrheursuppl-10)*10000 + (10-5)*9000 + (10-5)*8000 + salvac;
            }else{
                    printf("Veuillez resaisir le nombre d'heures supplementaires !");
                }
                printf("Salaire de base : %f \n", salvac);
                printf("Salaire Total : %f \n", salbavac);
                globalv = globalv + salvac;
            break;
        case 'P':
            printf("Entrez le nombre d'annnees d'ancienete : \n");
            scanf("%d", &an);
            printf("Entrer le salaire de base :\n");
            scanf("%f",&salbape);
            if (nbranc<=2){
                prime=salbape*10/100;
            }else if (nbranc>2){
                prime=salbape*20/100;
            }else{
            printf("Veuillez resaisir le nombre d'annee  d'anciennet� !");
            }
            salper = salbape + prime;
            printf("Salaire de base : %f \n", salbape);
            printf("La prime : %f \n", prime);
            printf("Salaire de Total : %f \n", salper);
            globalp = globalp + salbape;
            break;
        default:
                printf("Donn�es mal saisies !");
            break;
            }
        }
    printf(" \n\n");
    printf("Le salaire global pour les professeurs vacataires : %f \n", globalv);
    printf("Le salaire global pour les professeurs permanents : %f \n", globalp);
    }

/* 
###################################################################################################
#    =    =                                 =                                           ====      #                                                                        
#     =  =                                  =                                         =           #                                                             
#      =                                    =                                         =           #                                                                
#      =            =============           ======          ==============              ====      #                                                                                
################################################################################################### 
*/