#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    srand(time(0));
    int player, computer = rand() % 3;
    printf("====================================================\n");
    printf("                                                    \n");
    printf("            WELCOME TO THE RPS SHOWDOWN             \n");
    printf("                                                    \n");
    printf("====================================================\n");

    printf("Choose 0 for Rock, 1 for Paper, 2 for Scissors :");
    if (scanf("%d" , &player) != 1 || player < 0 || player > 2){
        printf("\nError: Invalid input! Please enter 0, 1, or 2 next time.\n");
        return 1;
    }

    const char* choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s | Computer chose: %s\n\n", choices[player], choices[computer]);

    int result = (player - computer + 3) % 3;

    if (result == 0) 
    {
        printf("AWW!! Mate it's a draw.");
    } 
    else if (result == 1) 
    {
        printf("DAMNN!! Mate you won.");
    } 
    else 
    {
        printf("AWW!! Mate computer won.");
    }

    printf("\n");
    printf("====================================================\n");
    printf("              Thanks for playing                    \n");
    printf("               THE RPS SHOWDOWN                   \n");
    printf("====================================================\n");

    return 0;
}