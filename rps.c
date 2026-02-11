#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define TIME_LIMIT 3.0

int main()
{
    int user, computer;
    int player_wins = 0;
    int computer_wins = 0;
    int rounds = 0;
    int unlocked = 0;

    clock_t start, end;
    double time_taken;

    srand(time(0));

    printf("=================================\n");
    printf("     ROCK PAPER SCISSORS GAME     \n");
    printf("=================================\n");

    while (rounds < 10)
    {
        printf("\nRound %d of 10\n", rounds + 1);
        printf("Score -> You: %d | Computer: %d\n", player_wins, computer_wins);

        printf("\nChoose:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");

        if (unlocked)
        {
            printf("4. Fire\n");
            printf("5. Water\n");
        }

        printf("\nGet Ready...");
        fflush(stdout);

        int delay = (rand() % 4) + 2; // 2 to 5 seconds
        Sleep(delay * 1000);

        printf("\nGO!\n");

        start = clock();
        scanf("%d", &user);
        end = clock();

        time_taken = (double)(end - start) / CLOCKS_PER_SEC;

        // Too slow → automatic move
        if (time_taken > TIME_LIMIT)
        {
            printf("Too slow! Automatic move selected.\n");
            if (unlocked)
                user = (rand() % 5) + 1;
            else
                user = (rand() % 3) + 1;
        }

        // Validate input
        if ((!unlocked && (user < 1 || user > 3)) ||
            (unlocked && (user < 1 || user > 5)))
        {
            printf("Invalid choice! Round skipped.\n");
            rounds++;
            continue;
        }

        // Computer move
        if (unlocked)
            computer = (rand() % 5) + 1;
        else
            computer = (rand() % 3) + 1;

        // Show choices
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
        case 4:
            printf("Fire");
            break;
        case 5:
            printf("Water");
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
        case 4:
            printf("Fire");
            break;
        case 5:
            printf("Water");
            break;
        }

        // RESULT LOGIC (Simple If-Else)
        if (user == computer)
        {
            printf("\nResult: Draw!");
        }
        else if (
            (user == 1 && (computer == 3 || computer == 4)) || // Rock beats Scissors & Fire
            (user == 2 && (computer == 1 || computer == 5)) || // Paper beats Rock & Water
            (user == 3 && (computer == 2 || computer == 5)) || // Scissors beats Paper & Water
            (user == 4 && (computer == 2 || computer == 3)) || // Fire beats Paper & Scissors
            (user == 5 && (computer == 1 || computer == 4))    // Water beats Rock & Fire
        )
        {
            printf("\nResult: You Win! 🎉");
            player_wins++;

            if (player_wins == 5 && !unlocked)
            {
                unlocked = 1;
                printf("\n🔥 SECRET MOVES UNLOCKED: FIRE & WATER 🔥\n");
            }
        }
        else
        {
            printf("\nResult: Computer Wins!");
            computer_wins++;
        }

        printf("\nReaction Time: %.2f seconds\n", time_taken);

        rounds++;
        printf("\n---------------------------------\n");
    }

    // FINAL RESULT AFTER 10 ROUNDS
    printf("\n========== FINAL RESULT ==========\n");
    printf("You: %d\n", player_wins);
    printf("Computer: %d\n", computer_wins);

    if (player_wins > computer_wins)
        printf("Overall Winner: You 🎉\n");
    else if (computer_wins > player_wins)
        printf("Overall Winner: Computer\n");
    else
        printf("Match Draw!\n");

    printf("==================================\n");

    return 0;
}
