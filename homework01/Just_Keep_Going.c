#include "JKG_screen.h"

char screen[1000];

int main()
{
    int num = 0;  // 메뉴화면 1234 고르는 변수
    int gameon = 1;  // 게임 유지시켜주는 변수
    Main_screen();

    while (gameon)
    {
        printf("\nInput Num >> ");
        scanf("%d", &num);

        if (num == 1)
        {
            Char_select_screen();
        }
        else if (num == 2)
        {
            Help_screen();
        }
        else if (num == 3)
        {
            Collection_screen();
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
