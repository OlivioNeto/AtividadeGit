// Ex 31//
#include <stdio.h>

void ParImpar(int num)
{
    if (num % 2 == 0)
    {
        printf("%d é par.\n", num);
    }
    else
    {
        printf("%d é impar.\n", num);
    }
}

int main()
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    ParImpar(valor);
    return 0;
}