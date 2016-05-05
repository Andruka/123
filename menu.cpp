#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <fstream>
#include <vector>
#include "menu.h"
using namespace std;
int menu()
{
	vector<phone> vekt;
	char ch;
	int i;
	char name_file[50];
	cout<<"Укажите имя файла:";
	cin>>name_file;
	open_file(vekt , name_file);
	while(1)
	{
	cout<<"1-добавить"<<endl;
	cout<<"2-посмотреть"<<endl;
	cout<<"3-удалить"<<endl;
	cout<<"4-сохранить"<<endl;
	cout<<"5-поиск по атрибутам"<<endl;
	cout<<"6-редактировать"<<endl;
	cout<<"9-выход"<<endl;
	cin>>ch;
	if(ch=='9'){break;};
	switch(ch)
		{
		case '1' :dobavlenie(vekt);break;
		case '2' :prosm(vekt);break;
		case '3' :udal(vekt);break;
		case '4' :rewrite_file(vekt , name_file );break;
		case '5' :find_all_atribut(vekt);break;
		case '6' :redakt(vekt);break;
		}
	}
}
