#pragma once
#include<iostream>
#include<conio.h>
using namespace std;
int keyfeel(int &ing)
{
	while(true){
		if (_kbhit())
		{
			system("cls");
			int A = (int)_getch();
			switch (A)
			{
			case 72:
				if (ing != 1)
				{
					ing -= 1;
				}
				break;
			case 80:
				if (ing != 5)
				{
					ing += 1;
				}
				break;
			case 13:
				arrcaidan(ing);
				return ing;
			}
			arrcaidan(ing);
		}
	}
}