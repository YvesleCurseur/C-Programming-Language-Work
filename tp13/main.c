#include <stdio.h>
#include <stdlib.h>
int main()
{
    int     i,  num, anc, klm, nbreacci;
    float   primdist, primanc, priman;
    char    nom[50];
    for (i=0;i<2;i++){
    printf("Numero chaufeur :\n");
    scanf("%d",&num);
    printf("Nom chauffeur :\n");
    scanf("%s",nom);
    printf("Entrer sa distance parcourue en 'KLM' :\n");
    scanf("%d",&klm);
    printf("Entrer son nombre d'annee d'anciennete :\n");
    scanf("%d",&anc);
    primdist = klm*4;
    if (primdist>=400000){
            primdist=400000;
    }else{
            primdist=primdist;
    }
    if (anc<4){
        primanc=0;
    }else{
        anc=anc-4;
        for (i=4;i<=anc;i++){
            primanc=200000;
            primanc=primanc+200;
        }
    }
    priman=primanc+primdist;
    printf("A t'il ete responsable d'un accident? :\n");
    scanf("%d",&nbreacci);
    if (nbreacci==1){
            priman=priman/2;
    }else if(nbreacci==2){
            priman=priman/3;
    }else if(nbreacci==3){
            priman=priman/4;
    }else if(nbreacci>3){
            priman=0;
    }else{
            priman=priman;
            }
    printf("La prime de distance est de %f !\n",primdist);
    printf("La prime d'anciennete est de %f !",primanc);
    printf("\n\n");
    printf("La prime annuel du chaufeur N�%d avec pour Nom :%s est de %f !",num, nom, priman);
    printf("\n\n");
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