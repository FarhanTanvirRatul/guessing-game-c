#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int guess,random,count=0;
    srand(time(NULL));
    printf("Wellcome To The game!\n");
    random=rand()%100+1;
    do{
        printf("Enter a Number between 1 to 100: \n");
        scanf("%d",&guess);
        count++;
        if(guess<random)
        {
           printf("guess bigger value!\n");
        }else if(guess>random)
        {
            printf("guess smaller value!");
        }else printf("Congratulations!!!!\nYou have guessed right in %d attemps",count);

    } while (guess!=random);
    printf("\n\nThanks For Playing\nCreated By Farhan Tanvir Ratul.....");
}