#include <stdio.h>
#include <stdlib.h>
/*
char nom[100];
void affichage(){
printf("Saisir le nom : \n");
scanf("%s",nom);
}

int main()
{
    affichage();
    printf("\nVotre nom est %s !\n", nom);
    return 0;
}
*/
/*
float U;
float V;
float A;
float B;
float x;
float y;
float Max;

void Maxi(){
if (A>B){
    Max=A;
}else{
    Max=B;
}
}
*/
/*
void maxim(A,B){
    U=Max;
}
void maxim(U,0.5){
    V=Max;
}
int main()
{
    printf("Entrer X: \n");
    scanf("%f",&x);
    printf("Entrer Y: \n");
    scanf("%f",&y);

    A = x + y;
    B = x * y;

    maxim(U);
    U=Max;

    printf("X + Y = %f et X * Y = %f\n", A,B);
    printf("\n");
    printf("Le maximum est %f \n", Max);

    A=U;
    B=0.5;
    Maxi();

    printf("\n");
    printf("Le maximum entre U et V est %f",Max);

    printf("\n");
    return 0;
}
*/

/*
void afficheint(int a){
printf("%d",a);
}
int main(){
    int i;
    printf("Veuillez saisir un entier : ");
    scanf("%d",&i);
    printf("\n");
    afficheint(i);
    printf("\n");
    return 0;
}
*/
/*
float U;
float V;
float A;
float B;
float x;
float y;
float Max;
float E=0.5;

void Maxi(){
if (A>B){
    Max=A;
}else{
    Max=B;
}
}

void maxim(A,B){
    U=Max;
}
void maximsecond(U,E){
    V=Max;
}
int main()
{
    printf("Entrer X: \n");
    scanf("%f",&x);
    printf("Entrer Y: \n");
    scanf("%f",&y);

    A = x + y;
    B = x * y;

    maxim(U);

    printf("X + Y = %f et X * Y = %f\n", U,V);
    printf("\n");
    printf("Le maximum est %f \n", U);

    A=U;
    B=0.5;
    maximsecond(V);

    printf("\n");
    printf("Le maximum entre U et V est %f", V);

    printf("\n");
    return 0;
}
*/
/*
int somme( int a, int b){
    int s;
    s = a + b;
}
int main (){
    int x;
    int y;
    int v;
    printf("Entrer A : ");
    scanf("%d",&x);
    printf("Entrer B : ");
    scanf("%d",&y);

    printf("\n");
    printf("La somme de %d + %d est %d",x,y,somme(x,y));
    printf("\n");

    return 0;
}
*/
/*
int factoriel (int a){
    int i;
    int facto=1;
    for (i=1;i<=a;i++){
        facto=facto*i;
    }
    return facto;
}
int main (){
    int b;
    printf("Entrer un entier : ");
    scanf("%d", &b);
    printf("\n");
    printf("Le factoriel de %d est %d.", b, factoriel(b));
    printf("\n");
}
*/

int factoriel(x){
    int i;
    int facto=1;
    for (i=0;i<x;i++){
        facto=facto*(x-i);
    }
    return facto;
}
int main (){
    int n;
    int p;
    int combinaison;

    printf ("Entrer N : ");
    scanf ("%d", &n);
        while (n<0){
            printf("N et P doivent etre positif pour effectuer la combinaison !\n");
            printf ("Entrer N : ");
            scanf ("%d", &n);
        }
    printf ("Entrer P : ");
    scanf ("%d", &p);
        while (p<0){
            printf("N et P doivent etre positif pour effectuer la combinaison !\n");
            printf ("Entrer P : ");
            scanf ("%d", &p);
        }
    if (n<p){
        printf("\nERROR !\n\nN doit etre superieur a P pour faire la combinaison !\n");
    }else{
    combinaison=(factoriel(n))/((factoriel(p))*(factoriel(n-p)));
    printf("\nLa combinaison de %d dans %d est %d !\n", n,p,combinaison);
    }
    return 0;
}
