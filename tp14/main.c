#include <stdio.h>
#include <stdlib.h>
#define x 2
int main()
{
    int   an, veh, matr, i, n=1, MFTab[x];
    float salplaf, max, salbase, primenc, primanc, MF, totalmont=0;
    char  tech;

    printf("Entrer le salaire plafond :\n");
    scanf("%f",&salplaf);
    for(i=0; i<x; i++){
    printf("Entrer le matricule du technicien :\n");
    scanf("%d",&matr);
    do{
    printf("Entrer la specialite (Tapez 'M' pour Mecanicien, 'S' pour Soudeur, 'P' pour Peintre) : \n");
    scanf("%s",&tech);}
    while (tech != 'M'&& tech !='S'&& tech !='P');
    if (tech =='M'){
        salbase=(salplaf*80)/100;
    }else if (tech =='S'){
        salbase=(salplaf*70)/100;
    }else if (tech =='P'){
        salbase=(salplaf*60)/100;
    }
    printf("Entrer le nombre d'annees passe dans la societe : \n");
    scanf("%d",&an);
    printf("Entrer le nombre de vehicules repares au cours du mois :\n");
    scanf("%d",&veh);
    if (an>7){
        primanc=5000;
        //primanc=(an-7)*12*5000;
    }else{
        primanc=2725;
        //primanc=(an*12)*2725;
    }
    primenc=veh*1250;
    MF=primenc+primanc+salbase;

    MFTab[i]=MF;

    printf("La prime d'anciennete est de %f !\n",primanc);
    printf("La prime d'encouragement est de %f !\n",primenc);
    printf("Le salaire de base est de %f !\n",salbase);
    printf("Le montant a percevoir est de %f !\n",MF);
    totalmont=totalmont+MF;
    }

    for (i=0;i<x;i++){
    printf("\n")    ;
    printf("Le salaire du technicien [%d] est [%d] !\n", n++, MFTab[i]);
    max=0;
      if(MFTab[i]>max){
            max=MFTab[i];
        }
    }
    printf(" \n");
    printf("La somme d'argent pour tous les technicien : %f !\n", totalmont);
    printf("Le plus gros salaire est %f !\n",max);
}

/* 
###################################################################################################
#    =    =                                 =                                           ====      #                                                                        
#     =  =                                  =                                         =           #                                                             
#      =                                    =                                         =           #                                                                
#      =            =============           ======          ==============              ====      #                                                                                
################################################################################################### 
*/