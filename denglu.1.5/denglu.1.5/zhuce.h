#pragma once
#include"class.h"
#include<iostream>
using namespace std;
void zhuce()
{
	int abc = 0;
	name n02;
	card c02;
	ofstream ofs_name("minformation.txt", ios::app);
	ofstream ofs_card("cinformation.txt", ios::app);
	ifstream ifs_name("minformation.txt", ios::in);
	ifstream ifs_card("cinformation.txt", ios::in);
	cout << "姓名" << endl;
	cin >> n02.o_name;
	cout << "密码" << endl;
	cin >> c02.o_card;
	cout << "验证中" << endl;
	Sleep(2000);
	while (!ifs_name.eof())//如果文件都没读取完
	{
		ifs_name >> n02.i_name;//输出存在的昵称
		if (strcmp(n02.i_name, n02.o_name) == 0)
		{
			cout << "该昵称已被注册" << endl;
			abc = 1;
			Sleep(2000);
			system("cls");
		}
	}
	if (ifs_name.eof()&&abc == 0)
	{
		ofs_card << c02.o_card << endl;
		ofs_name << n02.o_name << endl;
		ofs_name.close();
		ofs_card.close();	
		cout << "注册成功" << endl;
		Sleep(2000);
		system("cls");
	}	
}