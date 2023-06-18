#pragma once

void MyCharMapMove(char* screen,int select,int select_2, int x, int y);
void MyCharStat(int Level, int PlayerHp, int PlayerAtk, int Exp, int LevelUp, int MonsterHp, int MonsterAtk, int select, int BossOn);
void MonsterAttack(char* screen, int Num, int x);
void MyCharAttack(char* screen, int x);
void Win_or_Die(char* screen, int Num, int MonsNum);
void Battle(char* screen, int Num);
void TakeDamege(char* screen, int Dam, int select);

