#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, t, n, x;

    printf("\t\t\t\t\t\tCOUNT DOWN\n");
    printf("\t\t\tCREATIVE COMPUTING\n");
    printf("MORRISTOWN, NEW JERSEY\n");

    printf("\n\n\n");

    srand(time(NULL));

    a = rand() % 10;
    t = 0;
    n = 0;

    printf("WHAT'LL IT BE\n");


type_again:
    scanf("%d", &x);

try_again:
    if (t == 4)
    {
        goto end;
    }
    else
    {
        if (x < a)
        {
            printf("TOO SMALL!!!!!\n");
            printf("YOUR NUMBER DOES NOT COMPUTER!!!\n");
            t = t + 1;

            goto type_again;
        }
        if (x > a)
        {
            printf("TOO BIG!!!!!\n");
            printf("YOUR NUMBER DOES NOT COMPUTER!!!\n");
            t = t + 1;

            goto type_again;
        }
        if (x == a)
        {
            printf("CORRECT!!! END!!!!");
            n = 5;
            t = 10;
            exit(0);
        }
    }

    if (t == 2)
    {
        printf("TIME GROWS SHORT, PLEASE HURRY!!!!!!!!\n");
        goto try_again;
    }
    if (t == 3)
    {
        printf("TIME GROWS SHORT, PLEASE HURRY!!!!!!!!");
        goto try_again;
    }


end:
    printf("BOOOOOM--- \n");

}
