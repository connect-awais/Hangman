#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    char word[]="hello";
    char guess[6]="_____";
    char letter;
    int attempts=6, correctGuesses=0, wordLength=strlen(word);

    printf("Welcome to the Hangman!");

    while(attempts > 0 && correctGuesses < wordLength)
    {
        printf("\nWord : %s",guess);
        printf("\nAttempts left: %d",attempts);
        printf("\nEnter letter: ");
        scanf(" %c",&letter);

    int found = 0;

    for(int i = 0;i < wordLength; i++)
    {
        if(word[i] == letter && guess[i] == '_')
        {
            guess[i] = letter;
            found = 1;
            correctGuesses++;
        }
    }
    
    if (!found)
    {
        attempts--;
        printf("\nWrong guess!");
    }

    }

    if(correctGuesses == wordLength)
    {
        printf("\nCongratulations!You Guess the word : %s",word);
    }

    else
    {
        printf("\nTry Again!The word is: %s",word);
    }
    return 0;
    getch();
}