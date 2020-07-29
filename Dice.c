// Program 1:

// Write a program to design a Dice game. There should be two players. Ask the users to enter their names and roll the dice(four times each). Display the scores and calculate the final score and print the name of the winner.

#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
	char p1[10],p2[10];
	int s1=0,s2=0;
	int q=0,r=0;
    printf("Enter player 1 name \n");
    scanf("%s",&p1);
    printf("Enter player 2 name \n");
    scanf("%s",&p2);
    for (int i=0;i<4;i++)
    {
    	printf("chance of %s \n",&p1);
    	q = rand() % 6;
    	printf("You got %d \n",q);
    	s1=s1+q;
    	printf("chance of %s \n",&p2);
    	r = rand() % 6;
    	printf("You got %d \n",r);
    	s2=s2+r;


    }
    printf("Total scores for %s is %d \n",&p1,s1);
    printf("Total scores for %s is %d \n",&p2,s2);
    printf("The winner is\n");
    if(s1>s2)
    	printf("%s",&p1);
    else
    	printf("%s",&p2);



	return 0;
}
