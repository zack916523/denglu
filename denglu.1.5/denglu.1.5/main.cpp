#include<iostream>
#include<fstream>
#include<Windows.h>
#include<cstring>
#include<conio.h>
#include"zhuce.h"
#include"zhuxiao.h"
#include"denglu.h"
#include"caidan.h"
using namespace std;
int main()
{
	while (true)
	{	
		int	ing = 1;//第几行
		int a = 0;//选择
		line();
		dl_2();
		zc_1();
		zx_1();
		tc_1();
		line();
		while (true)
		{
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
					if (ing != 4)
					{
						ing += 1;
					}
					break;
				case 13:
					a = ing;
					break;
				}
				arrcaidan(ing);
			}
			if (a != 0)
			{
				break;
			}
		}
		if (a == 1)//登录
		{
			denglu();
		}
		if (a == 2)//注册
		{
			zhuce();
		}
		if (a == 3)
		{
			zhuxiao();
		}
		if (a == 4)
		{
			system("pause");
			return 0;
		}
	}
}