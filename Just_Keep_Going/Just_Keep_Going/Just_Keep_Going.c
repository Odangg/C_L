#include "JKG_screen.h"
#include "GameObject.h"
#include "GameStage.h"

int main()
{
    char screen[1500];  // ���� 50 ���� 20 ����ȭ��, ������ ��ũ�� ���� 50 ���� 27
    char num = '0';  // �޴�ȭ�� 1234 ���� ����
    int gameon = 1;  // ���� ���������ִ� ����
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