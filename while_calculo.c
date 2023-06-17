#include <stdio.h>
int main(){
    float largura, profundidade, resultado;
    int resp;
    largura=0;
    profundidade=0;
    resultado=0;
    printf("\n CALCULO DE METROS QUAGRADOS");
    do{
    printf("\n\nDigite a largura do terreno:");
    scanf("%f",&largura);
    printf("\n\nDigite a profundidade do terreno:");
    scanf("%f", &profundidade);
    resultado = largura*profundidade;
    printf("\n\nO terreno tem = %.2f m2", resultado);
    printf("\n\nDigite 1 para continuar ou 2 para sair:");
    scanf("%d", &resp);
    } while (resp==1);
    return 0;
}