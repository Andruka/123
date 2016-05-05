#include <iostream>
#include <cstring>
class phone{
	char model[80];
	char os[80];
	float ram;
	float dispSize;
        int cost;
	int number;
     public:
	phone();
	phone(const char model1[],const char os1[] ,float ram1 ,float dispSize1 ,int cost1, int number1);
	void show();
	int get_ram(float ra);
	float give_ram();
	int get_dispSize(float disp);
	float give_dispSize();
	int get_number(int num);
	int give_number();
        int get_cost(int co);
        int give_cost();
	int get_model(const char model1[]);
	int give_model(char *&mod);
	int get_os(const char os1[]);
	int give_os(char *&os1);
	friend std::istream &operator>>(std::istream & stream , phone &z);
	friend std::ostream &operator<<(std::ostream & stream,phone z);
};
