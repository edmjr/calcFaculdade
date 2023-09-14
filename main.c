#include <stdio.h>

int main()
{
    float num1, num2, result;
    int opc;
    
    printf("Bem vindo a calculadora.\n");
    
    printf("Opção 1 - Soma\n");
    printf("Opção 2 - Subtração\n");
    printf("Opção 3 - Multiplicação\n");
    printf("Opção 4 - Divisão\n");
    
    printf("Escolha a opção desejada: (Entre 1 e 4)\n");
    scanf("%d", &opc);
    
    while(opc<1 || opc>4){
        printf("Opção incorreta, escolha uma opção entre 1 e 4: ");
        scanf("%d", &opc);
    }
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    
    if(opc == 1)
    result=num1+num2;
    if(opc == 2)
    result=num1-num2;
    if(opc == 3)
    result=num1*num2;
    if(opc == 4)
    result=num1/num2;
    
    printf("O resultado final é: %f", result);
    
    
    return 0;

}
