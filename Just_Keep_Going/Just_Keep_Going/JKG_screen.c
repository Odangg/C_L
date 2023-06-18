#include "JKG_screen.h"
#include "GameStage.h"

void screen_clear(char* screen)
{
    for (int i = 0; i < 1000; i++)
    {
        int j = i % 50;

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
    }
}

void Set_cursorpos(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Set_cursorvisible()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorinfo;
    
    GetConsoleCursorInfo(consoleHandle, &cursorinfo);

    cursorinfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorinfo);

}

void Write_Screen(char* screen, const char* string, int x, int y)
{
    int i = x * y;
    int j = i % 50;
    int length = strlen(string);

    if (j >= 3 && j <= 47 && i >= 53 && i <= 1297)
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
}

void Story_Screen(char* screen)
{
    Set_cursorpos(0, 0);
    screen_clear(screen);
    printf("%s", screen);
    Set_cursorpos(18, 10);
    printf("이 이야기는");
    Sleep(3000);
    Set_cursorpos(14, 10);
    printf("한 토끼의 모험담이다");
    Sleep(3000);
}

void Main_screen(char* screen)
{
    Set_cursorpos(0, 0);
    screen_clear(screen);
    char mesg1[] = "Just Keep Going";
    char mesg2[] = "V.01";
    char mesg3[] = "1. 게임 시작";
    char mesg4[] = "2. 도움말";
    char mesg5[] = "3. 게임 종료";

    Write_Screen(screen, mesg1, 117, 1);
    Write_Screen(screen, mesg2, 172, 1);
    Write_Screen(screen, mesg3, 556, 1);
    Write_Screen(screen, mesg4, 606, 1);
    Write_Screen(screen, mesg5, 656, 1);
    printf("%s", screen);

    screen_clear(screen);
}

void Sry_screen(char* screen)
{
    Set_cursorpos(0, 0);
    screen_clear(screen);
    char any = '0';
    char mesg1[] = "아직 구현되지않은 콘텐츠입니다.";
    char mesg2[] = "아무키나 누르시면 메인으로 돌아갑니다";

    Write_Screen(screen, mesg1, 460, 1);
    Write_Screen(screen, mesg2, 856, 1);
    printf("%s", screen);
    printf("\n");
    any = getch();
    Main_screen(screen);
}

void Help_screen(char* screen)
{
    Set_cursorpos(0, 0);
    char select = '0';
    int helpon = 1;
    char mesg1[] = "턴제 로그라이크RPG게임입니다.";
    char mesg2[] = "게임에서 나오는 선택지중 원하는걸";
    char mesg3[] = "고르고 자신의 입맛대로 캐릭터를";
    char mesg4[] = "키워나가는 게임입니다.";
    char mesg5[] = "Just Keep Going!!";
    char mesg6[] = "아무키나 누르시면 메인으로 돌아갑니다.";

    Write_Screen(screen, mesg1, 211, 1);
    Write_Screen(screen, mesg2, 259, 1);
    Write_Screen(screen, mesg3, 310, 1);
    Write_Screen(screen, mesg4, 365, 1);
    Write_Screen(screen, mesg5, 666, 1);
    Write_Screen(screen, mesg6, 856, 1);
    printf("%s", screen);

    while (helpon)
    {
        select = getch();
        if (select)
        {
            Main_screen(screen);
            helpon = 0;
        }
    }
}

void Map_screen_clear(char* screen)
{
    screen_clear(screen);

    for (int i = 0; i < 1000; i++)
    {
        int j = i % 50;

        if (j >= 20 && j <= 30 && i >= 53 && i <= 947)
        {
            screen[i] = ' ';
        }
        else if (j >= 3 && j <= 47 && i >= 353 && i <= 597)
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
    }
}

void Map_BossRoom_clear(char* screen)
{
    screen_clear(screen);

    for (int i = 0; i < 1000; i++)
    {
        int j = i % 50;

        if (j >= 7 && j <= 43 && i >= 103 && i <= 897)
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
    }
}

