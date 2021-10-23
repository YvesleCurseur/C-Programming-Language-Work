#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int A = 50;
    int * p;
    p = &A;
    *p=70;
    printf(" La valuer de A est %d !\n",A);
    printf(" L'adresse de A est %X !\n",&A);
    printf(" L'adresse de A est %p !\n",p);
    printf(" La valeur stockee a l'adresse %p de A est %d !\n",p, *p);
    return 0;
}*/
/*
int main()
{
    int x=3;
    int y=5;
    int * p;
    p = &x;
    printf("x = %d !\n",x);
    *p = 4;
    printf("x = %d !\n",x);
    p=&y;
    printf("*p = %d !\n",*p);
    *p=*p+1;
    printf("y = %d !\n",y);
    return 0;
}*/


/*Ne marche pas a cause d'un bail de adresse !
void inverse(int &x ; int &y){
    int tmp;
        tmp=x;
        *x=y;
        *y=tmp;
}
int main()
{
    int A=50;
    int B=70;

    printf("A = %d et B = %d!\n",A,B);
    inverse(A,B);
    printf("A = %d et B = %d!\n",A,B);
    return 0;
}
*/
/*
void inverse(int *x, int *y){
    int *tmp;
       tmp = *x;
        *x = *y;
        *y = tmp;
        *po=&A;
}

int main()
{
    int val1=50;
    int val2=70;
    printf("A = %d et B = %d!\n",val1,val2);
    inverse(&val1,&val2);
    printf("A = %d et B = %d!\n",val1,val2);
    return 0;
}*/
/*void initTab(int K[], int n){
    int i;
    for (i=0;i<n;i++)
        K[i]=i+1;
    }
void afficheTab(int K[], int n){
    int i;
    for (i=0;i<n;i++)
        printf("%d\n",K[i]);
}
int main()
{
    int T[50];
    initTab (T,5);
    afficheTab (T,5);
    return 0;
}*/
void augmentation(float *x){

    if (*x < 60000){
        *x = *x + (*x * 0.1);
    }
}

int main()
{
    float sal;
    printf("Entrer le salaire : ");
    scanf("%f",&sal);
    printf("\n");
    printf("votre salaire avant majoration est %f !\n",sal);
    augmentation(&sal);
    printf("\n");
    printf("votre salaire apres majoration est %f !\n",sal);
    return 0;
}

/* 
###################################################################################################
#    =    =                                 =                                           ====      #                                                                        
#     =  =                                  =                                         =           #                                                             
#      =                                    =                                         =           #                                                                
#      =            =============           ======          ==============              ====      #                                                                                
################################################################################################### 
*/