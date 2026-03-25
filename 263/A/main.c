#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int row, column;
    int target = 0;
    int moves;

    for (int i = 0; i < 25; i++) {
        scanf("%d", &target);
        if (target == 1) {
            row = (i/5) + 1;
            column = (i%5) + 1;
        }
    }   
    moves = abs(row - 3) + abs(column - 3); 
    printf("%d\n", moves);
}
