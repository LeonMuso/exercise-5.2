#include <stdio.h>

int main(void) {
    int eta[] = {14, 45, 85, 72, 32, 36, 3, 94, 25, 14};
    int indice = 0;
    while (indice < 10) {
        if (eta[indice] > 18) {
            printf("%d / %d\n", eta[indice], indice + 1);
        }
        indice++;
    }
}
