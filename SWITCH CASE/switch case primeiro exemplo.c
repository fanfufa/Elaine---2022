#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n;
    printf("Digite um n�mero entre 1 e 7: ");
    scanf("%d", &n);
    switch(n)
    {
        case 1: printf("Domingo");
            break;
        case 2: printf("Segunda");
            break;
        case 3: printf("Ter�a");
            break;
        case 4: printf("Quarta");
            break;
        case 5: printf("Quinta");
            break;
        case 6: printf("Sexta");
            break;
        case 7: printf("S�bado");
            break;
        default: printf("Valor inv�lido");
    }
    return 0;
}
