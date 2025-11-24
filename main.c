#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int NumInRange(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main(){
    srand(time(NULL));
    int option;
    printf ("Choose one: \n");
    printf ("1. Guess between 0 to 10 (3 tries)\n");
    printf ("2. Guess between 0 or 1 (1 try)\n");
    printf ("1 or 2: ");
    scanf ("%d", &option);
    if (option == 2) {
        int sn = NumInRange(0, 1);
        int guess;
        printf ("Guess the Number (0 or 1): ");
        scanf ("%d", &guess);
    if (guess == sn) {
        printf("You Won!\n");
    } else {
        printf("You lost!\n");
    }
    } else {
        int i = 0;
        int sn = NumInRange(0, 10);
        int guess;
        int victory;
        while (i != 3) {
            printf ("Guess the Number (0 to 10): ");
            scanf ("%d", &guess);
            i++;
            if (guess == sn) {
                printf("You Won!\n");
                victory = 1;
            } else {
                printf("Retry!\n");
            }
        }
        if (victory != 1){
        printf ("You lost!\n");
        }
    }
    return 0;
}