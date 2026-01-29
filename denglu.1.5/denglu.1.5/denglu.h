#pragma once
#include"class.h"
#include<iostream>
using namespace std;
void denglu()
{
	int abc = 0;
	name name01;
	card card01;
	ifstream ifs_name("minformation.txt", ios::in);
	ifstream ifs_card("cinformation.txt", ios::in);
	cout << "ÇëÊäÈëêÇ³Æ" << endl;
	cin >> name01.c_name;
	cout << "ÇëÊäÈëÃÜÂë" << endl;
	cin >> card01.c_card;
	while (!ifs_name.eof() && !ifs_card.eof())
	{
		ifs_name >> name01.i_name;
		ifs_card >> card01.i_card;
		if (strcmp(name01.i_name, name01.c_name) == 0)
		{
			if (strcmp(card01.i_card, card01.c_card) == 0)
			{
				cout << "êÇ³ÆÕýÈ·£¬ÃÜÂëÕýÈ·" << endl;
				cout << "µÇÂ¼³É¹¦" << endl;
				Sleep(3000);
				abc = 1;
				system("cls");
			}
		}
	}
	if (ifs_name.eof() && ifs_card.eof() && abc == 0)
	{
		cout << "êÇ³Æ»òÃÜÂë´íÎó" << endl;
		cout << "µÇÂ¼Ê§°Ü" << endl;
		ifs_name.close();
		ifs_card.close();
		Sleep(2000);
		system("cls");
	}
}