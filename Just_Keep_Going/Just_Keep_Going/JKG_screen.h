#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

void screen_clear(char* screen);
void Set_cursorpos(int x, int y);
void Set_cursorvisible();
void Main_screen(char* screen);
void Sry_screen(char* screen);
void Help_screen(char* screen);
void Write_Screen(char* screen, const char* string, int x, int y);
void Story_Screen(char* screen);
void Map_screen_clear(char* screen);
void Map_BossRoom_clear(char* screen);
void Map_screen_select_clear(char* screen, int select);
void Battle_screen_clear(char* screen);
void Boss_Battle_screen_clear(char* screen);
void Victory_screen(char* screen);