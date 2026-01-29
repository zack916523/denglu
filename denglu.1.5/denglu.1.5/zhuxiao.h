#pragma once
#include"class.h"
#include<iostream>
using namespace std;
void zhuxiao()
{
	name n03;
	card c03;
	int b = 0;//是否存在
	ofstream ofs_tname("t-minformation.txt", ios::out);//临时
	ofstream ofs_tcard("t-cinformation.txt", ios::out);//临时
	ifstream ifs_tname("t-minformation.txt", ios::in);//临时
	ifstream ifs_tcard("t-cinformation.txt", ios::in);//临时
	ifstream ifs_name("minformation.txt", ios::in);
	ifstream ifs_card("cinformation.txt", ios::in);
	cout << "请输入昵称" << endl;
	cin >> n03.c_name;
	cout << "请输入密码" << endl;
	cin >> c03.c_card;
	while (!ifs_card.eof() && !ifs_name.eof())
	{
		ifs_name >> n03.i_name;
		ifs_card >> c03.i_card;
		ofs_tname << n03.i_name << endl;
		ofs_tcard << c03.i_card << endl;
	}
	ofstream ofs_name("minformation.txt", ios::out);
	ofstream ofs_card("cinformation.txt", ios::out);
	while (!ifs_tcard.eof() && !ifs_tname.eof())
	{
		ifs_tcard >> c03.t_card;
		ifs_tname >> n03.t_name;
		if (strcmp(c03.t_card, c03.c_card) == 0 && strcmp(n03.t_name, n03.c_name) == 0)
		{
			b = 1;
		}
		else
		{
			ofs_name << n03.t_name << endl;
			ofs_card << c03.t_card << endl;
		}
	}
	ofs_name.close();
	ofs_card.close();
	ofs_tname.close();
	ofs_tcard.close();
	ifs_tname.close();
	ifs_tcard.close();
	ifs_name.close();
	ifs_card.close();
	if (b == 1)
	{
		cout << "注销成功" << endl;
		Sleep(3000);
		system("cls");
	}
	else
	{
		cout << "注销失败" << endl;
		cout << "此用户不存在请检查拼写" << endl;
		Sleep(3000);
		system("cls");
	}
}