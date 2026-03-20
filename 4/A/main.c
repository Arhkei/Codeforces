#include <stdio.h>

int main(void) {
    int userInput;
    scanf("%d", &userInput);

    if (userInput > 2 && userInput % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}