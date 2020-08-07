#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void game()
{
	//雷的存储信息
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = {0};

	//2.排查出的雷的信息
	char show[ROWS][COLS] = {0};
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	/*DisplayBoard(mine,ROW,COL);*/
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	/*DisplayBoard(mine, ROW, COL); */    //可以看到雷的位置！！！
	//扫雷
	FindMine(mine,show,ROW,COL);
}
void menu()
{
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("please enter the number:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("error\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}