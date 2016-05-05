#include <cstring>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "menu.h"
using namespace std;
int open_file( vector<phone> &vktr , char *name_file)
{
 int i=0;
 char buf[80];
 ifstream fin(name_file);
 if(fin==NULL) 
 	{
	return 0; 
	}
 while(fin)
	{
	vktr.push_back(phone());
	fin.getline(buf,80);
	vktr[i].get_model(buf);
	fin.getline(buf,80);
	vktr[i].get_os(buf);
	fin.getline(buf,80);
	vktr[i].get_ram(atof(buf));
	fin.getline(buf,80);
	vktr[i].get_dispSize(atof(buf));
	fin.getline(buf,80);
	vktr[i].get_cost(atoi(buf));
	fin.getline(buf,80);
	vktr[i].get_number(atoi(buf));
	i++;
	}
vktr.erase(vktr.begin()+i);
 fin.close();
 return 1;
}

int rewrite_file(vector<phone> &vktr , char *name_file)
{
 int i;
 ofstream fout(name_file);
 if(vktr.size()>0)
	{
	fout<<vktr[0];
	for(i=1;i<vktr.size();i++)
	fout<<endl<<vktr[i];
	}
 fout.close();
 cout<<"Информация была сохранена в файле:"<<name_file<<endl;
}
