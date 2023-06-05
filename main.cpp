#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    
    int soma = 0, digito = 0;

    while (n > 0)
    {
        digito = n % 10; 
        soma = soma + digito;
        n = n / 10; 
    }
    
    printf("%d", soma);

    return 0;
}
