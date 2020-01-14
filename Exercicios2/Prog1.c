#include <stdio.h>

int main(){
    float fahr;
    float cels;

    printf("Introduza a temperatura em fahrenheit:\n");
    scanf("%f", &fahr);
    cels = (fahr - 32) / 1.8000;
    printf("O resultado é %f\n", cels);


}