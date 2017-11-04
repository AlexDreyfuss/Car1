#pragma once
#include <iostream>
using namespace std;

class Car
{
	int car_year;
	int car_Engine_v;
	char* car_Color;
	char* car_Make;
	char* car_Model;
public:
	Car();
	Car(char* make, char* model, int year, int v, char* color);
	~Car();
	void print_Details();
	int getCC();
	int getYear();
	static char* compare_by_engine(Car* c1, Car* c2);
	static void compare(Car* c1, Car* c2);
	static char* compare_by_year(Car* c1, Car* c2);
};