void Map_screen_select_clear(char* screen, int select)  // 1번 세로 클리어 2번 가로 클리어 3번 ㅜ 모양 클리어
{
    screen_clear(screen);

    for (int i = 0; i < 1000; i++)
    {
        int j = i % 50;

        if (select == 1 && j >= 20 && j <= 30 && i >= 53 && i <= 947)
        {
            screen[i] = ' ';
        }
        else if (select == 2 || select == 3 && j >= 3 && j <= 47 && i >= 353 && i <= 597)
        {
            screen[i] = ' ';
        }
        else if (select == 3 && j >= 20 && j <= 30 && i >= 453 && i <= 947)
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
    }
}

void Battle_screen_clear(char* screen)
{
    for (int i = 0; i < 1000; i++)
    {
        int j = i % 50;

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
    }
    Write_Screen(screen, "=============================================", 553, 1);
    Write_Screen(screen, "               |             |               ", 603, 1);
    Write_Screen(screen, "  레벨  :      |             |    HP  :      ", 653, 1);
    Write_Screen(screen, "  HP    :      |  1. 공격    |               ", 703, 1);
    Write_Screen(screen, " 공격력 :      |             | 공격력 :     ", 753, 1);
    Write_Screen(screen, "      EXP      |  2. 도망    |               ", 803, 1);
    Write_Screen(screen, "       /       |             |               ", 853, 1);
    Write_Screen(screen, "               |             |               ", 903, 1);
}

void Boss_Battle_screen_clear(char* screen)
{
    for (int i = 0; i < 1350; i++)
    {
        int j = i % 50;

        if (j >= 3 && j <= 47 && i >= 53 && i <= 1297)
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
        if (i == 1349)
        {
            screen[i + 1] = '\0';
        }
    }
    Write_Screen(screen, "=============================================", 903, 1);
    Write_Screen(screen, "               |             |               ", 953, 1);
    Write_Screen(screen, "  레벨  :      |             |    HP  :      ", 1003, 1);
    Write_Screen(screen, "  HP    :      |  1. 공격    |               ", 1053, 1);
    Write_Screen(screen, " 공격력 :      |             | 공격력 :     ", 1103, 1);
    Write_Screen(screen, "      EXP      |  2. 도망    |               ", 1153, 1);
    Write_Screen(screen, "       /       |             |               ", 1203, 1);
    Write_Screen(screen, "               |             |               ", 1253, 1);
}

void Victory_screen(char* screen)
{
    char any = '0';
    Set_cursorpos(4, 9);
    printf("||   / |  / /                        // ");
    Set_cursorpos(4, 10);
    printf("||  /  | / /     ( )       __       //");
    Set_cursorpos(4, 11);
    printf("|| / /||/ /     / /     //   ) )   //");
    Set_cursorpos(4, 12);
    printf("||/ / |  /     / /     //   / /");
    Set_cursorpos(4, 13);
    printf("|  /  | /     / /     //   / /  O");
    Sleep(500);

    for (int i = 1; i < 7; i++)
    {
        Set_cursorpos(4, 9);
        printf("                                         ");
        Set_cursorpos(4, 10);
        printf("                                          ");
        Set_cursorpos(4, 11);
        printf("                                          ");
        Set_cursorpos(4, 12);
        printf("                                           ");
        Set_cursorpos(4, 13);
        printf("                                            ");
        Sleep(500);

        Set_cursorpos(4, 9);
        printf("\033[3%dm||   / |  / /                        // ", i);
        Set_cursorpos(4, 10);
        printf("||  /  | / /     ( )       __       //");
        Set_cursorpos(4, 11);
        printf("|| / /||/ /     / /     //   ) )   //");
        Set_cursorpos(4, 12);
        printf("||/ / |  /     / /     //   / /");
        Set_cursorpos(4, 13);
        printf("|  /  | /     / /     //   / /   O\033[0m");
        Sleep(500);
    }
    Set_cursorpos(6, 17);
    printf("아무키나 입력하면 메인으로 돌아갑니다");
    any = getch();
}



