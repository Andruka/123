all: main.cpp file.cpp  kod.cpp menu.cpp menu.h find.cpp phone.cpp phone.h
	g++ main.cpp menu.cpp phone.cpp kod.cpp find.cpp file.cpp -g -o telefon
