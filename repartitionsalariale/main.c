#include <stdio.h>
#include <stdlib.h>

int main()
{
int NHT, NAA;
float PU, SF, Retenue, Prime, Maj, SN, SB;
printf("Entrez le nombre d'heures de travaillees : \n");
scanf("%d",&NHT);
printf("Entrez le prix unitaire de l'heure : \n");
scanf("%f",&PU);
printf("Entrez le nombre d'annees d'anciennete : \n");
scanf("%d",&NAA);
    SN=NHT*PU;
if (NHT<=39){
        Maj=0;
        printf("Vous n'avez pas de majoration !\n");
    }else if(NHT>=40 && NHT<=44){
        Maj=(NHT-39)*0.5*PU;
    }else if(NHT>=45 && NHT<=49){
        Maj=(44-39)*0.5*PU+(NHT-44)*0.75*PU;
    }else if(NHT>=50){
        Maj=(44-39)*0.5*PU+(49-44)*0.75*PU+(NHT-49)*PU;
}else{
    printf("Vous n'avez pas de majoration !");
    }
    SB=Maj+SN;
    Prime=NAA*2500;
    Retenue=(SB*5)/100;
    SF=(SB+Prime)-Retenue;
printf("La majoration est :%0.f\n",Maj);
printf("Le salaire normal est : %0.f\n",SN);
printf("Le salaire brute est : %0.f\n",SB);
printf("La prime est : %0.f\n",Prime);
printf("la retenue est : %0.f\n",Retenue);
printf("Le salaire final est : %0.f\n",SF);

return 0;
}
