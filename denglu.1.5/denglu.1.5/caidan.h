#pragma once
#include<iostream>
using namespace std;
void dl_1()//µÇÂ¼1
{
	cout << "       1¡¢µÇÂ¼        " << endl;
}
void dl_2()//µÇÂ¼2
{
	cout << "       1¡¢µÇÂ¼        <-----" << endl;
}
void zc_1()//×¢²á1
{
	cout << "       2¡¢×¢²á        " << endl;
}
void zc_2()//×¢²á2
{
	cout << "       2¡¢×¢²á        <-----" << endl;
}
void zx_1()//×¢Ïú1
{
	cout << "       3¡¢×¢Ïú        " << endl;
}
void zx_2()//×¢Ïú2
{
	cout << "       3¡¢×¢Ïú        <-----" << endl;
}
void tc_1()//ÍË³ö1
{
	cout << "       4¡¢ÍË³ö        " << endl;
}
void tc_2()//ÍË³ö2
{
	cout << "       4¡¢ÍË³ö        <-----" << endl;
}
void line()
{
	cout << "---------------------------" << endl;
}
void arrcaidan(int& ing)
{
	switch (ing)
	{
	case 1:
		line();
		dl_2();
		zc_1();
		zx_1();
		tc_1();
		line();
		break;
	case 2:
		line();
		dl_1();
		zc_2();
		zx_1();
		tc_1();
		line();
		break;
	case 3:
		line();
		dl_1();
		zc_1();
		zx_2();
		tc_1();
		line();
		break;
	case 4:
		line();
		dl_1();
		zc_1();
		zx_1();
		tc_2();
		line();
		break;
	}
}