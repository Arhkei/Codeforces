#include <stdio.h>

int main(void) {
    int x = 0;
    int numStatements = 0;
    char statement[4];

    scanf("%d", &numStatements);

    for (int i = 0; i < numStatements; i++) {
        scanf("%3s", statement);

        if (statement[1] == '+') {
            x++;
        } else {
            x--;
        }
    }

    printf("%d\n", x);
    
    return 0;
}