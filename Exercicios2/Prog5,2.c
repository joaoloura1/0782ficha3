#include <stdio.h>

int main (){
    int opera;
    int num1;
    int num2;
    int total;

    printf("Escolhe uma das operações: 1-multiplicação 2-divisão 3-adição 4-subtração\n");
    scanf("%d", &opera);

    if(opera == 1){
      printf("Escolheu multiplicação, introduza 2 numeros:\n");
            scanf("%d", &num1);
            scanf("%d", &num2);
            total = num1*num2;
            printf(" o total é %d\n", total);
    }else if(opera == 2){
       printf("Escolheu divisão, introduza 2 numeros:\n");
            scanf("%d", &num1);
            scanf("%d", &num2);
            total = num1/num2;
            printf(" o total é %d\n", total); 
    }else if(opera == 3){
        printf("Escolheu adição, introduza 2 numeros:\n");
            scanf("%d", &num1);
            scanf("%d", &num2);
            total = num1+num2;
            printf(" o total é %d\n", total);
    }else if ( opera == 4){
        printf("Escolheu subtração, introduza 2 numeros:\n");
            scanf("%d", &num1);
            scanf("%d", &num2);
            total = num1*num2;
            printf(" o total é %d\n", total);
    }
}