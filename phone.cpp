#include "phone.h"
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <cstring>
phone::phone()
{
 int i;
 for(i=0;i<80;i++)
 model[i]=os[i]=0;
 cost=0;
 ram = 0.0;
 dispSize = 0.0;
 number = 0; 
}
phone::phone(const char model1[],const char os1[],float ram1 ,float dispSize1, int cost1 , int number1 )
{
 strcpy(model,model1);
 strcpy(os,os1);
 ram =ram1;
 cost=cost1;
 dispSize = dispSize1;
 number =number1;
}
void phone::show()
{
 std::cout<<"Модель:"<<model<<"\n";
 std::cout<<"Операционная система:"<<os<<"\n";
 std::cout<<"Оперативная память:"<<ram<<"\n";
 std::cout<<"Размер дисплея:"<<dispSize<<"\n";
 std::cout<<"Цена товара:"<<cost<<"\n";
 std::cout<<"Номер телефона в каталоге:"<<number<<"\n";
}

int phone::get_ram(float ra)
{
 ram=ra;
 return 1;
}
float phone::give_ram()
{
 return ram;
}
int phone::get_dispSize(float disp)
{
 dispSize=disp;
 return 1;
}
float phone::give_dispSize()
{
 return dispSize;
}
int phone::get_cost(int co)
{
 cost = co;
 return 1;
}
int phone::give_cost()
{
 return cost;
}
int phone::get_number(int num)
{
 number = num;
 return 1;
}
int phone::give_number()
{
 return number;
}
int phone::get_model(const char model1[])
{
 strcpy(model,model1);
 return 1;
}
int phone::give_model(char *&mod)
{
 delete []mod;
 mod = new char[80];
 strcpy(mod,model);
 return 1;
}
int phone::get_os(const char os1[])
{
 strcpy(os,os1);
 return 1;
}
int phone::give_os(char *&os1)
{
 delete []os1;
 os1 = new char[80];
 strcpy(os1,os);
 return 1;
}
std::istream &operator>>(std::istream & stream , phone &z)
{
 stream>>z.model;
 stream>>z.os;
 stream>>z.ram;
 stream>>z.dispSize;
 stream>>z.cost;
 stream>>z.number;
 return stream;
}
std::ostream &operator<<(std::ostream & stream,phone z)
{
 stream<<z.model<<std::endl;
 stream<<z.os<<std::endl;
 stream<<z.ram<<std::endl;
 stream<<z.dispSize<<std::endl;
 stream<<z.cost<<std::endl;
 stream<<z.number;
 return stream;
}
