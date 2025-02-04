#include <stdio.h>
int main(void)
{
    int n, i;
    int tabla[n];
    printf("Introduce un número entero para calcular sus potencias ");
    scanf("%d", &n);
        for (i=1; i<=n; i++)
        {
            tabla[i]=i*n;
            printf("%5d\n", tabla[i]);
        }
    
    }