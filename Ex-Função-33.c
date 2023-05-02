// Ex 33//
#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c)
{
    return b * b - 4 * a * c;
}

float raiz_real(float a, float b, float delta)
{
    return (-b + sqrt(delta)) / (2 * a);
}

float raiz_imaginaria(float a, float b, float delta)
{
    return sqrt(-delta) / (2 * a);
}

int main()
{
    float a, b, c, d;

    printf("Digite os coeficientes a, b e c da equação do 2o grau (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    d = delta(a, b, c);

    if (a == 0)
    {
        printf("O coeficiente 'a' deve ser diferente de zero.");
        return 0;
    }

    if (d >= 0)
    {
        float x1 = raiz_real(a, b, d);
        float x2 = raiz_real(a, b, d);

        printf("As raízes da equação são reais e são: %.2f e %.2f", x1, x2);
    }
    else
    {
        float parte_real = -b / (2 * a);
        float parte_imaginaria = raiz_imaginaria(a, b, d);

        printf("As raízes da equação são complexas e são: %.2f + %.2fi e %.2f - %.2fi", parte_real, parte_imaginaria, parte_real, parte_imaginaria);
    }

    return 0;
}