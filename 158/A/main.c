#include <stdio.h>

int main(void) {
    int total_participants, advancement_rank;
    int advancing_participants = 0;
    int scores [55];
    
    scanf("%d %d", &total_participants, &advancement_rank);

    for (int i = 0; i < total_participants; i++) {
        scanf("%d", &scores[i]);
    }   

    for (int i = 0; i < total_participants; i++) {
        if (scores[i] > 0 && scores[i] >= scores[advancement_rank-1]) {
            advancing_participants++;
        } else {
            break;
        }
    }   

    printf("%d\n", advancing_participants);
    return 0;
}
