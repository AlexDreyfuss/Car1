#include "Car.h"


Car::Car()
{
	int car_year = 0;
	int car_Engine_v = 0 ;
	char* car_Color = nullptr;
	int  car_Color_size = 10;
	char* car_Make = nullptr;
	int  car_Make_size = 0;
	char* car_Model = nullptr;
	int  car_Model_size = 0;
}

Car::Car(char * make, char * model, int year, int v, char * color)
{
	if (0 < strlen(make))
	{
		car_Make = new char[strlen(make)+1];
		strncpy_s(car_Make, strlen(make)+1, make, strlen(make));
	}
	else
		std::cout << "make not initialized properly" << endl;
	if (0 < strlen(model))
	{
		car_Model = new char[strlen(model)+1];
		strncpy_s(car_Model, strlen(model)+1, model, strlen(model));
	}
	else
		std::cout << "model not initialized properly" << endl;
	if (0 < strlen(color))
	{
		car_Color = new char[strlen(color)+1];
		strncpy_s(car_Color, strlen(color)+1, color, strlen(color));
	}
	else
		std::cout << "color not initialized properly" << endl;
	car_year = year;
	car_Engine_v = v;
}

Car::~Car()
{
	delete [] car_Color;
	delete [] car_Make;
	delete [] car_Model;
}

void Car::print_Details()
{
	std::cout <<"Year: " << car_year <<
		"\nEngine: "<< car_Engine_v <<
		"\nColor: "<<car_Color <<
		"\nCompany: "<<car_Make <<
		"\nModel: "<< car_Model << endl;
}
int Car::getCC()
{
	return car_Engine_v;
}
int Car::getYear()
{
	return car_year;
}
char* Car::compare_by_engine(Car* c1, Car* c2)
{
	char* ret = nullptr;
	if (nullptr != c1 && nullptr != c2)
	{
		int sub = c1->getCC() - c2->getCC();
		if (0 < sub)
			ret = "stronger then\0";
		else
			if (0 > sub)
				ret = "weaker then\0";
			else
				ret = "as strong as\0";
	}
	return ret;
}
char* Car::compare_by_year(Car* c1, Car* c2)
{
	char* ret = nullptr;
	if (nullptr != c1 && nullptr != c2)
	{
		int sub = c1->getYear() - c2->getYear();
		if (0 < sub)
			ret = "younger then\0";
		else
			if (0 > sub)
				ret = "older then\0";
			else
				ret = "as old as\0";
	}
	return ret;
}

void Car::compare(Car* c1, Car* c2)
{
	std::cout << "Car#1 is " << compare_by_engine(c1, c2) << " and " << compare_by_year(c1, c2) << " Car#2!" << endl;
}

