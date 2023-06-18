#include "GameObject.h"
#include "JKG_screen.h"
#include "GameStage.h"

void MyCharMapMove(char* screen, int select, int select_2, int x, int y)
{
	if (select == 1) // 짧은 가로
	{
		if (select_2 == 1) // 왼쪽 이동
		{
			for (int i = 0; i < 10; i++)
			{
				Sleep(100);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "P", x - 2, 1);
				Write_Screen(screen, " ", x, 1);
				printf("%s", screen);
				x -= 2;
				if (i == 9)
				{
					Write_Screen(screen, "  ", x, 1);
					x += 1;
				}
			}
		}
		if (select_2 == 2) // 오른쪽 이동
		{
			for (int i = 0; i < 10; i++)
			{
				Sleep(100);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "P", x + 2, 1);
				Write_Screen(screen, " ", x, 1);
				printf("%s", screen);
				x += 2;
				if (i == 9)
				{
					Write_Screen(screen, "  ", x, 1);
					x -= 1;
				}
			}
		}
	}
	if (select == 2) // 긴 가로
	{
		if (select_2 == 1) // 왼쪽 이동
		{
			for (int i = 0; i < 18; i++)
			{
				Sleep(100);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "P", x - 2, 1);
				Write_Screen(screen, " ", x, 1);
				printf("%s", screen);
				x -= 2;
			}
		}
		if (select_2 == 2) // 오른쪽 이동
		{
			for (int i = 0; i < 18; i++)
			{
				Sleep(100);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "P", x + 2, 1);
				Write_Screen(screen, " ", x, 1);
				printf("%s", screen);
				x += 2;
			}
		}
	}
	if (select == 3) // 짧은세로
	{
		if (select_2 == 1) // 위로 이동
		{
			for (int i = 0; i < 8; i++)
			{
				Sleep(100);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "P", y - 50, 1);
				Write_Screen(screen, " ", y, 1);
				printf("%s", screen);
				y -= 50;
			}
		}
		if (select_2 == 2) // 아래로 이동
		{
			for (int i = 0; i < 8; i++)
			{
				Sleep(100);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "P", y + 50, 1);
				Write_Screen(screen, " ", y, 1);
				printf("%s", screen);
				y += 50;
			}
		}
	}
	if (select == 4) // 긴 세로
	{
		if (select_2 == 1) // 위로 이동
		{
			for (int i = 0; i < 16; i++)
			{
				Sleep(100);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "P", y - 50, 1);
				Write_Screen(screen, " ", y, 1);
				printf("%s", screen);
				y -= 50;
			}
		}
		if (select_2 == 2) // 아래로 이동
		{
			for (int i = 0; i < 16; i++)
			{
				Sleep(100);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "P", y + 50, 1);
				Write_Screen(screen, " ", y, 1);
				printf("%s", screen);
				y += 50;
			}
		}
	}
}

void MyCharStat(int Level, int PlayerHp, int PlayerAtk, int Exp, int LevelUp, int MonsterHp, int MonsterAtk, int select, int BossOn)
{
	if (BossOn == 0)
	{
		Set_cursorpos(13, 14);
		printf("%d", Level);
		Set_cursorpos(13, 15);
		printf("%d", PlayerHp);
		Set_cursorpos(13, 16);
		printf("%d", PlayerAtk);
		Set_cursorpos(6, 18);
		printf("%d", Exp);
		Set_cursorpos(12, 18);
		printf("%d", LevelUp);
		if (select == 1)
		{
			Set_cursorpos(42, 14);
			printf("%d", MonsterHp);
			Set_cursorpos(42, 16);
			printf("%d", MonsterAtk);
		}
		Set_cursorpos(0, 0);
	}
	if (BossOn == 1)
	{
		Set_cursorpos(13, 21);
		printf("%d", Level);
		Set_cursorpos(13, 22);
		printf("%d", PlayerHp);
		Set_cursorpos(13, 23);
		printf("%d", PlayerAtk);
		Set_cursorpos(6, 25);
		printf("%d", Exp);
		Set_cursorpos(12, 25);
		printf("%d", LevelUp);
		if (select == 1)
		{
			Set_cursorpos(42, 21);
			printf("%d", MonsterHp);
			Set_cursorpos(42, 23);
			printf("%d", MonsterAtk);
		}
		Set_cursorpos(0, 0);
	}
}

