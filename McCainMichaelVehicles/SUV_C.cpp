#include "SUV_C.h"

SUV_C::SUV_C()
{
	fuelCap = 0.0;
}
SUV_C::SUV_C(float fc, int dr, string man, int yr) : Car_C(dr, man, yr)
{
	fuelCap = fc;
}
float SUV_C::Get_FuelCap() const
{
	return fuelCap;
}

void SUV_C::Set_FuelCap(float fc)
{
	fuelCap = fc;
}

void SUV_C::Display_Info()
{
	cout << "\nManufacturer: " << Get_Vehicle_Man();
	cout << "\nYear Built  : " << Get_Vehicle_Year();
	cout << "\nNum Doors   : " << Get_Car_Doors();
	cout << "\nFuel Cap    : " << fuelCap;
}
