#include "phone.h"
#include <vector>
using namespace std;
int menu();
int dobavlenie(vector<phone> &vktr);
int prosm (vector<phone> &vktr);
int udal(vector<phone> &vktr);
int rewrite_file(vector<phone> &vktr , char *name_file);
int open_file(vector<phone> &vktr , char *name_file);
int find_model(vector<phone> &vktr);
int find_os(vector<phone> &vktr);
int find_ram(vector<phone> &vktr);
int find_dispSize(vector<phone> &vktr);
int find_cost(vector<phone> &vktr);
int find_number(vector<phone> &vktr);
int find_all_atribut(vector<phone> &vktr);
int redakt(vector<phone> &vktr);