void MonsterAttack(char* screen, int Num, int x)
{
	if (Num == 1)
	{
		for (int i = 0; i < 19; i++)
		{
			Sleep(5);
			Set_cursorpos(0, 0);
			Write_Screen(screen, " <(==== ", (x + 44) - 1, 1);
			printf("%s", screen);
			x -= 1;
		}
		for (int i = 0; i < 6; i++)
		{
			Set_cursorpos(0, 0);
			Write_Screen(screen, " ", (x + 45) + 1, 1);
			printf("%s", screen);
			x += 1;
		}
	}
	if (Num == 2)
	{
		for (int i = 0; i < 20; i++)
		{
			Sleep(5);
			Set_cursorpos(0, 0);
			Write_Screen(screen, "  [:O:] ", x - 1, 1);
			Write_Screen(screen, " ()MMM() ", (x + 50) - 1, 1);
			Write_Screen(screen, " / N N ", (x + 100) - 1, 1);
			printf("%s", screen);
			x -= 1;
		}
		for (int i = 0; i < 20; i++)
		{
			Sleep(5);
			Set_cursorpos(0, 0);
			Write_Screen(screen, "  [:O:] ", x + 1, 1);
			Write_Screen(screen, " ()MMM() ", (x + 50) + 1, 1);
			Write_Screen(screen, " / N N ", (x + 100) + 1, 1);
			printf("%s", screen);
			x += 1;
		}
	}
	if (Num == 3)
	{
		for (int i = 0; i < 20; i++)
		{
			Sleep(5);
			Set_cursorpos(0, 0);
			Write_Screen(screen, "  O ", x - 1, 1);
			Write_Screen(screen, " MMM ", (x + 50) - 1, 1);
			Write_Screen(screen, " ||| ", (x + 100) - 1, 1);
			printf("%s", screen);
			x -= 1;
		}
		for (int i = 0; i < 20; i++)
		{
			Sleep(5);
			Set_cursorpos(0, 0);
			Write_Screen(screen, "  O ", x + 1, 1);
			Write_Screen(screen, " MMM ", (x + 50) + 1, 1);
			Write_Screen(screen, " ||| ", (x + 100) + 1, 1);
			printf("%s", screen);
			x += 1;
		}
	}
	if (Num == 4)
	{
		for (int i = 0; i < 19; i++)
		{
			Sleep(5);
			Set_cursorpos(0, 0);
			Write_Screen(screen, " ===== ", (x + 44) - 1, 1);
			printf("%s", screen);
			x -= 1;
		}
		for (int i = 0; i < 6; i++)
		{
			Set_cursorpos(0, 0);
			Write_Screen(screen, " ", (x + 45) + 1, 1);
			printf("%s", screen);
			x += 1;
		}
	}
	if (Num == 5)
	{
		for (int i = 0; i < 14; i++)
		{
			Sleep(5);
			Set_cursorpos(0, 0);
			Write_Screen(screen, "  　　　／⌒` ", x - 1, 1);
			Write_Screen(screen, " 　　  / ^ω^`` ", (x + 50) - 1, 1);
			Write_Screen(screen, " 　＿ノ  ``　ノ ＼ ", (x + 100) - 1, 1);
			Write_Screen(screen, " /　`/ ⌒Ｙ⌒ Ｙ　`` ", (x + 150) - 1, 1);
			Write_Screen(screen, " ( 　(三 人 三 /　　| ", (x + 200) - 1, 1);
			Write_Screen(screen, " |　)⌒＼ ￣￣` 　 ノ ", (x + 250) - 1, 1);
			Write_Screen(screen, " `＿＿＿＞`＿＿_／ ", (x + 300) - 1, 1);
			Write_Screen(screen, " 　　 ｜( 王 )| ", (x + 350) - 1, 1);
			Write_Screen(screen, " 　　 / `ㅡㅡ  ) ", (x + 400) - 1, 1);
			Write_Screen(screen, " 　　/　 /_／　 | ", (x + 450) - 1, 1);
			Write_Screen(screen, " 　 ｜　　/　ノノ ", (x + 500) - 1, 1);
			printf("%s", screen);
			x -= 1;
		}
		for (int i = 0; i < 14; i++)
		{
			Sleep(5);
			Set_cursorpos(0, 0);
			Write_Screen(screen, "  　　　／⌒` ", x + 1, 1);
			Write_Screen(screen, " 　　  / ^ω^`` ", (x + 50) + 1, 1);
			Write_Screen(screen, " 　＿ノ  ``　ノ ＼ ", (x + 100) + 1, 1);
			Write_Screen(screen, " /　`/ ⌒Ｙ⌒ Ｙ　`` ", (x + 150) + 1, 1);
			Write_Screen(screen, " ( 　(三 人 三 /　　| ", (x + 200) + 1, 1);
			Write_Screen(screen, " |　)⌒＼ ￣￣` 　 ノ ", (x + 250) + 1, 1);
			Write_Screen(screen, "  `＿＿＿＞`＿＿_／ ", (x + 300) + 1, 1);
			Write_Screen(screen, " 　　 ｜( 王 )| ", (x + 350) + 1, 1);
			Write_Screen(screen, " 　　 / `ㅡㅡ  ) ", (x + 400) + 1, 1);
			Write_Screen(screen, " 　　/　 /_／　 | ", (x + 450) + 1, 1);
			Write_Screen(screen, " 　 ｜　　/　ノノ ", (x + 500) + 1, 1);
			printf("%s", screen);
			x += 1;
		}
	}
}

