#include <stdio.h>

int main()
{
    int choice;

    printf("========================================\n");
    printf("        WELCOME TO PRISON ESCAPE         \n");
    printf("========================================\n\n");

    printf("You wake up in prison.\n");
    printf("Freedom is calling... but not loudly.\n\n");

    /* STEP 1 */
    printf("SITUATION 1: The guard is distracted. WHAT WILL YOU DO?\n");
    printf("1. Sing lullaby (put guard to sleep )\n");
    printf("2. Scream 'I AM INNOCENT' (spoiler: you aren't)\n");
    printf("3. Stay quiet and observe like a mastermind \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 3:
        printf("Nice! Silence is golden (and legal).\n\n");
        break;
    default:
        printf("Bad move! Guard says: 'Nice try.' GAME OVER \n");
        return 0;
    }

    /* STEP 2 */
    printf("SITUATION 2: You find a spoon and a pin. WHAT WILL YOU DO?\n");
    printf("1. Dig tunnel (Minecraft style )\n");
    printf("2. Pick lock like a movie hero \n");
    printf("3. Eat with spoon (wrong priorities )\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 2:
        printf("Lock opened! Hollywood would be proud \n\n");
        break;
    default:
        printf("Seriously? That was your plan? GAME OVER \n");
        return 0;
    }

    /* STEP 3 */
    printf("SITUATION 3: Corridor ahead! WHAT WILL YOU DO?\n");
    printf("1. Walk confidently like you belong there \n");
    printf("2. Run like Tom & Jerry \n");
    printf("3. Moonwalk (MJ would approve )\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Confidence level 100! Guards ignored you.\n\n");
    }
    else
    {
        printf("Nice performance, but guards aren't fans. GAME OVER \n");
        return 0;
    }

    /* STEP 4 */
    printf("SITUATION 4: Exit gate spotted! WHAT WILL YOU DO?\n");
    printf("1. Climb the gate (gym membership helps )\n");
    printf("2. Use distraction alarm \n");
    printf("3. Ask guard politely (manners matter?)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 2:
        printf("Alarm worked! Guards ran the wrong way \n\n");
        break;
    default:
        printf("That plan belonged in jail. GAME OVER \n");
        return 0;
    }

    /* FINAL STEP */
    printf("FINAL SITUATION: Freedom is one step away! WHAT WILL YOU DO?\n");
    printf("1. Run straight to freedom \n");
    printf("2. Stop to post escape selfie \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\n========================================\n");
        printf(" YOU ESCAPED SUCCESSFULLY! \n");
        printf(" Crime may not pay, but logic does \n");
        printf("========================================\n");
    }
    else
    {
        printf("Likes can wait. Prison cannot. GAME OVER!!!\n");
    }

    return 0;
}