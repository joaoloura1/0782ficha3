#include <stdio.h>

int main (){
    float vencedor1;
    float vencedor2;
    float vencedor3;
    float num;
    num = 50000000;

    vencedor1 = num * 0.46;
    vencedor2 = num * 0.32;
    vencedor3 = num * 0.22;

    printf("1º lugar: %f\n", vencedor1);
    printf("2º lugar: %f\n", vencedor2);
    printf("3º lugar: %f\n", vencedor3);

}