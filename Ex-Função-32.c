
// Ex 32//
#include <stdio.h>

void Positivo(int num)
{
    if (num >= 0)
    {
        printf("%d e positivo.\n", num);
    }
    else
    {
        printf("%d e negativo.\n", num);
    }
}

int main()
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    Positivo(valor);
    return 0;
}