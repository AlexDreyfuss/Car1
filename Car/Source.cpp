#include <iostream>
#include "Car.h"
using namespace std;

void main()
{
	Car c1("Ford\0", "Focus\0", 2016, 2600, "Blue\0");
	c1.print_Details();
	Car c2("Toyota\0", "Corolla\0", 2015, 2000, "Grey\0");
	c2.print_Details();

	Car::compare(&c1, &c2);
}