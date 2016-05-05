#include <iostream>
#include <stdlib.h>
#include <vector>
#include <cstring>
#include "menu.h"
#include <limits>
using namespace std;
int dobavlenie(vector<phone> &vktr)
{
 system("clear");
 char buf[80];
 float ram1=0.0,dis1=0.0;
 int no=0,co=0,n,i,t=0;
 char *model;
 char *os;
 model = new char[80];
 os = new char [80];
 for(i=0;i<80;i++)
 {
 model[i]=os[i]=0;
 }
 cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
 while(strlen(model)<3)
 	{
        cout<<"Введите название модели (минимум три символа!)"<<endl;
	cin.getline(model,80);
	}
 while(strlen(os)<3)
 	{	
         cout<<"Введите  название операционной системы (минимум три символа!)"<<endl;
	 cin.getline(os,80);
	}
while(ram1<=0)
 	{	
         cout<<"Введите  размер оперативной памяти "<<endl;
	 cin.getline(buf,80);
	 ram1=atof(buf);
	}
while(dis1<=0)
 	{	
         cout<<"Введите  размер дисплея "<<endl;
	 cin.getline(buf,80);
	 dis1=atof(buf);
	}
 while(co<=0)
 	{	
         cout<<"Введите  цену товара "<<endl;
	 cin.getline(buf,80);
	 co=atoi(buf);
	}
 while(no<=0)
 	{
	n=0;	
        cout<<"Введите  номер товара в каталоге "<<endl;
	cin.getline(buf,80);
	for(i=0;i<vktr.size();i++)
		{
		if(atof(buf)==(vktr[i].give_number()))
			{n++;}
		}
	if(n==0)
		{
		no=atoi(buf);
		}
 	}
 vktr.push_back(phone( model  ,os , ram1 , dis1 ,co,  no));
 cout<<model<<os<<ram1<<dis1<<co<<no<<endl;
 delete [] model , os;
 cout<<"Добавлен новый элемент"<<endl;
}
int prosm (vector<phone> &vktr)
{
 system("clear");
 int i;
 cout<<"В базе "<<vktr.size()<<" единиц товара"<<endl;
 for(i=0;i<vktr.size();i++)
 	{
	cout<<endl<<"№"<<i+1<<endl;
	vktr[i].show();
	};
 cout<<endl;
}
int udal(vector<phone> &vktr)
{
 system("clear");
 int i;
 i=find_model(vktr);
 vktr.erase(vktr.begin()+i);
 cout<<"Элемент удалён"<<endl;
}
int find_all_atribut(vector<phone> &vktr)
{
system("clear");
int i;
char ch;
while(1)
	{
	cout<<"Выберите критерий поиска:"<<endl;
	cout<<"1-модель телефона"<<endl;
	cout<<"2-операционная система "<<endl;
	cout<<"3-оперативная память"<<endl;
	cout<<"4-размер дисплея"<<endl;
	cout<<"5-цена телефона"<<endl;
	cout<<"6-номер телефона в каталоге"<<endl;
	cout<<"9-ВЕРНУТЬСЯ НАЗАД"<<endl;
	cin>>ch;
	if(ch=='9'){break;};
	switch(ch)
		{
		case '1' :i=find_model(vktr);break;
		case '2' :i=find_os(vktr);break;
		case '3' :i=find_ram(vktr);break;
		case '4' :i=find_dispSize(vktr);break;
		case '5' :i=find_cost(vktr);break;
		case '6' :i=find_number(vktr);break;
		}
	if(i==-1)
		{
		cout<<"Товара с такими характеристиками нет"<<endl;		
		}
	else
		{
		vktr[i].show();
		}
		
	}
}
int redakt(vector<phone> &vktr)
{
int i,n,j;
char ch,*buf;
buf=new char[80];
while(1)
{
i=find_number(vktr);
if(i==-1)
	{
	cout<<"Товара с такими характеристиками нет"<<endl;		
	}
else	{
	vktr[i].show();
	break;
	}
}
cout<<"Выберите характеристику,которую хотите изменить"<<endl;
while(1)
	{
	cout<<"1-модель телефона"<<endl;
	cout<<"2-операционная система "<<endl;
	cout<<"3-оперативная память"<<endl;
	cout<<"4-размер дисплея"<<endl;
	cout<<"5-цена телефона"<<endl;
	cout<<"6-номер телефона в каталоге"<<endl;
	cout<<"9-ВЕРНУТЬСЯ НАЗАД"<<endl;
	cin>>ch;
	if(ch=='9'){break;};
	if(ch=='1')
		{
		cout<<"Введите новую модель(минимум три символа!)"<<endl;
		while(1)
		{
			if(strlen(buf)<3)
				{
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cin.getline(buf,80);
				}
			else{break;}
		}	
		vktr[i].get_model(buf);	
		break;
		}
	if(ch=='2')
		{
		cout<<"Введите новую операционную систему(минимум три символа!)"<<endl;
		while(1)
		{
			if(strlen(buf)<3)
				{
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cin.getline(buf,80);
				}
			else{break;}
		}	
		vktr[i].get_os(buf);	
		break;
		}
	if(ch=='3')
		{
		cout<<"Введите новую оперативную память"<<endl;
		while(1)
		{
			if(atof(buf)<0)
				{
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cin.getline(buf,80);
				}
			else{break;}
		}	
		vktr[i].get_ram(atof(buf));
		break;
		}
	if(ch=='4')
		{
		cout<<"Введите новый размер дисплея"<<endl;
		while(1)
		{
			if(atof(buf)<0)
				{
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cin.getline(buf,80);
				}
			else{break;}
		}	
		vktr[i].get_dispSize(atof(buf));
		break;
		}
	if(ch=='5')
		{
		cout<<"Введите новую цену "<<endl;
		while(1)
		{
			if(atoi(buf)<0)
				{
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cin.getline(buf,80);
				}
			else{break;}
		}	
		vktr[i].get_cost(atoi(buf));
		break;
		}
	if(ch=='6')
		{
		cout<<"Введите новый номер товара в каталоге  "<<endl;
		while(1)
		{
		n=0;	
		if(atoi(buf)<=0)
			{
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cin.getline(buf,80);	
			for(j=0;j<vktr.size();j++)
				{
				if(atof(buf)==(vktr[j].give_number()))
					{n++;}
				}
			if(n!=0){continue;}
			}	
		if(atof(buf)>0){break;}
		}	
		vktr[i].get_number(atof(buf));
		break;
		}		
	*buf='0';
	}
cout<<"Отредактированный элемент:"<<endl;
vktr[i].show();
delete []buf;
}

