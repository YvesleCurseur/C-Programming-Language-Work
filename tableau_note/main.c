#include <stdio.h>
#include <stdlib.h>

int main()
{
    int     Note[4], i=0, n=1, k=1, Coeff;
    float   NoteCoeff, SomCoeff=0, SomNoteCoeff=0, Moyenne;

    for(i=0;i<4;i++){
    printf("Entrer la Note %d : \n", n++);
    scanf("%d",&Note[i]);
    printf("Entrer le coefficient %d : \n", k++);
    scanf("%d",&Coeff);

    NoteCoeff=Coeff*Note[i];

    SomCoeff=SomCoeff+Coeff;

    SomNoteCoeff=SomNoteCoeff+NoteCoeff;

    Moyenne=SomNoteCoeff/SomCoeff;

    }
    for (i=0;i<4;i++){
    printf("[%d]\n", Note[i]);
    }
    printf("Moyenne = %.2f \n",Moyenne);
}

/* 
###################################################################################################
#    =    =                                 =                                           ====      #                                                                        
#     =  =                                  =                                         =           #                                                             
#      =                                    =                                         =           #                                                                
#      =            =============           ======          ==============              ====      #                                                                                
################################################################################################### 
*/