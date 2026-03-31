#include <stdio.h>

int main (void) {
    char lineup[101];
    int count = 1;

    scanf("%100s", lineup);

    for (int i = 1; lineup[i] != '\0'; i++) {
        if (lineup[i] == lineup[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count == 7) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}