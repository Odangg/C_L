#include "dino_screen.h"

int main()
{
	int game_state = 1;
	int input = 0;
	int answer;
	int menu_off = 1;

	while(game_state)
	{
		if(menu_off)
		{
			print_title_screen();
		}
		answer = 1;
		printf("input(1~3)>");
		scanf("%d",&input);

		if(input==2)
		{
			while(answer)
			{
				if(menu_off)
				{
					help_menu();
					sleep(2);
					menu_off = 0;
				}

				printf("Return to menu?  (1.yes 2. no)>");
				scanf("%d",&answer);

				if(answer==1)
				{
					
					input = 0;
					answer = 0;
				}
				else if(answer==2)
				{
					menu_off = 1;
				}
				else
				{
					printf("Please re-enter> ");
				}
			}
			
		}

		if(input==3)
		{
			game_state = 0;
		}
	}

	return 0;
}
