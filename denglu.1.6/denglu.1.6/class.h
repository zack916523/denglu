#pragma once
#include<iostream>
using namespace std;
class name
{
public:
	~name()
	{
		if (o_name != NULL || i_name != NULL || c_name != NULL || t_name != NULL)
		{
			delete o_name;
			o_name = NULL;
			delete i_name;
			i_name = NULL;
			delete c_name;
			c_name = NULL;
			delete t_name;
			t_name = NULL;
		}
	}
	char* o_name = new char[1024];//输出
	char* i_name = new char[1024];//读取
	char* c_name = new char[1024];//输入
	char* t_name = new char[1024];//临时
};
class card
{
public:
	~card()
	{

		if (o_card != NULL || i_card != NULL || c_card != NULL || t_card != NULL)
		{
			delete o_card;
			o_card = NULL;
			delete i_card;
			i_card = NULL;
			delete c_card;
			c_card = NULL;
			delete t_card;
			t_card = NULL;
		}
	}
	char* o_card = new char[1024];//输出
	char* i_card = new char[1024];//读取
	char* c_card = new char[1024];//输入
	char* t_card = new char[1024];//临时
};