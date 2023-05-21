#include "JKG_screen.h"

int main()
{
    char screen[1000];  /* 가로 50 세로 20 메인화면 */
    int num = 0;  // 메뉴화면 1234 고르는 변수
    int gameon = 1;  // 게임 유지시켜주는 변수
    Main_screen(screen);

    while (gameon)
    {
        printf("\nInput Num >> ");
        scanf("%d", &num);

        if (num == 1)
        {
            Char_select_screen(screen);
        }
        else if (num == 2)
        {
            Help_screen(screen);
        }
        else if (num == 3)
        {
            Collection_screen(screen);
        }
        else if (num == 4)
        {
            printf("Quit the game.");
            gameon = 0;
        }
        else
        {
            printf("Please enter correctly");
        }
    }
   
    return 0;
}
