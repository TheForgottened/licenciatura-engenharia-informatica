#include <stdio.h>
#include <string.h>

#define TAM 20

int main(int argc, char *argv[]) {
    int i;
    char known[][TAM] = {"Computador", "Parede", "Bola", "Correr", "Falar"};
    char trans[][TAM] = {"Computer", "Wall", "Ball", "Run", "Speak"};

    for(i = 0; i < 5; i++) {
        if (strcmp(known[i], argv[1]) == 0) {
            printf("A traducao de %s para ingles e %s!\n", argv[1], trans[i]);
            i = 5;
        }
    }

    return 0;
}