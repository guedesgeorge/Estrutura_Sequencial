#include <stdio.h>

int main()
{
    float Nota1, Nota2, Nota3, media;


    printf("Digite a primeira nota: ");
    scanf("%f", &Nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &Nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &Nota3);

    media = (Nota1 + Nota2 + Nota3) / 3;

    printf("A media do aluno das tres notas eh: %.2f\n", media);
    return 0;
}
