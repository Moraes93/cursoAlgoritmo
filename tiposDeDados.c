#include <stdio.h>

int main() {

    int idade = 40;
    float altura = 1.90;
    float corre = 2.400;
    char nome[30] = "Tiago";
    
    printf("O %s tem %d anos de idade e %.2f de altura. Ele corre %.3f metros\n\n", nome, idade, altura, corre);
    
    return 0;
}
