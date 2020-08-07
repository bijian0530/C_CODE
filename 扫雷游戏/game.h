#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#define ROW 9
#define COL 9
#include<stdlib.h>
#include<time.h>
#define EASY_COUNT 10
#define ROWS ROW+2
#define COLS COL+2
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
