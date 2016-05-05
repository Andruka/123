#include <iostream>
#include <cstdlib>
#include <vector>
#include <cstring>
#include "menu.h"
#include <limits>
using namespace std;
int find_model(vector<phone> &vktr)
{
system("clear");
int i;
char buf1[80],*buf2;
buf2=new char[80];
cout<<"Введите модель(минимум 3 символа!)"<<endl;
cin.ignore();
cin.getline(buf1,80);
for(i=0;i<vktr.size();i++)
	{
	vktr[i].give_model(buf2);
	if(strstr(buf1,buf2)&&strstr(buf2,buf1))
		{
		break;
		}

	}

delete buf2;
if(i+1>vktr.size()){return (-1);}
else {return i;}
}
int find_os(vector<phone> &vktr)
{
system("clear");
int i;
char buf1[80],*buf2;
buf2=new char[80];
cout<<"Введите операционную систему(минимум 3 символа!)"<<endl;
cin.ignore();
cin.getline(buf1,80);
for(i=0;i<vktr.size();i++)
	{
	vktr[i].give_os(buf2);
	if(strstr(buf1,buf2)&&strstr(buf2,buf1))
		{
		break;
		}
	}
delete buf2;
if(i+1>vktr.size()){return (-1);}
else {return i;}
}

int find_ram(vector<phone> &vktr)
{
system("clear");
int i;
char *buf1;
buf1=new char[80];
cout<<"Введите оперативную память"<<endl;
cin.ignore();
cin.getline(buf1,80);
for(i=0;i<vktr.size();i++)
	{
	if(atof(buf1)==(vktr[i].give_ram()))
		{
		break;
		}

	}
if(i+1>vktr.size()){return (-1);}
else {return i;}
}
int find_dispSize(vector<phone> &vktr)
{
system("clear");
int i;
char *buf1;
buf1=new char[80];
cout<<"Введите размер дисплея"<<endl;
cin.ignore();
cin.getline(buf1,80);
for(i=0;i<vktr.size();i++)
	{
	if(atof(buf1)==(vktr[i].give_dispSize()))
		{
		break;
		}

	}
if(i+1>vktr.size()){return (-1);}
else {return i;}
}
int find_cost(vector<phone> &vktr)
{
system("clear");
int i;
char *buf1;
buf1=new char[80];
cout<<"Введите цену"<<endl;
cin.ignore();
cin.getline(buf1,80);
for(i=0;i<vktr.size();i++)
	{
	if(atoi(buf1)==(vktr[i].give_cost()))
		{
		break;
		}

	}
if(i+1>vktr.size()){return (-1);}
else {return i;}
}
int find_number(vector<phone> &vktr)
{
system("clear");
int i;
char *buf1;
buf1=new char[80];
cout<<"Введите номер товара в каталоге"<<endl;
cin.ignore();
cin.getline(buf1,80);
for(i=0;i<vktr.size();i++)
	{
	if(atoi(buf1)==(vktr[i].give_number()))
		{
		break;
		}

	}
if(i+1>vktr.size()){return (-1);}
else {return i;}
}
