#pragma once
#include"class.h"
#include<iostream>
using namespace std;
void changecard()
{
	int abc = 0;
	name n5;
	card c5;
	ofstream ofs_tcard("t-cinformation.txt", ios::out);
	ifstream ifs_name("minformation.txt", ios::in);
	ifstream ifs_card("cinformation.txt", ios::in);
	cout << "êÇ³Æ" << endl;
	cin >> n5.c_name;
	cout << "Ô­ÃÜÂë" << endl;
	cin >> c5.i_card;
	cout << "ÏÖÃÜÂë" << endl;
	cin >> c5.c_card;
	while (!ifs_name.eof() && !ifs_card.eof())
	{
		ifs_name >> n5.t_name;
		ifs_card >> c5.t_card;
		if (strcmp(n5.c_name,n5.t_name) == 0)
		{
			if (strcmp(c5.i_card, c5.t_card) == 0)
			{
				abc = 1;
				ofs_tcard << c5.c_card << endl;
			}

		}
		else
		{
			ofs_tcard << c5.t_card << endl;
		}
	}
	ofs_tcard.close();
	ifs_card.close();
	ifs_name.close();
	ofstream ofs_card("cinformation.txt", ios::out);
	ifstream ifs_tcard("t-cinformation.txt", ios::in);
	while (!ifs_tcard.eof())
	{
		ifs_tcard >> c5.t_card;
		ofs_card << c5.t_card << endl;
	}
	ofs_card.close();
	ifs_tcard.close();
	remove("t-cinformation.txt");
	if (abc == 0)
	{
		cout << "êÇ³Æ»òÃÜÂë´íÎó" << endl;
		Sleep(3000);
		system("cls");
	}
	else
	{
		cout << "¸ü»»³É¹¦" << endl;
		Sleep(3000);
		system("cls");
	}
}