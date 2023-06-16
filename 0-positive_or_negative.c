#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* headers goes there */
/* betty style doc for main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* the  code goes there */
       while (n != 0) 
       {
        if (n > 0) 
	{
            printf("%d is positive\n", n);
        } else {
            printf("%d is negative \n", n);
	}  
        printf("zero");
	return (0);
}
