#include <stdio.h>

int main(void) {
 int assentos[3][4] = {
 {0, 1, 0, 0},
 {1, 1, 0, 1},
 {0, 0, 1, 0}
 };

 for (int i = 0; i < 3; i++) {
 int totalFileirasocupadas = 0;

 for (int j = 0; j < 4; j++) {
 totalFileirasocupadas += assentos[i][j];
 }

 printf("Assentos ocupados Fileira %d: %d assento\n", i + 1, totalFileirasocupadas);
 printf("Assentos livres Fileira %d: %d assento\n",i + 1, 4 - totalFileirasocupadas);
 }
 return 0;
}
