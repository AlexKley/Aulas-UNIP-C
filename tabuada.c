/*****************************************************************************/
/************************ Programa Tabuada - Alura ***************************/
/*****************************************************************************/

#include <stdio.h>

int main()
{
    int numero, i, result;
    
    printf("Digite um número Inteiro qualquer: \n");
    scanf("%d", &numero);
    
    for (i=0; i<=10; i++){
        result = numero * i;
        printf("%d x %d = %d\n", numero, i, result);
    }

    return 0;
}
