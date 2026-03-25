#include <stdio.h>

int main(void) {
    int height, width;
    int dominoes = 0;

    scanf("%d %d", &height, &width);
    dominoes += (height/2) * width;
    
    if ((height % 2) != 0) {
        dominoes += (width/2);
    }
    
    printf("%d\n", dominoes);
    return 0;    
}

//It looks like it can be solved with just dominoes = (height*width)/2 !
