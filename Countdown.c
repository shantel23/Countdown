#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, t, n, x;

    printf("\t\t\tCOUNT DOWN\n");
    printf("\t\t\tCREATIVE COMPUTING\n");
    printf("\t\t\tMORRISTOWN, NEW JERSEY\n");

    printf("\n\n\n");

    srand(time(NULL));
    //to extract the time value

    a = rand() % 10;
    t = 0;
    n = 0;

    printf("YOU HAVE ACTIVATED THE SELF-DESTRUCT MECHANISM\n");
    printf("IN THIS SCHOOL.\n");
    printf("IF YOU WISH, YOU MAY STOP THE MECHANISM.\n");
    printf("TO DO SO, JUST TYPE IN THE CORRECT NUMBER,\n");
    printf("WHICH WILL STOP THE COUNT-DOWN.\n");
    printf("PLEASE HURRY!! THERE IS NO TIME TO WASTE!!!!!!!\n");
    printf("WHAT'LL IT BE\n");


 while (t <= 4)
    {
    scanf("%d", &x);
    //to extract the x value

        if (x == a)
        {
            printf("CORRECT!!!\n");
            printf("END!!!!\n");
            n = 5;
            t = 10;
            break;
        }

        if (x < a)
        {
            printf("TOO SMALL!!!!!\n");
            printf("YOUR NUMBER DOES NOT COMPUTE!!!\n");
            printf("PLEASE TRY AGAIN!!!!\n");
            t = t + 1;
        }
    
        if (x > a)
        {
            printf("TOO BIG!!!!!\n");
            printf("YOUR NUMBER DOES NOT COMPUTE!!!\n");
            printf("PLEASE TRY AGAIN!!!!\n");
            t = t + 1;
        }

        if ( (t >= 2) && (t != 4))
        {
            printf("TIME GROWS SHORT, PLEASE HURRY!!!!!!!!\n");
            t = t + 1;
        }
        
    }
   
    if (t == 4) 
        {    
        printf("TOO LATE\n");   
        printf("BOOOOOM--- \n");
        t = t + 1;
        }
    
}
 



 



   


   


