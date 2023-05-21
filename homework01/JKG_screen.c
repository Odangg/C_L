#include "JKG_screen.h"

int screen_clear(char* screen)
{
    int i = 0;

    while (i < 1000)
    {
        int j = i % 50;

        screen[i] = '#';

        if (j >= 3 && j <= 47 && i >= 53 && i <= 947)
        {
            screen[i] = ' ';
        }
        else
        {
            screen[i] = '#';
        }

        if (j == 0)
        {
            screen[i] = '\n';
        }
        if (i == 999)
        {
            screen[i + 1] = '\0';
        }
        i = i + 1;
    }

    return 0;
}

int Write_Screen(char* screen, const char* string, int x, int y)
{
    int i = x * y;
    int j = i % 50;
    int length = strlen(string);

    if (j >= 3 && j <= 47 && i >= 53 && i <= 947)
    {
        for (int k = 0; k < length; k++)
        {
            screen[i + k] = string[k];
        }
    }
    else
    {
        printf("this is not the right position");
    }

    return 0;
}

int Main_screen(char* screen)
{
    system("cls");
    screen_clear(screen);
    char mesg1[] = "Just Keep Going";
    char mesg2[] = "V.01";
    char mesg3[] = "1. Game Start";
    char mesg4[] = "2. Help Menu";
    char mesg5[] = "3. Collection";
    char mesg6[] = "4. Exit";

    Write_Screen(screen, mesg1, 117, 1);
    Write_Screen(screen, mesg2, 172, 1);
    Write_Screen(screen, mesg3, 506, 1);
    Write_Screen(screen, mesg4, 556, 1);
    Write_Screen(screen, mesg5, 606, 1);
    Write_Screen(screen, mesg6, 656, 1);
    printf("%s", screen);

    screen_clear(screen);

    return 0;
}

int Sry_screen(char* screen)
{
    system("cls");
    screen_clear(screen);
    int any = 0;
    char mesg1[] = "This is a feature not yet implemented.";

    Write_Screen(screen, mesg1, 456, 1);
    printf("%s", screen);

    printf("\nEnter any number to return to the main screen.\n>> ");
    scanf("%d", &any);
    Main_screen(screen);

    return 0;
}

int Help_screen(char* screen)
{
    system("cls");
    int select = 0;
    int helpon = 1;
    char mesg1[] = "It is a turn-based roguelike RPG game";
    char mesg2[] = "where you choose the character you like";
    char mesg3[] = "the most and make the choices";
    char mesg4[] = "you like the most.";
    char mesg5[] = "Just Keep Going!!";
    char mesg6[] = "Return to main?(1. Yes / 2. No)";

    Write_Screen(screen, mesg1, 156, 1);
    Write_Screen(screen, mesg2, 205, 1);
    Write_Screen(screen, mesg3, 260, 1);
    Write_Screen(screen, mesg4, 315, 1);
    Write_Screen(screen, mesg5, 666, 1);
    Write_Screen(screen, mesg6, 860, 1);
    printf("%s", screen);

    while (helpon)
    {
        printf("\n>>");
        scanf("%d", &select);
        if (select == 1)
        {
            Main_screen(screen);
            helpon = 0;
        }
        else if (select == 2)
        {
            printf("Return to main?(1. Yes / 2. No)");
        }
        else
        {
            printf("Please re-enter the number");
        }
    }

    return 0;
}

int Char_select_screen(char* screen)
{
    system("cls");
    screen_clear(screen);
    int select_on = 1;
    int select = 0;
    char mesg1[] = "Choose a character to play";
    char mesg2[] = "1. Warrior";
    char mesg3[] = "2. Paladin";
    char mesg4[] = "3. Wizard";
    char mesg5[] = "4. Assassin";
    char mesg6[] = "5. Back to main";

    Write_Screen(screen, mesg1, 162, 1);
    Write_Screen(screen, mesg2, 369, 1);
    Write_Screen(screen, mesg3, 419, 1);
    Write_Screen(screen, mesg4, 469, 1);
    Write_Screen(screen, mesg5, 519, 1);
    Write_Screen(screen, mesg6, 619, 1);
    printf("%s", screen);

    while (select_on)
    {
        printf("\nInput num >> ");
        scanf("%d", &select);

        if (select >= 1 && select <= 4)
        {
            Sry_screen(screen);
            select_on = 0;
        }
        else if (select == 5)
        {
            select_on = 0;
            Main_screen(screen);
        }
        else
        {
            printf("Please enter correctly");
        }
    }

    return 0;
}

int Collection_screen(char* screen)
{
    Sry_screen(screen);

    return 0;
}
