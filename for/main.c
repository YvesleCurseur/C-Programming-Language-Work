#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, tab[4];
	for (i = 0; i < 5; i++) {
	printf("Entrer la valeur %d :",i+1);
    scanf("%d",&tab[i]);
	}
	for (i = 0; i < 15; i++)
	printf("Tab[%d] = %d\n",tab[i],i);
    return 0;
}