void MyCharAttack(char* screen, int x)
{
	for (int i = 0; i < 20; i++)
	{
		Sleep(5);
		Set_cursorpos(0, 0);
		Write_Screen(screen, "  /)/) ", x + 1, 1);
		Write_Screen(screen, " ( '^') ", (x + 50) + 1, 1);
		Write_Screen(screen, "  |^_|^ ", (x + 100) + 1, 1);
		printf("%s", screen);
		x += 1;
	}
	for (int i = 0; i < 20; i++)
	{
		Sleep(5);
		Set_cursorpos(0, 0);
		Write_Screen(screen, "  /)/) ", x - 1, 1);
		Write_Screen(screen, " ( '^') ", (x + 50) - 1, 1);
		Write_Screen(screen, "  |^_|^ ", (x + 100) - 1, 1);
		printf("%s", screen);
		x -= 1;
	}
}

void Win_or_Die(char* screen, int Num, int MonsNum)
{
	if (Num == 1) // 몬스터 컷
	{
		if (MonsNum == 1)
		{
			for (int i = 0; i < 3; i++)
			{
				Sleep(500);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "  O ", 338, 1);
				Write_Screen(screen, " MMM ", 388, 1);
				Write_Screen(screen, " ||| ", 438, 1);
				printf("%s", screen);

				Sleep(500);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "      ", 338, 1);
				Write_Screen(screen, "      ", 388, 1);
				Write_Screen(screen, "       ", 438, 1);
				printf("%s", screen);
			}
		}
		if (MonsNum == 2)
		{
			for (int i = 0; i < 3; i++)
			{
				Sleep(500);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "  ___ ", 338, 1);
				Write_Screen(screen, " (-O-) ", 388, 1);
				Write_Screen(screen, " ||||| ", 438, 1);
				printf("%s", screen);

				Sleep(500);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "       ", 338, 1);
				Write_Screen(screen, "       ", 388, 1);
				Write_Screen(screen, "       ", 438, 1);
				printf("%s", screen);
			}
		}
		if (MonsNum == 3)
		{
			for (int i = 0; i < 3; i++)
			{
				Sleep(500);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "  [:O:] ", 338, 1);
				Write_Screen(screen, " ()MMM() ", 388, 1);
				Write_Screen(screen, " / N N ", 438, 1);
				printf("%s", screen);

				Sleep(500);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "        ", 338, 1);
				Write_Screen(screen, "         ", 388, 1);
				Write_Screen(screen, "        ", 438, 1);
				printf("%s", screen);
			}
		}
		if (MonsNum == 4)
		{
			for (int i = 0; i < 3; i++)
			{
				Sleep(500);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "   |O| ", 338, 1);
				Write_Screen(screen, " {M(O)M} ", 388, 1);
				Write_Screen(screen, "  M(^)M  ", 438, 1);
				printf("%s", screen);

				Sleep(500);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "        ", 338, 1);
				Write_Screen(screen, "         ", 388, 1);
				Write_Screen(screen, "        ", 438, 1);
				printf("%s", screen);
			}
		}
		if (MonsNum == 5)
		{
			for (int i = 0; i < 3; i++)
			{
				Sleep(500);
				Set_cursorpos(0, 0);
				Write_Screen(screen, "  　　　／⌒` ", 174, 1);
				Write_Screen(screen, "　 　  / ^ω^`` ", 224, 1);
				Write_Screen(screen, "　 ＿ノ  ``　ノ ＼ ", 274, 1);
				Write_Screen(screen, " /　`/ ⌒Ｙ⌒ Ｙ　`` ", 324, 1);
				Write_Screen(screen, " ( 　(三 人 三 /　　| ", 374, 1);
				Write_Screen(screen, " |　)⌒＼ ￣￣` 　 ノ ", 424, 1);
				Write_Screen(screen, "  `＿＿＿＞`＿＿_／ ", 474, 1);
				Write_Screen(screen, " 　　 ｜( 王 )| ", 524, 1);
				Write_Screen(screen, "　 　 / `ㅡㅡ  ) ", 574, 1);
				Write_Screen(screen, "　 　/　 /_／　 | ", 624, 1);
				Write_Screen(screen, "　  ｜　　/　ノノ ", 674, 1);
				printf("%s", screen);

				Sleep(500);
				Set_cursorpos(0, 0);
				Write_Screen(screen, " 　　          ", 174, 1);
				Write_Screen(screen, "　　           ", 224, 1);
				Write_Screen(screen, "                   ", 274, 1);
				Write_Screen(screen, "                      ", 324, 1);
				Write_Screen(screen, "                      ", 374, 1);
				Write_Screen(screen, "                      ", 424, 1);
				Write_Screen(screen, "                      ", 474, 1);
				Write_Screen(screen, "                  ", 524, 1);
				Write_Screen(screen, "                  ", 574, 1);
				Write_Screen(screen, "                  ", 624, 1);
				Write_Screen(screen, "                  ", 674, 1);
				printf("%s", screen);
			}
		}
	
		Sleep(500);
		Set_cursorpos(15, 5);
		printf("적을 처치하였습니다");
		Sleep(500);
		Set_cursorpos(15, 6);
		printf("경험치를 얻었습니다");
		Sleep(2000);
		Set_cursorpos(0, 0);
	}
	if (Num == 2) // 사망
	{
		Sleep(1000);
		Set_cursorpos(0, 0);
		Write_Screen(screen, "  /)/) ", 308, 1);
		Write_Screen(screen, " ( x.x) ", 358, 1);
		Write_Screen(screen, "  | _|", 408, 1);
		printf("%s", screen);

		Sleep(1000);
		Set_cursorpos(0, 0);
		Write_Screen(screen, "       ", 308, 1);
		Write_Screen(screen, "  ⌒⌒ ", 358, 1);
		Write_Screen(screen, " ( x.x) ", 408, 1);
		printf("%s", screen);

		Sleep(500);
		Set_cursorpos(15, 5);
		printf("캐릭터가 사망했습니다");
		Sleep(500);
		Set_cursorpos(15, 6);
		printf("메인으로 돌아갑니다");
		Sleep(2000);
		Set_cursorpos(0, 0);
		Main_screen(screen);
	}
	if (Num == 3)
	{
		Sleep(1000);
		Set_cursorpos(0, 0);
		Write_Screen(screen, "  /)/) ", 456, 1);
		Write_Screen(screen, " ( x.x) ", 506, 1);
		Write_Screen(screen, "  | _|", 556, 1);
		printf("%s", screen);

		Sleep(1000);
		Set_cursorpos(0, 0);
		Write_Screen(screen, "       ", 456, 1);
		Write_Screen(screen, "  ⌒⌒ ", 506, 1);
		Write_Screen(screen, " ( x.x) ", 556, 1);
		printf("%s", screen);

		Sleep(500);
		Set_cursorpos(15, 5);
		printf("캐릭터가 사망했습니다");
		Sleep(500);
		Set_cursorpos(15, 6);
		printf("메인으로 돌아갑니다");
		Sleep(2000);
		Set_cursorpos(0, 0);
		system("cls");
		Main_screen(screen);
	}
}

