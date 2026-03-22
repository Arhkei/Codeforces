#include <stdio.h>

int main(void) {
    int numProblems, problemsSolved = 0;
    int petya, vasya, tonya;

    scanf("%d", &numProblems);

    for (int i = 0; i < numProblems; i++) {
        scanf("%d %d %d", &petya, &vasya, &tonya);
        if ((petya + vasya + tonya) >= 2) {
             problemsSolved++;
        }
    }

    printf("%d\n", problemsSolved);
    return 0;
}