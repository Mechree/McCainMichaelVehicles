#include "Car_C.h"

Car_C::Car_C() : Vehicle_C()
{
	doors = 2;
}

Car_C::Car_C(int dr) : Vehicle_C()
{
	doors = dr;
}

Car_C::Car_C(int dr, string man, int yr) : Vehicle_C(man, yr)
{
	doors = dr;
}


int Car_C::Get_Car_Doors() const
{
	return doors;
}

void Car_C::Set_Car_Doors(int dr)
{
	doors = dr;
}

void Car_C::Display_Info()
{
	cout << "\nManufacturer : " << Get_Vehicle_Man();
	cout << "\nYear Built   : " << Get_Vehicle_Year();
	cout << "\nNum of Doors : " << doors;
}
