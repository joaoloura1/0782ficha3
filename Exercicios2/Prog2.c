#include <stdio.h>

int main (){
    int numero;
    int ante;
    int dep;
    
    printf(" Introduz um numero\n");
    scanf("%d", &numero);
    dep = numero + 1;
    ante = numero - 1;
    printf("antecessor é: %d e o sucessor é: %d\n", ante , dep);
}