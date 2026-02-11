#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user, computer;

    printf("=================================\n");
    printf("     ROCK PAPER SCISSORS GAME     \n");
    printf("=================================\n");

    srand(time(0)); // seed for random number

    while (1)
    {
        printf("\nChoose:");
        printf("\n1. Rock");
        printf("\n2. Paper");
        printf("\n3. Scissors");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &user);

        if (user == 4)
        {
            printf("\nThanks for playing!");
            break;
        }

        if (user < 1 || user > 3)
        {
            printf("\nInvalid choice! Try again.");
            continue;
        }

        computer = (rand() % 3) + 1;

        printf("\nYou chose: ");
        switch (user)
        {
        case 1:
            printf("Rock");
            break;
        case 2:
            printf("Paper");
            break;
        case 3:
            printf("Scissors");
            break;
        }

        printf("\nComputer chose: ");
        switch (computer)
        {
        case 1:
            printf("Rock");
            break;
        case 2:
            printf("Paper");
            break;
        case 3:
            printf("Scissors");
            break;
        }

        // Result logic
        if (user == computer)
        {
            printf("\nResult: It's a Draw!");
        }
        else if ((user == 1 && computer == 3) ||
                 (user == 2 && computer == 1) ||
                 (user == 3 && computer == 2))
        {
            printf("\nResult: You Win! 🎉");
        }
        else
        {
            printf("\nResult: Computer Wins!");
        }
    }

    return 0;
}