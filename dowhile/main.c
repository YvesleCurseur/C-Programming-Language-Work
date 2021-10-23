#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N; do {
        printf("Introduisez un nombre entre 1 et 10 :");
        scanf("%f", &N);
        }
    while (N<1 || N>10);
}
