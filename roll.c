#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

static void rtfm(char *argv[])
{
    printf("Usage: %s  <param1> \n", argv[0]);
    printf("Function: Dice Roll\n");
    printf("Optionen:\n");
    printf("     [int]                   - pass an INT and Roll\n");
    printf("\n");
}

int rng()
{
    int randomData = open("/dev/urandom", O_RDONLY);
    if (randomData < 0)
    {
        // something went wrong
    }
    else
    {
        char myRandomData[50];
        ssize_t result = read(randomData, myRandomData, sizeof myRandomData);
        if (result < 0)
        {
            // something went wrong
        }
    }
    return [int]result
}

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

int main(int argc, char *argv[])
{
    int a;

    srand(time(0));
    system("clear");
    printf("🎲🎲 Success Roller 🎲🎲\n");

    if (argc > 2)
    {
        rtfm(argv);
    }
    else if (argv[1])
    {
        printf("input: %s \n", argv[1]);
        int x = atoi(argv[1]);
        x = calc(x);
        printf("------------\n");
        return 0;
    }
    else
    {
        while (1)
        {
            printf("input: ");
            scanf("%d", &a);
            calc(a);
            printf("------------\n");
        }
    }

    return 0;
}