void Battle(char* screen, int Num)
{
	int Battle_On = 1;
	int Battle_On_2 = 1;
	char BattleGo = '0';
	static int PlayerHp = 60;
	static int PlayerAtk = 25;
	static int Level = 12;
	static int Exp = 0;
	static int LevelUp = 90;
	 
	while (Battle_On)
	{
		int MonsterHp = 10;
		int MonsterAtk = 3;
		int SumDam = 0;
		if (Num == 1)
		{
			Battle_screen_clear(screen);
			MonsterHp = 20;
			MonsterAtk = 6;
			while (Battle_On_2)
			{
				Set_cursorpos(0, 0);
				Write_Screen(screen, "  /)/) ", 308, 1);
				Write_Screen(screen, " ( '^') ", 358, 1);
				Write_Screen(screen, "  |^_|^ ", 408, 1);

				Write_Screen(screen, "  ___ ", 338, 1);
				Write_Screen(screen, " (-O-) ", 388, 1);
				Write_Screen(screen, " ||||| ", 438, 1);
				printf("%s", screen);

				MyCharStat(Level, PlayerHp, PlayerAtk, Exp, LevelUp, MonsterHp, MonsterAtk, 1, 0);

				BattleGo = getch();

				if (BattleGo == '1')
				{
					MyCharAttack(screen, 308, 1);
					TakeDamege(screen, PlayerAtk, 1);
					MonsterHp -= PlayerAtk;
					if (MonsterHp <= 0)
					{
						Exp += 10;
						PlayerHp += SumDam;
						Win_or_Die(screen, 1, 2);
						if (Exp >= LevelUp)
						{
							Set_cursorpos(7, 5);
							printf("레벨업!");
							PlayerHp += 5;
							PlayerAtk += 2;
							Level += 1;
							Exp = 0;
							LevelUp += 5;
							if (Level >= 5)
							{
								LevelUp += 5;
							}
							MyCharStat(Level, PlayerHp, PlayerAtk, Exp, LevelUp, MonsterHp, MonsterAtk, 0, 0);
							Sleep(4000);
						}
						Stage_1_2(screen);
						Battle_On = 0;
						Battle_On_2 = 0;
					}
					MonsterAttack(screen, 1, 338);
					TakeDamege(screen, MonsterAtk, 2);
					PlayerHp -= MonsterAtk;
					SumDam += MonsterAtk;
					if (PlayerHp <= 0)
					{
						Win_or_Die(screen, 2, 0);
						PlayerHp = 10;
						PlayerAtk = 5;
						Battle_On = 0;
						Battle_On_2 = 0;
					}
				}
				if (BattleGo == '2')
				{
					MonsterAttack(screen, 1, 338);
					TakeDamege(screen, MonsterAtk, 2);
					PlayerHp -= MonsterAtk;
					SumDam += MonsterAtk;
					if (PlayerHp <= 0)
					{
						Win_or_Die(screen, 2, 0);
						PlayerHp = 10;
						PlayerAtk = 5;
						Battle_On = 0;
						Battle_On_2 = 0;
					}
					else if (PlayerHp > 0)
					{
						PlayerHp += SumDam;
						Stage_1_2(screen);
						Battle_On = 0;
						Battle_On_2 = 0;
					}
				}
			}
		}
		if (Num == 2)
		{
			Battle_screen_clear(screen);
			MonsterHp = 40;
			MonsterAtk = 10;
			while (Battle_On_2)
			{
				Set_cursorpos(0, 0);
				Write_Screen(screen, "  /)/) ", 308, 1);
				Write_Screen(screen, " ( '^') ", 358, 1);
				Write_Screen(screen, "  |^_|^ ", 408, 1);

				Write_Screen(screen, "  [:O:] ", 338, 1);
				Write_Screen(screen, " ()MMM() ", 388, 1);
				Write_Screen(screen, " / N N ", 438, 1);
				printf("%s", screen);

				MyCharStat(Level, PlayerHp, PlayerAtk, Exp, LevelUp, MonsterHp, MonsterAtk, 1, 0);

				BattleGo = getch();

				if (BattleGo == '1')
				{
					MyCharAttack(screen, 308, 2);
					TakeDamege(screen, PlayerAtk, 1);
					MonsterHp -= PlayerAtk;
					if (MonsterHp <= 0)
					{
						Exp += 20;
						PlayerHp += SumDam;
						Win_or_Die(screen, 1, 3);
						if (Exp >= LevelUp)
						{
							Set_cursorpos(7, 5);
							printf("레벨업!");
							PlayerHp += 5;
							PlayerAtk += 2;
							Level += 1;
							Exp = 0;
							LevelUp += 5;
							if (Level >= 5)
							{
								LevelUp += 5;
							}
							MyCharStat(Level, PlayerHp, PlayerAtk, Exp, LevelUp, MonsterHp, MonsterAtk, 0, 0);
							Sleep(4000);
						}
						Stage_1_2(screen);
						Battle_On = 0;
						Battle_On_2 = 0;
					}
					MonsterAttack(screen, 2, 338);
					TakeDamege(screen, MonsterAtk, 2);
					PlayerHp -= MonsterAtk;
					SumDam += MonsterAtk;
					if (PlayerHp <= 0)
					{
						Win_or_Die(screen, 2, 0);
						PlayerHp = 10;
						PlayerAtk = 5;
						Battle_On = 0;
						Battle_On_2 = 0;
					}
				}
				if (BattleGo == '2')
				{
					MonsterAttack(screen, 1, 338);
					TakeDamege(screen, MonsterAtk, 2);
					PlayerHp -= MonsterAtk;
					SumDam += MonsterAtk;
					if (PlayerHp <= 0)
					{
						Win_or_Die(screen, 2, 0);
						PlayerHp = 10;
						PlayerAtk = 5;
						Battle_On = 0;
						Battle_On_2 = 0;
					}
					else if (PlayerHp > 0)
					{
						PlayerHp += SumDam;
						Stage_1_2(screen);
						Battle_On = 0;
						Battle_On_2 = 0;
					}
				}
			}
		}
		if (Num == 3)
		{
			Battle_screen_clear(screen);
			while (Battle_On_2)
			{
				Set_cursorpos(0, 0);
				Write_Screen(screen, "  /)/) ", 308, 1);
				Write_Screen(screen, " ( '^') ", 358, 1);
				Write_Screen(screen, "  |^_|^ ", 408, 1);

				Write_Screen(screen, "  O ", 338, 1);
				Write_Screen(screen, " MMM ", 388, 1);
				Write_Screen(screen, " ||| ", 438, 1);
				printf("%s", screen);

				MyCharStat(Level, PlayerHp, PlayerAtk, Exp, LevelUp, MonsterHp, MonsterAtk, 1, 0);

				BattleGo = getch();

				if (BattleGo == '1')
				{
					MyCharAttack(screen, 308, 1);
					TakeDamege(screen, PlayerAtk, 1);
					MonsterHp -= PlayerAtk;
					if (MonsterHp <= 0)
					{
						Exp += 5;
						PlayerHp += SumDam;
						Win_or_Die(screen, 1, 1);
						if (Exp >= LevelUp)
						{
							Set_cursorpos(7, 5);
							printf("레벨업!");
							PlayerHp += 5;
							PlayerAtk += 2;
							Level += 1;
							Exp = 0;
							LevelUp += 5;
							if (Level >= 5)
							{
								LevelUp += 5;
							}
							MyCharStat(Level, PlayerHp, PlayerAtk, Exp, LevelUp, MonsterHp, MonsterAtk, 0, 0);
							Sleep(4000);
						}
						Stage_1_1(screen);
						Battle_On = 0;
						Battle_On_2 = 0;
					}
					MonsterAttack(screen, 3, 338);
					TakeDamege(screen, MonsterAtk, 2);
					PlayerHp -= MonsterAtk;
					SumDam += MonsterAtk;
					if (PlayerHp <= 0)
					{
						Win_or_Die(screen, 2, 0);
						PlayerHp = 10;
						PlayerAtk = 5;
						Battle_On = 0;
						Battle_On_2 = 0;
					}
				}
				if (BattleGo == '2')
				{
					MonsterAttack(screen, 3, 338);
					TakeDamege(screen, MonsterAtk, 2);
					PlayerHp -= MonsterAtk;
					SumDam += MonsterAtk;
					if (PlayerHp <= 0)
					{
						Win_or_Die(screen, 2, 0);
						PlayerHp = 10;
						PlayerAtk = 5;
						Battle_On = 0;
						Battle_On_2 = 0;
					}
					else if (PlayerHp > 0)
					{
						PlayerHp += SumDam;
						Stage_1_1(screen);
						Battle_On = 0;
						Battle_On_2 = 0;
					}
				}
			}
		}
		if (Num == 4)
		{
			Battle_screen_clear(screen);
			MonsterHp = 25;
			MonsterAtk = 10;
			while (Battle_On_2)
			{
				Set_cursorpos(0, 0);
				Write_Screen(screen, "  /)/) ", 308, 1);
				Write_Screen(screen, " ( '^') ", 358, 1);
				Write_Screen(screen, "  |^_|^ ", 408, 1);

				Write_Screen(screen, "   |O| ", 338, 1);
				Write_Screen(screen, " {M(O)M} ", 388, 1);
				Write_Screen(screen, "  M(^)M  ", 438, 1);
				printf("%s", screen);

				MyCharStat(Level, PlayerHp, PlayerAtk, Exp, LevelUp, MonsterHp, MonsterAtk, 1, 0);

				BattleGo = getch();

				if (BattleGo == '1')
				{
					MyCharAttack(screen, 308, 1);
					TakeDamege(screen, PlayerAtk, 1);
					MonsterHp -= PlayerAtk;
					if (MonsterHp <= 0)
					{
						Exp += 15;
						PlayerHp += SumDam;
						Win_or_Die(screen, 1, 4);
						if (Exp >= LevelUp)
						{
							Set_cursorpos(7, 5);
							printf("레벨업!");
							PlayerHp += 5;
							PlayerAtk += 2;
							Level += 1;
							Exp = 0;
							LevelUp += 5;
							if (Level >= 5)
							{
								LevelUp += 5;
							}
							MyCharStat(Level, PlayerHp, PlayerAtk, Exp, LevelUp, MonsterHp, MonsterAtk, 0, 0);
							Sleep(4000);
						}
						Stage_1_1(screen);
						Battle_On = 0;
						Battle_On_2 = 0;
					}
					MonsterAttack(screen, 4, 338);
					TakeDamege(screen, MonsterAtk, 2);
					PlayerHp -= MonsterAtk;
					SumDam += MonsterAtk;
					if (PlayerHp <= 0)
					{
						Win_or_Die(screen, 2, 0);
						PlayerHp = 10;
						PlayerAtk = 5;
						Battle_On = 0;
						Battle_On_2 = 0;
					}
				}
				if (BattleGo == '2')
				{
					MonsterAttack(screen, 1, 338);
					TakeDamege(screen, MonsterAtk, 2);
					PlayerHp -= MonsterAtk;
					SumDam += MonsterAtk;
					if (PlayerHp <= 0)
					{
						Win_or_Die(screen, 2, 0);
						PlayerHp = 10;
						PlayerAtk = 5;
						Battle_On = 0;
						Battle_On_2 = 0;
					}
					else if (PlayerHp > 0)
					{
						PlayerHp += SumDam;
						Stage_1_1(screen);
						Battle_On = 0;
						Battle_On_2 = 0;
					}
				}
			}
		}
		if (Num == 5)
		{
			Boss_Battle_screen_clear(screen);
			MonsterHp = 60;
			MonsterAtk = 20;
			while (Battle_On_2)
			{
				Set_cursorpos(0, 0);
				Write_Screen(screen, "  /)/) ", 456, 1);
				Write_Screen(screen, " ( '^') ", 506, 1);
				Write_Screen(screen, "  |^_|^ ", 556, 1);

				Write_Screen(screen, "  　　　／⌒` ", 174, 1);
				Write_Screen(screen, "　 　  / ^ω^`` ", 224, 1);
				Write_Screen(screen, "　 ＿ノ  ``　ノ ＼ ", 274, 1);
				Write_Screen(screen, " /　`/ ⌒Ｙ⌒ Ｙ　`` ", 324, 1);
				Write_Screen(screen, " ( 　(三 人 三 /　　| ", 374, 1);
				Write_Screen(screen, " |　)⌒＼ ￣￣` 　 ノ ", 424, 1);
				Write_Screen(screen, "  `＿＿＿＞`＿＿_／ ", 474, 1);
				Write_Screen(screen, " 　　 ｜( 王 )| ", 524, 1);
				Write_Screen(screen, "　 　 / `ㅡㅡ  ) ", 574, 1);
				Write_Screen(screen, "　 　/　 /_／　 | ", 624, 1);
				Write_Screen(screen, "　  ｜　　/　ノノ ", 674, 1);
				printf("%s", screen);

				MyCharStat(Level, PlayerHp, PlayerAtk, Exp, LevelUp, MonsterHp, MonsterAtk, 1, 1);

				BattleGo = getch();

				if (BattleGo == '1')
				{
					MyCharAttack(screen, 456, 1);
					TakeDamege(screen, PlayerAtk, 1);
					MonsterHp -= PlayerAtk;
					if (MonsterHp <= 0)
					{
						Exp += 100;
						PlayerHp += SumDam;
						Win_or_Die(screen, 1, 5);
						if (Exp >= LevelUp)
						{
							PlayerHp += 5;
							PlayerAtk += 2;
							Level += 1;
							Exp = 0;
							LevelUp += 5;
							if (Level >= 5)
							{
								LevelUp += 5;
							}
							MyCharStat(Level, PlayerHp, PlayerAtk, Exp, LevelUp, MonsterHp, MonsterAtk, 0, 1);
						}
						MyCharStat(Level, PlayerHp, PlayerAtk, Exp, LevelUp, MonsterHp, MonsterAtk, 0, 1);
						Victory_screen(screen);
						system("cls");
						Main_screen(screen);
						Battle_On = 0;
						Battle_On_2 = 0;
					}
					if (MonsterHp > 0)
					{
						MonsterAttack(screen, 5, 174);
						TakeDamege(screen, MonsterAtk, 2);
						PlayerHp -= MonsterAtk;
						SumDam += MonsterAtk;
						if (PlayerHp <= 0)
						{
							Win_or_Die(screen, 3, 0);
							PlayerHp = 10;
							PlayerAtk = 5;
							Battle_On = 0;
							Battle_On_2 = 0;
						}
					}
				}
				if (BattleGo == '2')
				{
					MonsterAttack(screen, 5, 174);
					TakeDamege(screen, MonsterAtk, 2);
					PlayerHp -= MonsterAtk;
					SumDam += MonsterAtk;
					if (PlayerHp <= 0)
					{
						Win_or_Die(screen, 3, 0);
						PlayerHp = 10;
						PlayerAtk = 5;
						Battle_On = 0;
						Battle_On_2 = 0;
					}
					else if (PlayerHp > 0)
					{
						PlayerHp += SumDam;
						system("cls");
						Stage_1_Boss_Road(screen);
						Battle_On = 0;
						Battle_On_2 = 0;
					}
				}
			}
		}
	}
}

void TakeDamege(char* screen, int Dam, int select)
{
	if (select == 1)
	{
		for (int i = 0; i < 5; i++)
		{
			Sleep(80);
			Set_cursorpos(0, 0);
			printf("%s", screen);
			Set_cursorpos(38, 7 - i);
			printf("%d", Dam);

			if (i == 4)
			{
				Sleep(700);
			}
		}
	}
	if (select == 2)
	{
		for (int i = 0; i < 5; i++)
		{
			Set_cursorpos(0, 0);
			Sleep(80);
			Set_cursorpos(0, 0);
			printf("%s", screen);
			Set_cursorpos(18, 7 - i);
			printf("%d", Dam);

			if (i == 4)
			{
				Sleep(700);
			}
		}
	}
}

