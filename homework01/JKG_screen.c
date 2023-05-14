#include "JKG_screen.h"

int screen_clear()
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
        i = i + 1;
    }

    return 0;
}

int Main_screen()
{
    system("cls");
    screen_clear();
    char title[16] = "Just Keep Going";
    char version[5] = "V.01";
    char choice1[14] = "1. Game Start";
    char choice2[13] = "2. Help Menu";
    char choice3[14] = "3. Collection";
    char choice4[8] = "4. Exit";
    int i = 0;

    while (i < 15)
    {
        screen[117 + i] = title[i];
        i = i + 1;
    }
    i = 0;
    while (i < 4)
    {
        screen[172 + i] = version[i];
        i = i + 1;
    }
    i = 0;
    while (i < 13)
    {
        screen[506 + i] = choice1[i];
        i = i + 1;
    }
    i = 0;
    while (i < 12)
    {
        screen[556 + i] = choice2[i];
        i = i + 1;
    }
    i = 0;
    while (i < 13)
    {
        screen[606 + i] = choice3[i];
        i = i + 1;
    }
    i = 0;
    while (i < 7)
    {
        screen[656 + i] = choice4[i];
        i = i + 1;
    }
    printf("%s", screen);

    screen_clear();

    return 0;
}

int Sry_screen()
{
    system("cls");
    screen_clear();
    char sry[39] = "This is a feature not yet implemented.";
    int i = 0;
    int any = 0;

    while (i < 38)
    {
        screen[456 + i] = sry[i];
        i = i + 1;
    }
    printf("%s", screen);

    printf("\nEnter any number to return to the main screen.\n>> ");
    scanf("%d", &any);
    Main_screen();

    return 0;
}

int Help_screen()
{
    system("cls");
    char help1[38] = "It is a turn-based roguelike RPG game";
    char help2[40] = "where you choose the character you like";
    char help3[30] = "the most and make the choices";
    char help4[19] = "you like the most.";
    char help5[18] = "Just Keep Going!!";
    char out[32] = "Return to main?(1. Yes / 2. No)";
    int i = 0;
    int select = 0;
    int helpon = 1;

    while (i < 37)
    {
        screen[156 + i] = help1[i];
        i = i + 1;
    }
    i = 0;
    while (i < 39)
    {
        screen[205 + i] = help2[i];
        i = i + 1;
    }
    i = 0;
    while (i < 29)
    {
        screen[260 + i] = help3[i];
        i = i + 1;
    }
    i = 0;
    while (i < 18)
    {
        screen[315 + i] = help4[i];
        i = i + 1;
    }
    i = 0;
    while (i < 17)
    {
        screen[666 + i] = help5[i];
        i = i + 1;
    }
    i = 0;
    while (i < 31)
    {
        screen[860 + i] = out[i];
        i = i + 1;
    }
    printf("%s", screen);

    while (helpon)
    {
        printf("\n>>");
        scanf("%d", &select);
        if (select == 1)
        {
            Main_screen();
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

int Char_select_screen()
{
    system("cls");
    screen_clear();
    char game1[27] = "Choose a character to play";
    char mychar1[11] = "1. Warrior";
    char mychar2[11] = "2. Paladin";
    char mychar3[10] = "3. Wizard";
    char mychar4[12] = "4. Assassin";
    char back[16] = "5. Back to main";
    int charselect = 0;
    int i = 0;
    int select_on = 1;
    int select = 0;

    while (i < 26)
    {
        screen[162 + i] = game1[i];
        i = i + 1;
    }
    i = 0;
    while (i  < 10)
    {
        screen[369 + i] = mychar1[i];
        screen[419 + i] = mychar2[i];
        i = i + 1;
    }
    i = 0;
    while (i < 9)
    {
        screen[469 + i] = mychar3[i];
        i = i + 1;
    }
    i = 0;
    while (i < 11)
    {
        screen[519 + i] = mychar4[i];
        i = i + 1;
    }
    i = 0;
    while (i < 15)
    {
        screen[619 + i] = back[i];
        i = i + 1;
    }
    printf("%s", screen);

    while (select_on)
    {
        printf("\nInput num >> ");
        scanf("%d", &select);

        if (select >= 1 && select <= 4)
        {
            Sry_screen();
            select_on = 0;
        }
        else if (select == 5)
        {
            select_on = 0;
            Main_screen();
        }
        else
        {
            printf("Please enter correctly");
        }
    }

    return 0;
}

int Collection_screen()
{
    Sry_screen();

    return 0;
}
