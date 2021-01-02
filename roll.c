#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

void dice(int i)
{
    switch (i)
    {
    case 1:
        printf("1️⃣   ");
        break;
    case 2:
        printf("2️⃣   ");
        break;
    case 3:
        printf("3️⃣   ");
        break;
    case 4:
        printf("4️⃣   ");
        break;
    case 5:
        printf("5️⃣   ");
        break;
    case 6:
        printf("6️⃣   ");
        break;
    case 7:
        printf("7️⃣   ");
        break;
    case 8:
        printf("8️⃣   ");
        break;
    case 9:
        printf("9️⃣   ");
        break;
    case 0:
        printf("0️⃣   ");
        break;
    default:
        printf("error\n");
        break;
    }
}

int concat(int x, int y)
{
    char str1[20];
    char str2[20];

    sprintf(str1, "%d", x);
    sprintf(str2, "%d", y);

    strcat(str1, str2);

    return atoi(str1);
}

int roll()
{
    int rand1 = (rand() % 10);
    int rand2 = (rand() % 10);

    dice(rand1);
    dice(rand2);

    if (rand1 == rand2)
    {
        printf("!! Pasch !!");
    }

    printf("\nDice rolled: %d%d 🎲 \n", rand1, rand2);
    return concat(rand1, rand2);
}

int calc(int att)
{

    int rolled = roll();
    int result = att - rolled;

    if (rolled < att)
    {
        printf("Success: %d \n", result);
    }
    else if (rolled > att)
    {
        printf("fail: %d \n", result);
    }
    else if (rolled == att)
    {
        printf("gleich %d \n", result);
    }
    else
    {
        printf("%d \n", result);
    }

    return result;
}

int main()
{
    int a;

    srand(time(0));
    printf("🎲🎲 Success Roller 🎲🎲\n");

    while (1)
    {
        printf("input: ");
        scanf("%d", &a);
        calc(a);
        printf("------------\n");
    }

    return 0;
}
