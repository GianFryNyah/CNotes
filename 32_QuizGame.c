#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // QUIZ GAME

    char questions[][110] = {"What is the largest planet in the solar system?",
                             "What is the hottest planet?",
                             "What planet has the most moons?",
                             "Is the Earth flat?"};

    char options[][110] = {"(A). Jupiter\n(B). Saturn\n(C). Uranus\n(D). Neptune\n",
                           "(A). Mercury\n(B). Venus\n(C). Earth\n(D). Mars\n",
                           "(A). Earth\n(B). Mars\n(C). Jupiter\n(D). Saturn\n",
                           "(A). Yes\n(B). No\n"};

    char answerKey[] = {'A', 'B', 'D', 'A'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*********************  Q U I Z    G A M E  *********************\n");

    for (int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("Enter your answer: ");
        char buff[10];
        fgets(buff, sizeof(buff), stdin);
        guess = buff[0];
        guess = toupper(guess);
        if (guess == answerKey[i]){
            printf("Correct!\n");
            score++;
        }
        else{
           printf("Wrong!\n"); 
           printf("The correct answer is %c!\n", answerKey[i]);
        }
        //printf("Your answer is %c\n", guess);
        //printf("DEBUG: Buffer content is %s", buff);
    }

    printf("\nYour score is %d out of %d points!\n", score, questionCount);
    return 0;
}