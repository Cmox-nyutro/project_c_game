// genrate random number

#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int randomnum = (rand() % 200) + 1;
    int no_of_guesses = 0;
    int guessed;
    do
    {
        printf("Enter the number:"\n);
        scanf("%d", &guessed);
        if (guessed<randomnum) //60<100 
        {
            printf("please Enter higher number.....\n");
        }
        else if (guessed>randomnum) //129>100
        {
            printf("please Enter smalest value.....\n");
        }
        else
        {
            printf("congrats....");
        }
        no_of_guesses++;
    } while (guessed!=randomnum); // they can run continouse when itertion is true
    printf("Your guessed number is %d ",no_of_guesses);
    return 0;
}
