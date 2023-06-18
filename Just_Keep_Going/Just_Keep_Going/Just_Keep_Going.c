#include "JKG_screen.h"
#include "GameObject.h"
#include "GameStage.h"

int main()
{
    char screen[1500];  // 가로 50 세로 20 메인화면, 보스전 스크린 가로 50 세로 27
    char num = '0';  // 메뉴화면 1234 고르는 변수
    int gameon = 1;  // 게임 유지시켜주는 변수
    Main_screen(screen);
    Set_cursorvisible();

    while (gameon)
    {
        num = getch();

        if (num == '1')
        {
            Story_Screen(screen);
            Stage_1(screen);
        }
        else if (num == '2')
        {
            Help_screen(screen);
        }
        else if (num == '3')
        {
            printf("\nQuit the game.");
            gameon = 0;
        }
    }

    return 0;
}