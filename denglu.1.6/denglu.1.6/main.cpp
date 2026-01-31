#include<iostream>
#include<fstream>
#include<Windows.h>
#include<cstring>
#include"zhuce.h"
#include"zhuxiao.h"
#include"denglu.h"
#include"genghuan.h"
#include"caidan.h"
#include"keyfeel.h"
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
		cs_1();
		line();
		a = keyfeel(ing);
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
		if (a == 5)
		{
			changecard();
		}
	}
}