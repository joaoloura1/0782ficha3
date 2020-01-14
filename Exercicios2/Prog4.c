#include <stdio.h>

int main() {
    int dia;
     printf(" introduza um numero:\n");
     scanf("%d",&dia);
     if(dia == 1 || dia == 2 || dia == 3 || dia == 4 || dia == 5 || dia == 6 || dia == 7){
     
     switch(dia){
     
     case 1:
     printf(" %d É Domingo\n", dia);
     break;

     case 2:
     printf(" %d É Segunda\n", dia);
     break;

     case 3:
     printf(" %d É Terça\n", dia);
     break;

     case 4:
     printf(" %d É Quarta\n", dia);
     break;

     case 5:
     printf(" %d É Quinta\n", dia);
     break;

     case 6:
     printf(" %d É Sexta\n", dia);
     break;

     case 7:
     printf(" %d É Sabado\n", dia);
     break;


     }
     }
}