#include "GameObject.h"
#include "JKG_screen.h"
#include "GameStage.h"

void Stage_1(char* screen)
{
	Set_cursorpos(0, 0);
	Map_screen_clear(screen);
	char select = '0';

	Write_Screen(screen, "1. 이동", 272, 1);
	Write_Screen(screen, "2. 이동", 460, 1);
	Write_Screen(screen, "3. 이동", 484, 1);
	Write_Screen(screen, "P", 875, 1);
	printf("%s", screen);

	while (1)
	{
		select = getch();

		if (select == '1')
		{
			Map_screen_clear(screen);
			MyCharMapMove(screen, 4, 1, 1, 875);
			Stage_1_Boss_Road(screen);
			break;
		}
		if (select == '2')
		{
			Map_screen_clear(screen);
			MyCharMapMove(screen, 3, 1, 1, 875);
			MyCharMapMove(screen, 1, 1, 475, 1);
			Stage_1_1(screen);
			break;
		}
		if (select == '3')
		{
			Map_screen_clear(screen);
			MyCharMapMove(screen, 3, 1, 1, 875);
			MyCharMapMove(screen, 1, 2, 475, 1);
			Stage_1_2(screen);
			break;
		}
		if (select == '4')
		{
			Battle(screen, 0);
			break;
		}
	}
}

void Stage_1_Boss_Road(char* screen)
{
	Set_cursorpos(0, 0);
	Map_screen_select_clear(screen, 1);
	char select = '0';

	Write_Screen(screen, "1. 보스", 122, 1);
	Write_Screen(screen, "2. 빠꾸", 922, 1);
	Write_Screen(screen, "P", 875, 1);
	printf("%s", screen);

	while (1)
	{
		select = getch();

		if (select == '1')
		{
			Write_Screen(screen, "       ", 122, 1);
			Write_Screen(screen, "       ", 922, 1);
			MyCharMapMove(screen, 4, 1, 1, 875);
			Stage_1_BossRoom(screen);
			break;
		}
		if (select == '2')
		{
			Stage_1(screen);
			break;
		}
	}
}

void Stage_1_BossRoom(char* screen)
{
	Set_cursorpos(0, 0);
	Map_BossRoom_clear(screen);
	char select = '0';

	Write_Screen(screen, "1. 전투", 160, 1);
	Write_Screen(screen, " 　　　／⌒`", 168, 1);
	Write_Screen(screen, "　　  / ^ω^``", 218, 1);
	Write_Screen(screen, "　＿ノ  ``　ノ ＼", 268, 1);
	Write_Screen(screen, "/　`/ ⌒Ｙ⌒ Ｙ　``", 318, 1);
	Write_Screen(screen, "( 　(三 人 三 /　　|", 368, 1);
	Write_Screen(screen, "|　)⌒＼ ￣￣` 　 ノ", 418, 1);
	Write_Screen(screen, " `＿＿＿＞`＿＿_／", 468, 1);
	Write_Screen(screen, "　　 ｜( 王 )|", 518, 1);
	Write_Screen(screen, "　　 / `ㅡㅡ  )", 568, 1);
	Write_Screen(screen, "　　/　 /_／　 |", 618, 1);
	Write_Screen(screen, "　 ｜　　/　ノノ", 668, 1);
	Write_Screen(screen, "P", 875, 1);
	Write_Screen(screen, "   2.빠꾸    ", 919, 1);
	printf("%s", screen);

	while (1)
	{
		select = getch();

		if (select == '1')
		{
			Battle(screen, 5);
			break;
		}
		if (select == '2')
		{
			Stage_1_Boss_Road(screen);
			break;
		}
	}
}

void Stage_1_1(char* screen)
{
	Set_cursorpos(0, 0);
	Map_screen_select_clear(screen, 3);
	char select = '0';

	Write_Screen(screen, " O", 405, 1);
	Write_Screen(screen, "MMM", 455, 1);
	Write_Screen(screen, "|||", 505, 1);
	Write_Screen(screen, "1. 전투", 460, 1);
	Write_Screen(screen, "{M(O)M}", 872, 1);
	Write_Screen(screen, "2. 이동", 672, 1);
	Write_Screen(screen, "3. 빠꾸", 484, 1);
	Write_Screen(screen, "P", 495, 1);
	printf("%s", screen);

	while (1)
	{
		select = getch();

		if (select == '1')
		{
			Write_Screen(screen, "       ", 460, 1);
			Write_Screen(screen, "       ", 484, 1);
			Write_Screen(screen, "       ", 672, 1);
			MyCharMapMove(screen, 2, 1, 495, 1);
			Battle(screen, 3);
			break;
		}
		if (select == '2')
		{
			Write_Screen(screen, "       ", 460, 1);
			Write_Screen(screen, "       ", 484, 1);
			Write_Screen(screen, "       ", 672, 1);
			MyCharMapMove(screen, 1, 1, 495, 1);
			MyCharMapMove(screen, 3, 2, 1, 475);
			Battle(screen, 4);
			break;
		}
		if (select == '3')
		{
			Stage_1(screen);
			break;
		}
	}
}

void Stage_1_2(char* screen)
{
	Set_cursorpos(0, 0);
	Map_screen_select_clear(screen, 3);
	char select = '0';

	Write_Screen(screen, " [:O:]", 440, 1);
	Write_Screen(screen, "()MMM()", 490, 1);
	Write_Screen(screen, "/ N N ", 540, 1);
	Write_Screen(screen, "1.전투", 483, 1);
	Write_Screen(screen, "  ___", 772, 1);
	Write_Screen(screen, " (-O-)", 822, 1);
	Write_Screen(screen, " |||||", 872, 1);
	Write_Screen(screen, "2. 전투", 672, 1);
	Write_Screen(screen, "3. 빠꾸", 460, 1);
	Write_Screen(screen, "P", 455, 1);
	printf("%s", screen);

	while (1)
	{
		select = getch();

		if (select == '1')
		{
			Write_Screen(screen, "       ", 460, 1);
			Write_Screen(screen, "       ", 483, 1);
			Write_Screen(screen, "       ", 672, 1);
			MyCharMapMove(screen, 2, 2, 455, 1);
			Battle(screen, 2);
			break;
		}
		if (select == '2')
		{
			Write_Screen(screen, "       ", 460, 1);
			Write_Screen(screen, "       ", 483, 1);
			Write_Screen(screen, "       ", 672, 1);
			MyCharMapMove(screen, 1, 2, 455, 1);
			MyCharMapMove(screen, 3, 2, 1, 475);
			Battle(screen, 1);
			break;
		}
		if (select == '3')
		{
			Stage_1(screen);
			break;
		}
	}
}
