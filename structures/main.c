#include <stdio.h>
#include <stdlib.h>
/*struct point
{
    double abs;
    double ord;
};
int main()
{
    struct point p;
    double somme;
    p.ord=2;
    p.abs=p.ord+1;
    somme=p.ord+p.abs;
    printf("\np = (%f,%f)\n",p.abs,p.ord);
    printf("\n");
    printf("%f+%f=%f\n",p.abs,p.ord,somme);
    return 0;
}
*/
/*typedef struct etudiant
{
    int mat;
    char nom[20];
    char pren[30];
    char sexe[1];
    int age;
    float moy;
} etudiant;
int main()
{
    etudiant etu={100,"Yao","Jean","F",19,15.0};
    printf("Entrer le matricule : ");
    scanf("%d",&etu.mat);
    printf("\n");
    printf("Entrer le nom de l'etudiant : ");
    scanf("%c",&etu.nom);
    printf("\n");
    printf("%d,%s,%s,%s,%d,%f",etu.mat,etu.nom,etu.pren,etu.sexe,etu.age,etu.moy);
    printf("\n");
    return 0;
}
*/
typedef struct etudiant
{
    int mat;
    char nom[20];
    char pren[30];
    char sexe[1];
    int age;
    float moy;
} etudiant;
int main()
{
    etudiant etu[2];
    int i;
    for (i=0;i<2;i++){
        printf("Matricule : ");
        scanf("%d",&etu[i].mat);
        printf("Nom : ");
        scanf("%s",&etu[i].nom);
    };
    for(i=0; i<2; i++){
        printf("[%d],[%s]\n",etu[i].mat,etu[i].nom);
            };
    printf("\n");
    return 0;
}
